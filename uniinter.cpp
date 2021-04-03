#include<iostream>
using namespace std;
void uni(int a[],int n1,int b[],int n2,int c[])
{
	int i=0,j=0,k=0;
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
     if(a[i]<b[j])
	 {
		 c[k++]=a[i++];
	 }
	 else
	 c[k++]=b[j++];

		}
	}
	cout<<c[k];
}
int main () {
	int a[100],b[100],n1,n2,c[100];
	cin>>n1;
	for(int i=0;i<n1;i++)
	{
		cin>>a[i];
	}
cin>>n2;
for(int i=0;i<n2;i++)
{
	cin>>b[i];
}
uni(a,n1,b,n2,c);
	return 0;
}
