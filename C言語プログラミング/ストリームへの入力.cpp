
/*
	例題
	aに100, bに200をキーボードから入力し, aとbの和を出力しなさい。
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "aの値を入力して下さい：";
	cin >> a;
	cout << "bの値を入力して下さい：";
	cin >> b;
	cout << "a + b = " << a + b << endl;
	
	getchar();
	return 0;
}