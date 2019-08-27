CC						:= g++
CCFLAGS 			:= -std=c++11 -g -w
INC						:= ${SCRATCH}/modules/cctbx_project ${SCRATCH}/build/include ${SCRATCH}/modules ${SCRATCH}/modules/boost
INC						+= ${SCRATCH}/herbgrind/valgrind/herbgrind/include #${SCRATCH}/conda_base/include/python2.7
INC_PARAMS		:= $(foreach d, $(INC), -I$d)
MACRO					:= NANOBRAGG_HAVE_CUDA
MACRO_PARAMS	:= $(foreach m, $(MACRO), -D$m)
CPP_FILES			:= main.cpp ../nanoBragg.cpp
TARGET				:= nanoBragg

all:
	$(CC) $(CCFLAGS) $(INC_PARAMS) $(MACRO_PARAMS) $(CPP_FILES) -o $(TARGET)
clean:
	rm $(TARGET)
