#\
    CH-231-A\
    MakeFile\
    Justin Morris\
    j.morris@jacobs-university.de\

#files to compile
OBJS= countingSort bucketSort mostSigDigit

#compiling all files in OBJS
all: $(OBJS)

#rules for compiling
SOURCE = $(OBJS).cpp
OUT	= $(OBJS)
CC = g++
FLAGS = -Wall -std=c++0x

#compliling
$%.o: $%
	$(CC) $(FLAGS) -o $(OUT)

#cleaning up all .o files from folder
clean:
	rm -f *.o
