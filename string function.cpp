#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s1[]="hii there ";
	char ch="e";
	//strcat(s1,s2);
	char val;
	val =strrchr(s1,ch);
	cout<<val;
	return 0;
}
