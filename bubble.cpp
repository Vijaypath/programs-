#include<iostream>
#include<algorithm>
using namespace std;
void bs(int *a,int n,int i)
{
	if(i==n-1){
	return;
}
   for(int j=0;j<n-1;j++)
   {
   	if(a[j]>a[j+1])
   	{
   		swap(a[j],a[j+1]);
	   }
   }
    bs(a,n,i+1);
}

void print(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}



int main()
{
	int a[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	print(a,n);
	bs(a,n,0);
	return 0;
}
