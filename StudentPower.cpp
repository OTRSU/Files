#include <iostream>
using namespace std;
/* 写的很差 */

int main(){
	float high;
	float wide;
	float  log;
	cout <<"high:"<<endl;
	cin >> high;
	cout <<"wide/R:"<<endl;
	cin >> wide; 
	cout <<"long:"<<endl;
	cin >>log;
	float zdmj;
	float cmj;
	float C;
	float tj;
	float bmj1;
	float bmj2;
	float bmj3;
	float bmj4;
	float bmjf;
	tj = high*wide*log;
	cout <<"长方体或正方体体积=" <<tj<<endl;
	bmj1 = high*wide;
	bmj2 = wide*log;
	bmj3 = high*log;
	bmj4 = bmj1+bmj2+bmj3;
	bmjf = bmj4*2;
	cout <<"长方体或正方体表面积=" <<bmjf<<endl; 
	tj = wide*wide*3.14*high;
	cout <<"圆柱底面积="<<tj/high<<endl; 
	cout <<"圆柱体积=" <<tj<<endl;
	C = wide*2*3.14;
	cmj = C*high;
	zdmj = wide*wide*3.14*2;
	bmjf = cmj+zdmj;
	cout <<"圆柱底面周长="<<C<<endl;
	cout <<"圆柱表面积=" <<bmjf<<endl;
	cout <<"Press [Ctrl+c] to EXIT";
	cin >> C;
}


