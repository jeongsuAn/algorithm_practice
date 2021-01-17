#include <iostream>
using namespace std;

int main(){	
	int first_beverage;
	int first_rem;
	int second_rem;
	int total_rem;
	int event_beverage;
	int total_beverage;

	cin>>first_beverage;
	//첫번째 이벤트 참가
	event_beverage=first_beverage/4;

	//첫번째 이벤트 참가시 빈병개수
	first_rem = first_beverage%4;
	
	//첫번째 이벤트 참가시 마시는 음료 수
	total_beverage=first_beverage+event_beverage;
	
	
	//두번째 이벤트 참가
	second_rem=event_beverage%4;
	event_beverage=event_beverage/4;
	
	//두번째 이벤트 참가시 빈병개수
	total_rem=first_rem+second_rem;
	
	//두번째 이벤트 참가시 마시는 총 음료수
	total_beverage=total_beverage+event_beverage;

	cout<<total_beverage<<" "<<total_rem<<endl;
	
	return 0;

}
