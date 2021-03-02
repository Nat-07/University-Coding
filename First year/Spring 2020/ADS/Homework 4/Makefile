#\
    CH-231-A\
    MakeFile\
    Justin Morris\
    j.morris@jacobs-university.de\

#files to compile
OBJS= mergeSort

#compiling all files in OBJS
all: $(OBJS)

#rules for compiling
SOURCE = $(OBJS).cpp
OUT	= $(OBJS)
CXX = g++
CXXFLAGS = -Wall -std=c++0x

#compliling
$%.o: $%
	$(CXX) $(CXXFLAGS) -o $(OUT)

#cleaning up all .o files from folder
clean:
	rm -f *.o