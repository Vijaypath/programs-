#include <bits/stdc++.h> 
using namespace std; 

	int countManipulations(char s1[], char s2[]) 
	{ 
		int n1=strlen(s1);
		int n2=strlen(s2);
		
		int count = 0; 

		int char_count[26]; 
		
		for (int i = 0; i < 26; i++)
		{
			char_count[i] = 0;
		}

		for (int i = 0; i <n1; i++) 
			char_count[s1[i] - 'a']++; 
		for (int i = 0; i <n2; i++)
		{ 
			char_count[s2[i] - 'a']--;	 
		}
	
		for(int i = 0; i < 26; ++i)
		{
		if(char_count[i] != 0)
		{
			count+=abs(char_count[i]);
		}
		}
		return count; 
	} 

	int main() 
	{ 

		char s1[100];
        char s2[100];
		cin>>s1;
		cin>>s2;
		cout<<countManipulations(s1,s2); 
	} 


