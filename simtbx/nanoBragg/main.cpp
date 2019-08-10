#include <iostream>

#include "nanoBragg.h"

int main() {
    simtbx::nanoBragg::nanoBragg nano;
    std::cout << "Size of nanoBragg object" << sizeof(nano) << std::endl;
    
    PyObject *file = NULL, *p = NULL;

    return 0;
}
