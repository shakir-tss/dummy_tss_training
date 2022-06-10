hello: main.c
	mkdir -p build/intermediate
	mkdir -p build/
	gcc -c main.c -I../calculator/ -o build/intermediate/main.o
	gcc build/intermediate/main.o -lcalc_func -L../calculator/build -o calculator_test
