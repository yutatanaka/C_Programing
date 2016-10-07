
#include <iostream>			// cin,coutのヘッダー
using namespace std;		// std::coutと書く代わりに宣言する

int main()
{
	cout << "Hello, World." << endl;
	getchar();				// キー入力待ち
							// これがないとコンソールがすぐ閉じる
	return 0;
}
