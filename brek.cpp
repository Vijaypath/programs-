#include<iostream>
using namespace std;
int main()
{
	int n,mxcnt=0,mncnt=0;
		cin>>n;

	int a[n] ,mxscr=a[0],mnscr=a[0];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
		for(int i=1;i<n;i++)
          {
          	if(a[i]>mxscr)
          	{
          	mxcnt++;
          	mxscr=a[i];
			  }
			  if(a[i]<mnscr)
			  {
			  	mncnt++;
			   mnscr=a[i];
			  }

		  }
		  cout<<mxcnt<<" "<<mncnt;
		  
		  return 0;
}
