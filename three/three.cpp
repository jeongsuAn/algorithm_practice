#include <iostream>
using namespace std;

int main(){
	int _1,_2,_3,_4,_5,_6;
	int _2_100,_2_10,_2_1;
	cin>>_1>>_2;
	_6=_1*_2;
	
	_2_100=_2/100;
	_2=_2%100;
	_2_10=_2/10;
	_2=_2%10;
	_2_1=_2;

	_3=_1*_2_1;
	_4=_1*_2_10;
	_5=_1*_2_100;
	
	cout<<_3<<endl;	
	cout<<_4<<endl;	
	cout<<_5<<endl;	
	cout<<_6<<endl;	

}
