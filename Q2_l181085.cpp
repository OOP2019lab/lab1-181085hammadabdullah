
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{


	//..............................................
	//power
	int n=0;
	int number[20];
	int power[20];
	char buff[20];
	int j=0;
	cout<<"Enter The Number Of Cases";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Enter The Number:";
		cin>>number[i];
		cout<<"Enter Its Power:";
		cin>>number[i];
	}
	ofstream fout;
	fout.open("File 1.txt");
	fout<<n<<endl;
	for(int i=0;i<n;i++){
		fout<<number[i]<<" "<<power[i]<<endl;
	}
	fout.close();
	ifstream fin;
	fin.open("File 1.txt");
	fin.getline(buff,20);
	n=buff[0]-48;
	int i=0;
	while(fin.getline(buff,20)){
		int j=0;
		while(buff[j]!='\0'){
			number[i]=buff[0]-48;
			power[i]=buff[2]-48;
		}
	}
	int a=0;
	for(int i=0;i<n;i++){
	a=pow(number[i],power[i]);
		cout<<a<<endl;
	}
	return 0;
}

