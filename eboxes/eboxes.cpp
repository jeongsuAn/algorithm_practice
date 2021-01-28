#include <iostream>
using namespace std;

int main(){
	int N,K,T,E;
	int total,add_box;
	cin>>N>>K>>T>>E;
// 	어떤식으로 알고리즘을 짜야할지 매우 고민됨
//	몇개의 상자마다 넣을지를 생각하지말고 
//	한번 상자를 추가할때마다 
//	어떤식으로 총 빈 상자의 개수가 변하는지를 생각하면 된다. 
	add_box=K-1;
	total=(E-N)/add_box;
	total=total+E;

	cout<<total<<endl;

}
