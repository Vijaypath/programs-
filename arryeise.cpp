#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n,r;
     cic>>r>>c;

     ict a[r][c],i,j;

     for(i=0;i<r;i++)
     {
          for(j=0;j<c;j++)
               cin>>a[i][j];
     }
     for(i=0;i<r;i++)
     {
          if(i%2==0)
          {
               for(j=0;j<n;j++)
                    cout<<a[i][j]<<", ";
          }
          else
          {
               for(j=c-1;j>=0;j--)
                    cout<<a[i][j]<<", ";
          }
     }
     cout<<"EN
}
