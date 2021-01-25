#include<iostream>
using namespace std;

int main(){
	int a,b,x,l;
	double m_length;
	double total_time;

	cin >>a>>b>>x>>l;
	
	//int랑 int끼리 계산하면 결과도 int로 나와서 
	//double이라고 명시적으로 형 변환 시켜줘야 하는구나!!
	total_time = (double)l/(a+b);
	cout<<"total_time = "<<total_time<<endl;
	m_length = total_time*x;

	cout<<fixed;
	cout.precision(6);
	cout<<m_length<<endl;


}
