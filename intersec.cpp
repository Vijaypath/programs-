 #include <bits/stdc++.h> 
using namespace std; 
int printUnion(int a[], int b[], int n1, int n2) 
{ 
	int i = 0, j = 0; 
	while (i < n1 && j < n2) { 
		if (a[i] < b[j]) 
			cout << a[i++] << " "; 

		else if (b[j] < a[i]) 
			cout << b[j++] << " "; 

		else { 
			cout << b[j++] << " "; 
			i++; 
		} 
	} 

	while (i < n1) 
		cout << a[i++] << " "; 

	while (j < n2) 
		cout << b[j++] << " "; 
		cout<<endl;
} 
int printIntersection(int a[], int b[], int n1, int n2) 
{ 
    int i = 0, j = 0; 
    while (i < n1 && j < n2) { 
        if (a[i] < b[j]) 
            i++; 
        else if (b[j] < a[i]) 
            j++; 
        else 
        { 
            cout << b[j] << " "<<endl; 
           i++; 
            j++; 
        } 
    } 
} 

int main() 
{ 
	int a[100],b[100],n1,n2;
	cin>>n1;
	for(int i=0;i<n1;i++)
	{
		cin>>a[i];
	}
cin>>n2;
for(int i=0;i<n2;i++)
{
	cin>>b[i];
}


	printUnion(a, b, n1, n2); 
	
    printIntersection(a, b, n1, n2);

	return 0; 
} 
