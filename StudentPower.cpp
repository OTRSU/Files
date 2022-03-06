#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
	cout <<"V=" <<tj<<endl;
	bmj1 = high*wide;
	bmj2 = wide*log;
	bmj3 = high*log;
	bmj4 = bmj1+bmj2+bmj3;
	bmjf = bmj4*2;
	cout <<"S=" <<bmjf<<endl; 
	tj = wide*wide*3.14*high;
	cout <<"DS="<<tj/high<<endl; 
	cout <<"V=" <<tj<<endl;
	C = wide*2*3.14;
	cmj = C*high;
	zdmj = wide*wide*3.14*2;
	bmjf = cmj+zdmj;
	cout <<"DC="<<C<<endl;
	cout <<"S=" <<bmjf<<endl;
	cout <<"Press [Ctrl+c] to EXIT";
	cin >> C;
}


