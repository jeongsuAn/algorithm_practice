#include <iostream>
using namespace std;

int main(){
	int prime_cost,cost,counterfeit_coin,change;
	int total_damage;

	cin>>prime_cost>>cost>>counterfeit_coin>>change;
	
	total_damage=prime_cost-cost+counterfeit_coin+change;

	cout>>total_damage>>endl;
	



}
