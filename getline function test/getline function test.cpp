// getline function test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	int n;
	string s;
	char ch[4];
	cin >> n;
	string trash;
	getline(cin,trash);
	cin.getline(ch, 4);
	cout << ch << " number " << n;
	system("PAUSE");
	return 0;
}