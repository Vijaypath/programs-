#include<bits/stdc++.h>
using namespace std;
bool anagram(char s1[],char s2[100])
{
	int n1=strlen(s1);
	int n2=strlen(s2);
	if(n1!=n2)
	{
		return false;
	}
	
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	for(int i=0;i<n1;i++)
	{
		if(s1[i]!=s2[i])
		{
			return false;
		}
		else 
		return true;
	}
}
	
int main(){
		char s1[100]="test";
		char s2[100]="esta";
		cin>>s1>>s2;
		if(anagram(s1,s2))
	
			cout<<"string are anagram of each other"<<" "<<endl;
		else
		cout<<"string are not anagram of each other";
		
		return 0;
	}

