#include <iostream>
using namespace std;

int max(int a, int b);
int min(int a, int b);

int main(){
	int x, y;
	cin>>x>>y;

	cout<<max(min(x,y),x)<<endl;
	return 0;
}

int max(int a, int b){
	if(a>b)
		return a;
	return b;
}

int min(int a, int b){
	if(a<b)
		return a;
	return b;
}
