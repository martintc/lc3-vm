compile:
	make clean
	mkdir build
	cc -Wall -g ./src/*.h ./src/*.c -o ./build/lc3

clean:
	rm -rf build
