#include <iostream>
using namespace std;

int main(){
	int x_pocket_money, y_pocket_money;
	int x_pocket_money_2, y_pocket_money_2;
	int money_ratio, add_money;

	cin >> x_pocket_money>>y_pocket_money>>x_pocket_money_2>>y_pocket_money_2;

	x_pocket_money=x_pocket_money-x_pocket_money_2;
	y_pocket_money=y_pocket_money-y_pocket_money_2;
	money_ratio=y_pocket_money/x_pocket_money;

	add_money=y_pocket_money_2-(x_pocket_money_2*money_ratio);

	cout<<money_ratio<<" "<<add_money<<endl;
}
