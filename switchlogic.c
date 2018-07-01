#include<stdio.h>

#define BUS 1
#define TRAIN 2
#define FLIGHT 3
#define TAXI 4

main()
{
   int jurney;

   printf("Enter case for Jurney type\n");
   scanf("%d", &jurney);

   switch(jurney)
   {
     
      case BUS:
        printf("Book tickets for BUS\n");
        break;

      case TRAIN:
        printf("Book tickets for TRAIN\n");
        break;

      case FLIGHT:
        printf("Book tickets for FLIGHT\n");
        break;


      case TAXI:
        printf("Book tickets for TAXI\n");
        break;
     
      default:
        printf("postpone Jurney\n");
        break;
 

    }

}





