
#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
		int x=5;
	int y=4;
	int *p=&x;
	int *q=&y;
	cout<<"Before Swaping:  "<<endl;
	cout<<"x:"<<x<<" "<<"y:"<<y<<endl;
	cout<<"p:"<<p<<" "<<"q:"<<q<<endl;
	cout<<"*p:"<<*p<<" "<<"*q:"<<*q<<endl;
	int temp=*p;
	 p=q;
	q=&temp;
	cout<<"After Swaping: "<<endl;
	cout<<"x:"<<x<<" "<<"y:"<<y<<endl;
	cout<<"p:"<<p<<" "<<"q:"<<q<<endl;
	cout<<"*p:"<<*p<<" "<<"*q:"<<*q;
	return 0;
}

