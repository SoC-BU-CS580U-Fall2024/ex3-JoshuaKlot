#include <stdio.h>
#include <string.h>
char my_array[] = {'l','m','f','a','o','\0'};
char *ptr;

int main(void)
{
    int i;
    ptr = &my_array[0];     /* point our pointer to the first
                                      element of the array */
    printf("\n\n");
    for (i = 0; i < 6; i++)
    {
      printf("my_array[%d] = %c\t",i,my_array[i]);   /*<-- A */
      printf("ptr + %d = %3d\n",i, *(ptr + i));        /*<-- B */
    }
    return 0;
}
