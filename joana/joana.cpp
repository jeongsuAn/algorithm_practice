#include <iostream>
#include <cmath>
using namespace std;

int main(){
	unsigned long long int N_th_line,n_th;
	unsigned long long int result;

	cin>>N_th_line;
	cout<<N_th_line<<endl;
	n_th=(N_th_line+1)/2;
//	cout <<n_th<<endl;
//	pow가 정확하지가 않네
	result=6*n_th*n_th-9;
//	cout<<pow(n_th,2)<<endl;
//	cout<<2*pow(n_th,2)<<endl;
//	cout<<3*pow(n_th,2)<<endl;
//	cout<<4*pow(n_th,2)<<endl;
//	cout<<5*pow(n_th,2)<<endl;
//	cout<<"뭐지"<<6*pow(n_th,2)-9<<endl;
	cout<<result<<endl;

}
