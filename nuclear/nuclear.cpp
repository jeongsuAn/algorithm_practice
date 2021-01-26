#include<iostream>
using namespace std;

int main(){
	int k,n;
	int split_num;
	int total_energy;
	
	cin>>k>>n;

	split_num = (n-1)/(k-1);

	total_energy=100*split_num;

	cout<<total_energy<<endl;


}
