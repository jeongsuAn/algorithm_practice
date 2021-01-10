#include <iostream>
using namespace std;

void swap(int &A, int &B);


int main(){
	int a,b;
	cin >> a >> b;
	swap(a,b);
	cout << a << " " << b << endl;

}

void swap(int &A, int &B){
	int temp = B;
	B = A;
	A = temp;
}
