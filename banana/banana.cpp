// banana.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CSum
{
private:
	int feet;
	int inches;
public:
	void display();
	void setvalue(int fe, int in);
};
void CSum::setvalue(int fe, int in)
{
	feet = fe + in / 12;
	inches = in % 12;
}
void CSum::display()
{
	cout << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
int main()
{
	CSum A;
	A.setvalue(10, 18);
	A.display();
	return 0;
}

