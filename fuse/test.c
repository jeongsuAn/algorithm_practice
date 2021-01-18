#include <stdio.h>

int main(){

	for(int i=0;i<0xEFFFFFFF;i++){
		if(!((1<i)==(-1>-i)))
			printf("%d\n",i);
	}


	for(int i=0;i>0x80000000;i--){
		if(!((1<i)==(-1>-i))){
			printf("%d\n",i);
		}
	}
	printf("finish\n");
	return 0;
}
