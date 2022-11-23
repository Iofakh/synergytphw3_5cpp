#include<stdio.h>

main()
{
    int i = 0;
    while(i < 9)
    {
        printf("Hello\n");
        i++;
    }

    int j = 0;
    while(j < 15)
    {
        printf("%i\n", j++);
    }

    int k = 1;
    int n;
    printf("Enter the number up to which you want to display odd numbers, not including: ");
    scanf("%i",&n);
    while(k < n)
    {
        printf("%i\n", k++);
        k++;
    }
}
