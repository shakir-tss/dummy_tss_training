hello: calc_func.c calc_func.h
	mkdir -p build/intermediate
	mkdir -p build/
	gcc -c calc_func.c -o build/intermediate/calc_func.o
	ar rcs build/libcalc_func.a build/intermediate/calc_func.o
