#include<iostream>
using namespace std;

int main(){
	int money, change;
	int _100won, _50won, _10won;

	cin>>money;

	change = 1000 - money;
	_100won = change/100;
	change = change%100;
	_50won = change/50;
	change = change%50;
	_10won = change/10;
	
	cout<<_100won<<" "<<_50won<<" "<<_10won<<endl;

	return 0;
}
