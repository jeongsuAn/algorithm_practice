#include<iostream>
using namespace std;

int main(){
	int A,B,C,D;
	int _hours,_min,_sec;
	cin>> A>>B>>C>>D;

	//D가 1일을 넘으면 안되니까 그걸 방지하자
	D=D%(24*60*60);

	_hours=D/(60*60);
	D=D%(60*60);
	_min=D/60;
	D=D%60;
	_sec=D;

	C=C+_sec;	
	if(C>=60){
		C=C-60;
		B=B+1;
	}
	B=B+_min;
	if(B>=60){
		B=B-60;
		A=A+1;
	}
	A=A+_hours;
	if(A>=24){
		A=A-24;
	}

	cout<<A<<" "<<B<<" "<<C<<endl;

	return 0;
}
