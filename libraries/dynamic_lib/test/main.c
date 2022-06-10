#include <stdio.h>
#include <calc_func.h>

void main () {
    int a = 10;
    int b = 20;

    printf ("Addition: %d\n", calc_func_add (a, b));
    printf ("Subtraction: %d\n", calc_func_sub (a, b));
}
