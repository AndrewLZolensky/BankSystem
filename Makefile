all: app

users.o: users.c
	gcc -c -g users.c

app.o: app.c
	gcc -c -g app.c

app: app.o users.o
	gcc -o app app.o users.o

clean:
	rm -f *.o

clobber: clean
	rm -f app
