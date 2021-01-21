#include <iostream>
using namespace std;

int main(){
	double moving_length;
	double d,p;
	cin>>d>>p;

	moving_length=-(p/100.0)*d;

	cout<<moving_length<<endl;

	return 0;
}
