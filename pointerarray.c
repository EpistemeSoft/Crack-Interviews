#include<stdio.h>

main()
{
   int array[] = { 20 , 23, 34, 33, 45, 23 , 45, 46, 34, 87};
   int i, y;
   int *ptr;


   printf("Values in Array are: "); 
   for(i = 0; i< 10; i++)
     printf("%d\t", array[i]);

    printf("\n"); 

    ptr = array;
    
    printf("Value in ptr is : %d\n", *ptr);

     y = *ptr++;

    printf("Value in ptr is : %d\n", y);


    
}

