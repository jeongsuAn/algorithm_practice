#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int flr, num;
	int flr_num = 0;

	cin>>num;

	for(flr=0; flr_num<num; flr++){
		flr_num=(pow(2,flr)-1);		
//		cout<<"flr_num = "<<flr_num<<endl;
//		cout<<"flr = "<<flr<<endl;
	}	

	flr--;
	cout<<flr<<endl;


}

