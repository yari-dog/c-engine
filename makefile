SRC = $(wildcard src/*.c) $(wildcard src/**/*.c) $(wildcard src/**/**/*.c) $(wildcard src/**/**/**/*.c)

main: src/main.c
	gcc -o build/main $(SRC) `sdl2-config --cflags --libs`

run: main
	build/main
