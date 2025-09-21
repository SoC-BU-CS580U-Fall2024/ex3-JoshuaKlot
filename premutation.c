#include <stdio.h>
#include <string.h>


void swapLetters(char *ch1, char *ch2)
{
    char tmp;
    tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;
}


void premutation(char *cht, int startNum, int endNum)
{
    int i;
    if (startNum == endNum)
        printf("%s  ", cht); 
    else
    {
        for (i = startNum; i <= endNum; i++)
        {
            swapLetters((cht + startNum), (cht + i));
            premutation(cht, startNum + 1, endNum); 
            swapLetters((cht + startNum), (cht + i));
        }
    }
}

// Main function
int main()
{
    char str[] = "HMAli";
    int n = strlen(str);
    printf("Permutations of %s: \n", str);
    premutation(str, 0, n - 1); 
    printf("\n\n");
    return 0;
}
