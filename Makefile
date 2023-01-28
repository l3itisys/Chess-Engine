
CC=gcc #Compile 
TARGET=vice #target file name

all:
	$(CC) init.c vice.c -o $(TARGET)

clean: 
	rm $(TARGET)
