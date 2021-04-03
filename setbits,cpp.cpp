#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t){
		int n,count=0;
		cin >> n;

		for(int i=n;i>0;i = i>>1){
			if(i&1) count++;
		}
		cout << count << endl;
		t--;
	}
	return 0;
}
