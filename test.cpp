// Sroot.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class arrayCheck {
	int size;
	char *p;
public:
	arrayCheck(int num);
	~arrayCheck() { delete[] p; }
	char &put(int i);
	char get(int i);
};

arrayCheck::arrayCheck(int num) {
	p = new char[num];
	size = num;
}

char &arrayCheck::put(int  i) {
	if (i<0 || i>size - 1) {
		cout << "境界エラー\n";
		exit(1);
	}

	return p[i];
}

char arrayCheck::get(int i) {
	if (i<0 || i>size - 1) {
		cout << "境界エラー\n";
		exit(1);
	}

	return p[i];
}

int main()
{
	arrayCheck a(10);
	
	a.put(3)='X';
	a.put(5)='Y';

	cout << a.get(3) << " " << a.get(5) << "\n";

	a.put(11);

	return 0;
}