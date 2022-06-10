hello: calc_func.c calc_func.h
	mkdir -p build/intermediate
	mkdir -p build/
	gcc -c calc_func.c -o build/intermediate/calc_func.o
	gcc -shared -fPIC -o build/libcalc_func.so build/intermediate/calc_func.o
