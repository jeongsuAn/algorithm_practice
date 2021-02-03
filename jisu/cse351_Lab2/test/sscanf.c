#include <stdio.h>

int main(){
	char* mystring = "1	2	3	4	5	6";
	int a,b,c,d,e,f;
	sscanf(mystring, "%d %d %d %d %d %d", &a, &b, &c,&d, &e, &f);

	printf("%d %d %d %d %d %d \n",a,b,c,d,e,f);
}
