#include<bits/stdc++.h>
using namespace std;

int num(long long n,int x){
	int cnt = 0;
	for(int i = x; i <= n; i *= x){
		cnt += n/i;
	}
	return cnt;
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n; cin >> n;
    cout << num(n,5);
	return 0;
}