#include<bits/stdc++.h>
using namespace std;
struct intrval
{
	int s,e;
};
bool mycomp(intrval a,intrval b)
{
	return  a.s<b.s;
}
void mergeintrval(intrval a[],int n)
{
	sort(a,a+n,mycomp);
	int idx=0;
	for(int i=1;i<n;i++)
	{
		if(a[idx].e>=a[i].s)
		{
			a[idx].e=max(a[idx].e,a[i].e);
			a[idx].s=min(a[idx].s,a[i].s);
		}
		else
		{
			idx++;
			a[idx]=a[i];
		}
	}
	for(int i=0;i<=idx;i++)
	{
 cout << "[" << a[i].s << ", " << a[i].e << "] ";
 	}
}
int main()
{
	intrval a[] = { {6,8}, {1,9}, {2,4}, {4,7} };
    int n = sizeof(a)/sizeof(a[0]);
    mergeintrval(a, n);
    return 0;
}
