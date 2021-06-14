all: Sample16_01.exe

Sample16_01.exe: Sample16_01.o involution.o
		gcc -o Sample16_01.c Sample16_01.o involution.o
		
Sample16_01.o: Sample16_01.c involution.h
		gcc -c Sample16_01.c
		
involution.o: involution.c involution.h
		gcc -c involution.c
		
clean: 
		rm -f Sample16_01.exe *.o