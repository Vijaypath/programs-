#include<iostream>
using namespace std;
int main()
{
	int n,d,m;
	int a[1000];
	int sum[100];
	sum[0]=0;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int cntw=0;
	cin>>d>>m;
	for(int i=0;i<n;i++)
		sum[i+1]=sum[i]+a[i];
		 for(int i=0;i<=n-m;i++){
        if(sum[i+m]-sum[i]==d){
            cntw++;
        }
	}
	cout<<cntw;
}
