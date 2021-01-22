#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double pi = 3.14159;
	int a,b;
	double circle_length,line_legnth;
	double total_length;
	cin>>a>>b;

	circle_length=(a+b)*pi;
	line_legnth=(a+b)*sqrt(2);
	total_length=circle_length+line_legnth;

	cout<<fixed;
	cout.precision(3);
	cout<<total_length<<endl;



}
