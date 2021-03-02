#\
    CH-231-A\
    MakeFile\
    Justin Morris\
    j.morris@jacobs-university.de\

#files to compile
OBJS= A1P1 A1P4 A1P5 testLinkedList testStack

#compiling all files in OBJS
all: $(OBJS)

#rules for compiling
SOURCE = $(OBJS).cpp
OUT	= $(OBJS)
CC = g++
FLAGS = -Wall

#compliling
$%.o: $%
	$(CC) $(FLAGS) -o $(OUT)

#cleaning up all .o files from folder
clean:
	rm -f *.o