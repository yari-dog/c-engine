SRC = $(wildcard src/*.c) $(wildcard src/**/*.c) $(wildcard src/**/**/*.c) $(wildcard src/**/**/**/*.c)

dir:
	mkdir -p build

main: dir src/main.c
	gcc -o build/main $(SRC) `sdl2-config --cflags --libs`

run: main
	build/main
