compile:
	make clean
	mkdir build
	gcc -Wall -g ./src/*.c -o ./build/lc3

clean:
	rm -rf build
