#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long long n; cin >> n;
	int a[n - 1];
	set<int> s;
	for(int i = 1; i < n; i++){
		cin >> a[i];
		s.insert(a[i]);
	}
	for(int i = 1; i <= n; i++){
		if(s.count(i) == 0){ 
			cout << i; break;
		}
	}
	return 0;
}