
CC=gcc #Compile 
TARGET=vice #target file name

all:
	$(CC) init.c bitboards.c hashkeys.c board.c data.c vice.c -o $(TARGET)

clean: 
	rm $(TARGET)
