#include <iostream>
using namespace std;

int main(){
	int n;
	int interior_angle, external_angle;
	
	cin>>n;

	interior_angle=180*(n-2);
	external_angle=360;

	cout<<interior_angle<<" "<<external_angle<<endl;

	return 0;	

}
