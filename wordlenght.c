// A simple C++ program for implementation of atoi
#include <stdio.h>

int wordlength(void)
{
    int i;
    unsigned v = (unsigned)~0;
    
    for(i = 1; (v = v>> 1) > 0; i++);
    return i;
}
// Driver program to test above function
int main()
{
	char str[] = "89789";
	int val = atoi(str);
	printf ("Atoi Value: %d\n", val);
	val = wordlength();
	printf ("Word lenght: %d\n", val);
	return 0;
}