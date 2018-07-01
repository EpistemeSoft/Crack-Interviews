#include"fun.h"

main()
{

   int a, b;
   int x = 0;
   
   printf("Enter the value of A and B\n");
   scanf("%d %d", &a, &b);
   
   x = addfun(a,b);
   
   printf("value of X:%d\n",x);

   multiplefun(a, b);
   multiplefun(a, b);
   multiplefun(a, b);
   multiplefun(a, b);

}



void multiplefun(int f, int g)
{

    int count = 12;

    float s;

    count++;
   printf("value of Count:%d\n",count);

    s = f*g;
   printf("value of s:%f\n",s);

}






   




   
