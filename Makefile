
CC=gcc #Compile 
TARGET=vice #target file name

all:
	$(CC) init.c bitboards.c vice.c -o $(TARGET)

clean: 
	rm $(TARGET)
