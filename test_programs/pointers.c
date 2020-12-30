#include<stdio.h>

int main() {
    int foo = 100;
    int *foo_ptr = &foo;
    *foo_ptr = 42;
    printf("%d", *foo_ptr);
    return 0;
}
