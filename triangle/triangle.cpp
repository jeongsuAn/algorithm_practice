#include<iostream>
//#include<cmath>
using namespace std;

float tri_area(float A, float B);

int main(){
	float base; //밑변
	float height;
	float result;
	cin >> base >> height;
/*	
	result = tri_area(base,height);
	result = (round(result*1000))/ 1000.0;
	cout << result << endl;
*/
	cout << fixed;
	cout.precision(2);
	cout << tri_area(base,height) << endl;
}

float tri_area(float A, float B){
	float result;
	result = (A*B)/2;
	return result;
}
