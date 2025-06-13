#include <stdio.h>

int main() {

    int array[5] = {1, 2, 3, 4, 5};
    
    printf("%p\n", array);
    printf("%d\n", *array);
    printf("%d\n", *(array + 1));

    int *arrayP = array;

    printf("%p\n", arrayP);
    printf("%d\n", *arrayP);
    printf("%d\n", *(arrayP + 1));

    return 0;
}