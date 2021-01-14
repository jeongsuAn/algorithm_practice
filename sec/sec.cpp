#include<iostream>
using namespace std;

int main(){
	int _day,_hours,_min,_sec;
	int _second;
	cin>>_second;
	_day=_second/(24*60*60);
	_second=_second%(24*60*60);
	_hours=_second/(60*60);
	_second=_second%(60*60);
	_min=_second/(60);
	_second=_second%(60);
	_sec=_second;
	cout<<_day<<" "<<_hours<<" "<<_min<<" "<<_sec<<endl;

	return 0;
}
