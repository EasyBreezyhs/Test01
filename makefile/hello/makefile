hello: hellospeak.o usespeak.o
	gcc hellospeak.o usespeak.o -o hello

hellospeak.o: hellospeak.c speak.h
	gcc -c hellospeak.c -o hellospeak.o

usespeak.o: usespeak.c speak.h
	gcc -c usespeak.c -o usespeak.o

clean: 
	rm hello usespeak.o hellospeak.o


