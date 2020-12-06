all:
	gcc -shared -fPIC -o lib/libpetest.so lib/testpe.c
	gcc -o readpe readpe.c -L./lib -lpetest

clean:
	rm -f lib/libpetest.so
	rm -f readpe

install:
	install -m 0644 lib/libpetest.so /usr/lib/libpetest.so

uninstall:
	rm -f /usr/lib/libpetest.so
