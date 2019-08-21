#ifndef GEORGE_SHERRELL_H
#define GEORGE_SHERRELL_H

#include <fstream>
#include <vector>
#include <cstring>
#include <iostream>
#include <cstdlib>

#include <scitbx/array_family/flex_types.h>
#include <scitbx/array_family/versa.h>

class George_Sherrell{
  public:
    scitbx::af::flex<double> energy; 
    scitbx::af::flex<double> fp;
    scitbx::af::flex<double> fdp;

    George_Sherrell(std::string filepath) {
      std::ifstream file;
      file.open(filepath);
      char current_line[256];
      
      while(file.getline(current_line, 256)) {
        std::vector<double> tokens;
        char * current_token = strtok(current_line, "\t");
        while(current_token != nullptr) {
          tokens.push_back(atof(current_token));
          current_token = strtok(nullptr, "\t");
        }
        std::cout << tokens[0] << " " << tokens[1] << " " << tokens[2] << std::endl;
        //energy.append(tokens[0]);
        //fp.append(tokens[1]);
        //fdp.append(tokens[2]);
      }
    }
};

#endif /* GEORGE_SHERRELL_H */
