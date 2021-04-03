#include<iostream>
using namespace std;
int main()
{
   int i,n,t,a[5],max=0,maxi;
    a[0]=0;
    a[1]=0;
    a[2]=0;
    a[3]=0;
    a[4]=0;
     cin>>n;
     for(int i=0;i<n;i++)
    {
        cin>>t;
        a[t-1]+=1;
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            maxi=i+1;
        }
    }
    cout<<maxi;
    return 0;
}
