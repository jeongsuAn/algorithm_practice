#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double cost, exponent,round_cost;
	int result_cost;	//result_cost도 double형식으로 하면 여기 원하는 값처럼 값이 안나온다. 2.00e+15이런식으로 나옴
	cin>>cost>>exponent;
	
	round_cost = cost/pow(10.0,exponent);
//	cout <<"round_cost = "<< round_cost<<endl;
//	cout <<"pow(10.0,exponent) = " << pow(10.0,exponent) <<endl;
	round_cost = round(round_cost);
//	cout <<"round_cost = " << round_cost<<endl;
	result_cost = (int)round_cost*(int)pow(10.0,exponent);
	
//	cout<<"result_cost = ";
	cout<<result_cost<<endl;

	return 0;	
		
}
