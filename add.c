#include <stdio.h>

// Function to add two numbers and store the result in a third location
int add(int *a, int *b) {
    int result = *a + *b; 
    return result;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    int sum=add(&num1, &num2);
;

    
    printf("The sum is: %d\n", sum); // Output: The sum is: 30

    return 0;
}
