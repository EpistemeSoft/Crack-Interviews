#include<stdio.h>

char str[20];
main()
{
    int i;

    for(i = 0; i < 5; i++)
       str[i] = getchar();

    printf("String is :%s\n", str);
}



