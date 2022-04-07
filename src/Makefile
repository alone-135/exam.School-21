CC=GCC
CFLAGS= -Wall -Werror -Wextra

all: cipher
cipher: cipher.o 
	$(CC) cipher.o -o ../build/cipher

cipher.o: cipher.c
	$(CC) $(CFLAGS) -c cipher.c

clean:
	rm -rf ../build/
	rm -rf ./*.o

rebuild: clean all
