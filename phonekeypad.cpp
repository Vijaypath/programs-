#include<iostream>
#include<cstring>
using namespace std;
char key[][6]={"ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void phonekey(char *in,int i,char *out,int j)
{
	if(in[i]=='\0')
	{
		out[i]='\0';
		cout<<out<<endl;
		return;
	}
	int digit=in[i]-'0';
	for(int k=0;key[digit][k]!='\0';k++ 
	{
		out[j]=key[digit][k];
		phonekey(in,i+1,out,j+1);
	}
}
int main()
{
	char in[100],out[100];
	cin>>in;
	phonekey(in,0,out,0);
	return 0;
}
