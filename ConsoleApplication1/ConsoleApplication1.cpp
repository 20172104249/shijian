// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CA
{
protected:
	int a;
	int b;
public:
	CA()
	{
		a = 1;
		b = 2;
		cout << "a=" << a << "b=" << b << endl;
	}
	~CA()
	{
		cout << "����" << endl;
	}
};
class CB
{
protected:
	int c;
	int d;
public:
	CB()
	{
		c = 2;
		d = 1;
		cout << "c=" << c << "d=" << d << endl;
	}
		
	~CB()
	{
		cout << "����1" << endl;
	}
};
class CC :CB, CA
{
public:
	CC(int g,int h)
	{
		cout <<a << b << c <<d << g << h << endl;
	}
	~CC()
	{
		cout << "����2" << endl;
	}
};


int main()
{
	CC o(5, 6);
    return 0;
}