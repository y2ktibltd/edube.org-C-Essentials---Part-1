#include <stdio.h>                                                                                                   
int main(void) {
    char a;
    short int b;
    int c;
    long int d;
    long long int e;
    float f;
    double g;
    int *h;

    printf("%d byte for chars\n", sizeof(char));
    printf("%d byte for char variables\n", sizeof(a));
    printf("%d bytes for shorts\n", sizeof(short int));
    printf("%d bytes for short variables\n", sizeof(b));
    printf("%d bytes for ints\n", sizeof(int));
    printf("%d bytes for int variables\n", sizeof(c));
    printf("%d bytes for longs\n", sizeof(long int));
    printf("%d bytes for long variables\n", sizeof(d));
    printf("%d bytes for long longs\n", sizeof(long long int));
    printf("%d bytes for long long variables\n", sizeof(e));
    printf("%d bytes for floats\n", sizeof(float));
    printf("%d bytes for float variables\n", sizeof(f));
    printf("%d bytes for doubles\n", sizeof(double));
    printf("%d bytes for double variables\n", sizeof(g));
    printf("%d bytes for pointers\n", sizeof(int *));
    printf("%d bytes for pointer variables\n", sizeof(h));
    printf("%d bytes for address of char variable\n", sizeof(&a));
    char *pc=&a;
    printf("%d bytes for pointer to char variable\n", sizeof(pc));
    printf("%d bytes for value stored by pointer to char\n", sizeof(*pc));
    return 0;
}
