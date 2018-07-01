// A simple C++ program for implementation of atoi
#include <stdio.h>
#include <string.h>

void reverse(char *str)
{
    char *pStart = str;
    char *pEnd = str + strlen(str) -1;
    char temp = '\0';
    
    while(pStart < pEnd)
    {
       temp = *pStart;
       *pStart = *pEnd;
       *pEnd = temp;
       pStart++;
       pEnd--;
    }
}
// A simple atoi() function
void myitoa(char *str, int n)
{
    int i, sign;
	
    if((sign = n) < 0)
      n = -n;
	
	i = 0;
	do{
	    str[i++] = n%10 + '0';
	}while((n/=10) >0);
	
	if(sign < 0)
	  str[i++] = '-';
	  
	str[i] = '\0';
	reverse(str);
	
}

// Driver program to test above function
int main()
{
    char str[] = "\0";
	int number = -89789;
	myitoa(str, number);
	printf("String number is: %s\n", str);
	return 0;
}