#include <iostream>
using namespace std;
void printarr(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
void moveoneside(int a[],int n)
{
	int j=0;
		for(int i=0;i<n;i++)
	{
	if(a[i]<0)
	{
		if(i!=j)
		swap(a[i],a[j]);
     	j++;
}
}
   printarr(a,n);
}

int main()
{
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
    moveoneside(a,n);
 
}
