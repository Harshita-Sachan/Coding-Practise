#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[20];
	cout<<"enter 20 numbers:";
	for(int i=0;i<20;i++)
	{
	    cin>>arr[i];
	    
	}
	int count=0;
	for(int i=0;i<20;i++){
	   if(arr[i]<0)
	   {
	       if(i!=count)
	       swap(arr[i],arr[count]);
	       count++;
	   }
	}
	for (int i=0;i<20;i++)
	{
	    cout<< arr[i];
	}
	return 0;
}
