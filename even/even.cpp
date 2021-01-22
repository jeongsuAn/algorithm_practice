#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int A,B,even,odd;
	int total_num;
	int start_odd,finish_odd;
	cin>>A>>B;

	total_num = B-A+1;

	for(int i=0;pow(i,2)<=B;i++){
		if(pow(i,2)<A)
			start_odd=i;
		
		finish_odd=i;
	}
	odd=finish_odd-start_odd;

	even=total_num-odd;

	cout<<even<<endl;


}
