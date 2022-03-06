
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	float r;
	float h;
	float output;
	cout <<"圆锥体积计算" <<endl;
	cout <<"R: "<<endl;
	cin >> r;
	cout <<"H: "<<endl;
	cin >> h;
	output = r*r*3.14*h/3;
	cout <<output<<endl;
	cin >> h;
}
