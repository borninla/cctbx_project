#ifndef GEORGE_SHERRELL_H
#define GEORGE_SHERRELL_H

#include <fstream>
#include <scitbx/array_family/flex_types.h>

// from scitbx.array_family import flex

class George_Sherrell{
  public:
    scitbx::af::flex<double> energy; 
    scitbx::af::flex<double> fp;
    scitbx::af::flex<double> fdp;

    George_Sherrell(std::string filepath) {
      std::ifstream file;
      file.open(filepath);
    }
};

#endif /* GEORGE_SHERRELL_H */
