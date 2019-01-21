// (18L1085)Q no2 Lab work 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
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


int _tmain(int argc, _TCHAR* argv[])
{
	
	//........................................................
	//Aecending Order
	
	int size=0;
	cout<<"Enter the Size Of Array:";
	cin>>size;
	int *arr=new int[size];
	cout<<"Enter Elements Of array:";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	sortarr(arr,size);
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}



	return 0;

}