// banana.cpp : 定义控制台应用程序的入口点。
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
	cout << feet << "英尺" << inches << "英寸" << endl;
}
int main()
{
	CSum A;
	A.setvalue(10, 18);
	A.display();
	return 0;
}

