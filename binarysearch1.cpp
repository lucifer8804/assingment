#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n>>x;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}


	int l=0;
	int h=n-1;
	int mid;
	while(l<=h)
	{
		 mid= l+(h-l)/2;
		 if((arr[mid]==x&&arr[mid+1]>x)||(arr[mid]==x&&mid==n-1))
		 {
		 	cout<< mid;
		 	break;
		 }
		 else if(arr[mid]==x&&arr[mid+1]==x)
		 {
		 	l=mid+1;
		 }
		 else if(arr[mid]<x)
		 {
		 	l=mid+1;
		 }
		 else{
		 	h=mid-1;
		 }

	}

	//cout<<"\n ho gya\n";
}