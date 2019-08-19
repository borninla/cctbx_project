#ifndef MICROCRYSTAL_H
#define MICROCRYSTAL_H

#define _USE_MATH_DEFINES

#include <cmath>

#include "not_implemented.h"
#include "gen_fmodel.h"

class Microcrystal{
  public:
    float illuminated_volume_um3;
    float domain_volume_um3;
    float domains_per_crystal;

    float direct_algo_res_limit = 1.7;

    //Gen_FModel GF = Gen_FModel(direct_algo_res_limit, /* pdb_text=local_data.get("pdb+lines"), */ "fft" /* , wavelength=wavelength_A */ );

    Microcrystal(int Deff_A, float length_um, float beam_diameter_um){
      illuminated_volume_um3 = M_PI * (beam_diameter_um/2.) * (beam_diameter_um/2.) * length_um;
      domain_volume_um3 = (4./3.) * M_PI * pow(Deff_A / 2. / 1.E4, 3);
      domains_per_crystal = illuminated_volume_um3 / domain_volume_um3;
      std::cout << "There are " << floor(domains_per_crystal) << " domains in the crystal" << std::endl;
    }
    
    int number_of_cells(){
      NotImplemented nie("number_of_cells()");
      std::cout << nie.what() << std::endl;
    }
};

#endif /* MICROCRYSTAL_H */
