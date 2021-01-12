#include <iostream>
using namespace std;

int main(){
	float a,b,c,d;
	float result;
	cin>>a>>b>>c>>d;

	result = (a+b+c+d)/4;
	cout<<fixed;
	cout.precision(2);
	cout<<result<<endl;
}
