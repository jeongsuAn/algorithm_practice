#include <iostream>
using namespace std;

void op_add(int A,int B);
/*
min(int A,int B);
mul(int A,int B);
div(int A,int B);
rem(int A,int B);
*/
int main(){
	int a, b;
	cin >> a >> b ;

	op_add(a,b);
//		<<min(a,b)<<mul(a,b)<<div(a,b)<<rem(a,b);
	return 0;
}

void op_add(int A,int B){
	int result;
	result = A+B;
	cout<<A<<"+"<<B<<"="<<result<<endl;
}
