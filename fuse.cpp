#include <iostream>
using namespace std;

int main(){
	int computer_num,print_num,router_num;
	double total_ampere;
	int  puse_capacity;
	cin>>computer_num>>print_num>>router_num;

	total_ampere=computer_num*2.5+print_num*2.0+router_num*0.5;

	total_ampere=(int)(2*total_ampere);

	puse_capacity=((int)(total_ampere/10+1)*10);

	if((int)total_ampere%10==0)
		puse_capacity=total_ampere;
	cout<<puse_capacity<<" amperes"<<endl;

	return 0;
}
