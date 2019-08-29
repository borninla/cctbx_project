#include <iostream>

//#include <cctbx/uctbx.h>
//#include <scitbx/array_family/tiny.h>
#include <simtbx/nanoBragg/nanoBragg.h>

#include "herbgrind.h"
//#include "microcrystal.h"
//#include "george_sherrell.h"

void test_george_sherrell() {
  //George_Sherrell gs("/global/cscratch1/sd/alvovsky/ls49_big_data/data_sherrell/pf-rd-ox_fftkk.out");
}

int main() {
  int N = 72; //found by printing N in Python driver
 
  scitbx::vec2<int> detpixels_slowfast = (3000,3000);
  //std::cout << "detpixels_slowfast: " << detpixels_slowfast << std::endl;
  scitbx::vec3<int> Ncells_abc = (N,N,N);
  //std::cout << "Ncells_abc: " << Ncells_abc << std::endl;
  cctbx::uctbx::unit_cell uc(scitbx::af::double6(78.0, 78.0, 38.0, 90.0, 90.0, 90.0)); 
  //std::cout << "unitcell: " << unitcell << std::endl; //no print
  simtbx::nanoBragg::vec3 misset = (0.0, 0.0, 0.0);
  //std::cout << "misset: " << misset << std::endl;
  simtbx::nanoBragg::vec2 beam_center = (0,0);
  //std::cout << "beam_center: " << beam_center << std::endl; 

  double distance = 100;
  double pixelsize = 0.11;
  double wavelength = 1.7415469140949735;
  double divergence = 0;
  double dispersion = 0;
  double mosaicity = 0;
  int oversample = 0;
  int vervbose = 1;

  //test_george_sherrell();
  
  HERBGRIND_BEGIN();
  //Microcrystal mc(4000, 4., 1.0);
  //mc.number_of_cells();

  simtbx::nanoBragg::nanoBragg nb(detpixels_slowfast, Ncells_abc, uc, misset, beam_center, distance, pixelsize, wavelength, divergence, dispersion, mosaicity, oversample, vervbose);
  
  HERBGRIND_END();  

  return 0;
}
