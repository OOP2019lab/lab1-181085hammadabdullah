// Q5_18l1085.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
void sortarr(int A[], int n){
	for(int l=1;l<n;l++){
		int key=A[l];
		int k=l-1;
		while(k>=0 && A[k]>key){
			A[k+1]=A[k];//SHIFTS NUMBER TO RIGHT AND CREATE SPACES FOR THE ORIGNAL POSITION OF KEY
			k--;
		}
		A[k+1]=key;
	}
	
}
void ofset(int *arr,int n){
	arr=new int[n];
	int ofset=0;
	cout<<"Enter Elemets Of array:";
	for(int i=0;i<n;i++){
		cin>>arr[ofset+i];
	}
	sortarr(arr,n);
	cout<<"Using Ofset notation We get:";
	for(int i=0;i<n;i++){
		cout<<*(arr+i)<<" ";
	}

}
int _tmain(int argc, _TCHAR* argv[])
{
	int n=0;
	cout<<"Enter Size Of array:";
	cin>>n;
	int *arr=new int[n];
	ofset(arr,n);
	return 0;
}

