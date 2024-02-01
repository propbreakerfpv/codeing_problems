



#include <stdio.h>
#include <stdlib.h>
int* int_ptr() {
    int* a = malloc(sizeof(int));
    *a = 5;
    return a;
}

int main() {
    int* a = int_ptr();
    printf("ptr to: %i\n", *a);
    free(a);
}
