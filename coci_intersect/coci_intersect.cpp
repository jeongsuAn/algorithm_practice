#include <iostream>
using namespace std;

int main(){
	int n;
       	int intersection=0;
	int total_plus,number_temp,plus_temp=1;

	cin>>n;

	total_plus =number_temp= n-3;
	for(int i=0; i<total_plus ; i++){
//		cout<<"plus_temp = "<<plus_temp<<endl;
//		cout<<"number_temp = "<<number_temp<<endl;
//		cout<<"intersection = "<<intersection<<endl;
		intersection=intersection+(plus_temp*(0.5)*number_temp*(number_temp+1));
		plus_temp++;
		number_temp--;
	}
	cout<<intersection<<endl;

	return 0;

}
