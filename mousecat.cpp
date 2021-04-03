#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int a[10][10];
    for(int i=0;i<r;i++)
     for(int j=0;j<c;j++)

        cin>>a[i][j];
        int sr=0,sc=0,er=r-1,ec=c-1,sum1=0,sum2=0,sum3=0,sum12=0,sum21=0,sum31=0;
        while(sr!=er && sc!=ec)
        {
        for(int j=0;j<=ec;j++)
        {
        	sum1+=a[sr][j];
			 }
		    cout<<sum1<<" ";       

        sr++;
    for(int j=0;j<=ec;j++)
     {
     	sum2+=a[sr][j];
	 }
    	cout<<sum2<<" ";	

     sr++;
	 for(int j=0;j<=ec;j++)
     {
     	sum3+=a[sr][j];
	 }
	      	cout<<sum3<<" ";
cout<<endl;
 for(int i=0;i<=er;i++)
        {
        	sum12+=a[i][sc];
			 }
		    cout<<sum12<<" ";       

        sc++;
 for(int i=0;i<=er;i++)
     {
        	sum21+=a[i][sc];
	 }
    	cout<<sum21<<" ";	

     sc++;
 for(int i=0;i<=er;i++)
     {
        	sum31+=a[i][sc];
	 }
	      	cout<<sum31<<" ";


}
}
