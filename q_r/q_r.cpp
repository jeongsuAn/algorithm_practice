#include <iostream>
using namespace std;

int main(){
	int dividend;	//피제수
	int divisor; 	//제수
	int quotient;	//몫
	int remainder;	//나머지
	cin>>dividend>>divisor;
	quotient = dividend/divisor;
	remainder = dividend%divisor;
	cout<<quotient<<" "<<remainder<<endl;

}
