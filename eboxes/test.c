#include<stdio.h>
#include<stdbool.h>
#define UINT_MAX 0xffffffff /* maximum unsigned int value */
#define INT_MAX  2147483647 /* maximum (signed) int value */

int main(){
	int A = -5;         
	int B = 85;  
	short s= 0xBEEF;
	unsigned int result = 0;
	if (A < B)
	{
		printf("(int)-5 < (unsigned)85 is ture\n");
	}
	else{
		printf("(int)-5 < (unsigned)85 is false\n");

	}
	if (B > A)
	{
		printf("(unsigned)85 > (int)-5 is ture\n");
	}
       	else{
		printf("(unsigned)85 > (int)-5 is false\n");
	}
	printf("short s = %d"\n,s);		

	return 0;
}
