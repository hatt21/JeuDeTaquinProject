CC= gcc
CFLAGS= -Wall 
LDFLAGS= -lm -lreadline 


calc:
	$(CC) $(CFLAGS) functionality.c  main.c operation.c parser.c -o calc $(LDFLAGS)



clean:
	rm -rf *.o

