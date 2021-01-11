#include <iostream>
using namespace std;

void _add(int A,int B);
void _min(int A,int B);
void _mul(int A,int B);
void _div(int A,int B);
void _rem(int A,int B);

int main(){
	int a, b;
	cin >> a >> b ;

	_add(a,b);
	_min(a,b);
	_mul(a,b);
	_div(a,b);
	_rem(a,b);

	return 0;
}

void _add(int A,int B){
	int result;
	result = A+B;
	cout<<A<<"+"<<B<<"="<<result<<endl;
}

void _min(int A,int B){
	int result;
	result = A-B;
	cout<<A<<"-"<<B<<"="<<result<<endl;
}

void _mul(int A,int B){
	int result;
	result = A*B;
	cout<<A<<"*"<<B<<"="<<result<<endl;
}

void _div(int A,int B){
	int result;
	result = A/B;
	cout<<A<<"/"<<B<<"="<<result<<endl;
}

void _rem(int A,int B){
	int result;
	result = A%B;
	cout<<A<<"%"<<B<<"="<<result<<endl;

}
