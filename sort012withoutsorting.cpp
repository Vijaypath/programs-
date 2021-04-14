#include<iostream>
using namespace std;
void printarr(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
	void sort012(int a[],int n)
	{
		int cnt0=0,cnt1=0,cnt2=0;
		
		for(int i=0;i<n;i++)
		{
			switch(a[i])
			{
				case 0:
					cnt0++;
					break;
					
					case 1:
						cnt1++;
						break;
						
						case 2:
							cnt2++;
							break;
			}
		}
		int i=0;
		
		while(cnt0>0)
		{
			a[i++]=0;
			cnt0--;
		}
		
	   while(cnt1>0)
	   {
	   	a[i++]=1;
		   cnt1--;	   
		}

		while(cnt2>0)
        {
        	a[i++]=2;
        	cnt2--;
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
		sort012(a,n);
	}

