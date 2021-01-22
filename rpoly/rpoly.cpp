#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double pi,theta,r,partition_area,total_area;
	int n;
	cin>>r>>n;

	pi = M_PI;
//	cout<<pi<<endl;
	theta=(2*pi)/n;
//	cout<<theta<<"-"<<sin(theta)<<"-"<<endl;
	partition_area=(0.5)*r*r*sin(theta);
//	왜 0.5는 되는데 1/2는 안되는거지?
//	cout<<"r = "<<r<<endl;
//	cout<<partition_area<<endl;
	total_area = n*partition_area;
	cout<<fixed;
	cout.precision(3);
	cout<<total_area<<endl;



}
