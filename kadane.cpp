#include<bits/stdc++.h>
using namespace std;
int kadane(int a[],int n)
{
	int max=INT_MIN;
	int maxend=0;
	for(int i=0;i<n;i++)
	{
		maxend=maxend+a[i];
		if(max<maxend)
		{
			max=maxend;
		}
		if(maxend<0)
		{
			maxend=0;
		}
	}
	return max;
}
int main()
{
	int n,a[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<kadane(a,n)<<" ";
}
