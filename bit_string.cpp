#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n; cin >> n;
    long long tmp = 1;
    for(int i = 1; i <= n; i++){
    	tmp *= 2;
    	tmp %= (int)(1e9 + 7);
    }
    cout << tmp;
	return 0;
}