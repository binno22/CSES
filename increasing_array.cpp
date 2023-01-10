#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long long n; cin >> n;
	long long a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	long long ans = 0;
	for(int i = 1 ; i < n; i++){
		if(a[i] < a[i - 1]){
			ans += a[i - 1] - a[i];
			a[i] = a[i - 1];
		}
	}
	cout << ans;
	return 0;
}