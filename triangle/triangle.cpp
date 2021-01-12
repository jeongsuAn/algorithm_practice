#include<iostream>
using namespace std;

float tri_area(float A, float B);

int main(){
	float base; //밑변
	float height;
	cin >> base >> height;
	
	cout << fixed;
	cout.precision(3);
	cout << tri_area(base,height) << endl;
}

float tri_area(float A, float B){
	float result;
	result = (A*B)/2;
	return result;
}
