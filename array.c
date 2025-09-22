#include <stdio.h>

int main() {
    float arr1[25];
    int i, n;

    printf("Input number of elements to store:");
    scanf("%d", &n);

    printf(" Input %d elements(float) in array:\n", n);
    for (i = 0; i < n; i++) {
        printf(" Element %d: ", i);
        scanf("%f", arr1 + i);
    }

    printf("Elements entered: \n");
    for (i = 0; i < n; i++) {
        printf("Element %d: %.2f \n", i, *(arr1 + i));
    }
    return 0;
}
