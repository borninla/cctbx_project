#include <iostream>

#include <simtbx/nanoBragg/nanoBragg.h>
#include "herbgrind.h"
//#include "microcrystal.h"
//#include "george_sherrell.h"

void test_george_sherrell() {
  //George_Sherrell gs("/global/cscratch1/sd/alvovsky/ls49_big_data/data_sherrell/pf-rd-ox_fftkk.out");
}

int main() {
  int N = 5; //replacing later with crystal.number_of_cells call
 
 scitbx::vec2<int> detpixels_slowfast = (3000,3000);
  //std::cout << "detpixels_slowfast: " << detpixels_slowfast << std::endl;
  scitbx::vec3<int> Ncells_abc = (N,N,N);
  //std::cout << "Ncells_abc: " << Ncells_abc << std::endl;
  cctbx::uctbx::unit_cell unitcell; 
  //std::cout << "unitcell: " << unitcell << std::endl; //no print
  simtbx::nanoBragg::vec3 misset = (0,0,0);
  //std::cout << "misset: " << misset << std::endl;
  simtbx::nanoBragg::vec2 beam_center = (0,0);
  //std::cout << "beam_center: " << beam_center << std::endl; 
  
  double distance = 100;
  double pixelsize = 0.1;
  double wavelength = 1;
  double divergence = 0;
  double dispersion = 0;
  double mosaicity = 0;
  int oversample = 0;
  int vervbose = 1;

  //test_george_sherrell();
  
  HERBGRIND_BEGIN();
  //Microcrystal mc(4000, 4., 1.0);
  //mc.number_of_cells();

  
  simtbx::nanoBragg::nanoBragg nb(detpixels_slowfast, Ncells_abc, unitcell, misset, beam_center, distance, pixelsize, wavelength, divergence, dispersion, mosaicity, oversample, vervbose);
  
  HERBGRIND_END();  

  return 0;
}
