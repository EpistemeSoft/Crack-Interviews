#include<stdio.h>

#define BUS 1
#define TRAIN 2
#define FLIGHT 3
#define CAR 4

main()
{
    int jurney;

    printf("Enter Jurney Type\n");
    printf("BUS Jurney Type : 1\n");
    printf("TRAIN Jurney Type : 2\n");
    printf("FLIGHT Jurney Type : 3\n");
    printf("CAR Jurney Type : 4\n");

    scanf("%d", &jurney);
    

    if(jurney == BUS)
    {
       printf("Book tickets for BUS\n");
    }
    else if(jurney == TRAIN)
       printf("Book tickets for TRAIN\n");
    else if(jurney == FLIGHT)
    {
       printf("Book tickets for FLIGHT\n");
       printf("Carry passport\n");
    }
    else if(jurney == CAR)
       printf("Book tickets for CAR\n");
    else
       printf("Postpone the Jurney\n");
    if(jurney == FLIGHT)
      printf("Carry passport\n");
    else
      printf("not allowed in flight\n");
       

}


       





 
