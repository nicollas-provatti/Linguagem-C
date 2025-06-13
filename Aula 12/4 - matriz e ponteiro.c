#include <stdio.h>

int main() {
    
    // [[1, 2, 3][4, 5, 6][7, 8, 9]]
    // [[*ptr][*ptr][*ptr]]
    // matriz -> matriz[0]
    // matriz[0]: [1, 2, 3]
    // matriz[1]: [4, 5, 6]
    // matriz[2]: [7, 8, 9]

    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int *matrizP = &matriz[0][0];

    printf("%p", matrizP);

    for (int i = 0; i < 9; i++) {
        printf("%d ", *(matrizP + i));
    }

    return 0;
}