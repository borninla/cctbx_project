CC		:= g++
CCFLAGS 	:= -std=c++11 -g -w
INC		:= ${HOME}/CCTBX/cctbx_project ${HOME}/CCTBX/build/include ${HOME}/CCTBX/modules ${HOME}/CCTBX/modules/boost
INC		+= ${HOME}/herbgrind/valgrind/herbgrind/include #${HOME}/CCTBX/conda_base/include/python2.7
INC_PARAMS	:= $(foreach d, $(INC), -I$d)
MACRO		:= NANOBRAGG_HAVE_CUDA
MACRO_PARAMS	:= $(foreach m, $(MACRO), -D$m)
CPP_FILES	:= main.cpp ../nanoBragg.cpp ../../../cctbx/uctbx/uctbx.cpp
CPP_FILES	+= ../../../cctbx/sgtbx/change_of_basis_op.cpp ../../../cctbx/uctbx/spoil_optimization.cpp
CPP_FILES	+= ../../../cctbx/sgtbx/rt_mx.cpp ../../../cctbx/sgtbx/utils.cpp
CPP_FILES	+= ../../../cctbx/sgtbx/rot_mx.cpp ../../../cctbx/sgtbx/tr_vec.cpp 
TARGET		:= nanoBragg

all:
	$(CC) $(CCFLAGS) $(INC_PARAMS) $(MACRO_PARAMS) $(CPP_FILES) -o $(TARGET)
clean:
	rm $(TARGET)
