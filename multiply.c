#include <stdio.h>

void multiply(int *a, int *b, int *result) {
    *result = (*a) * (*b);
}
int main() {
    int num1 = 10;
    int num2 = 20;
    int product=0;
    multiply(&num1, &num2,&product);
    printf("The product is: %d\n", product); // Output: The product is: 200

    return 0;
}
