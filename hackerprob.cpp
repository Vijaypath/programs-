#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,res=-1;
    cin>>b;
    int key;
    cin>>key;
    int udr;
    cin>>udr;
    int keub[100];
    for(int i=0;i<key;i++)
    {
        cin>>keub[i];
    }
    int udri[100];
    for(int i=0;i<udr;i++)
    {
        cin>>udri[i];
    }
        for(int i=0;i<key;i++){
        
            for(int j=0;j<udr;j++)
            {
                if(keub[i]+udri[j]<=b)
                res=max(res,keub[i]+udri[j]);
            }
        }
            cout<<res;
}

