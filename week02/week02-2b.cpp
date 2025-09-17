///week02-2b.cpp
///SOIT106_ADVANCE_001
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a,ans;
	cin >> a;
	for(int i=a.length()-1;i>=0;i--){
		ans+=a[i];
	}
	cout << a << '+' << stoi(ans) << '=';
	cout << stoi(a) + stoi(ans) << endl;
}
///stoi 是2011年版 預設是1998年 要去設定-Compiler改
