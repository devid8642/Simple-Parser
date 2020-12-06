all:
	gcc -shared -fPIC -o lib/libpetest.so lib/testpe.c

clean:
	rm -f lib/libpetest.so
