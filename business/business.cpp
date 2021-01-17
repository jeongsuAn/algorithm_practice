#include <iostream>
using namespace std;

int main(){
	int prime_cost,cost,fake_money,change;
	int receive_money,real_money;
	int total_damage;

	cin>>prime_cost>>cost>>fake_money>>change;
	receive_money=cost+change;
	real_money=receive_money-fake_money;
	real_money=real_money-change;
	total_damage=prime_cost-real_money;

	cout<<total_damage<<endl;

	return 0;
}
