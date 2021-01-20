#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double cost, exponent, result_cost,round_cost;
	cin>>cost>>exponent;
	
	round_cost = cost/pow(10.0,exponent);
//	cout << round_cost<<endl;
//	cout << (10^(int)exponent) <<endl;
	round_cost = round(round_cost);
//	cout << round_cost<<endl;
	result_cost = round_cost*pow(10.0,exponent);

	cout<<result_cost<<endl;

	return 0;	
		
}
