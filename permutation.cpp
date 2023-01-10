#include<bits/stdc++.h>
using namespace std;

int n,a[1000001];

int main(int argc, char const *argv[])
{
	cin >> n;
	if(n == 1){
		cout << 1; return 0;
	}
	if(n <= 3){
		cout << "NO SOLUTION"; return 0;
	}
	int cnt = 1;
	for(int i = 2; i <= n; i += 2) a[cnt++] = i;
	for(int i = 1; i <= n; i += 2) a[cnt++] = i;
	for(int i = 1; i <= n; i++) cout << a[i] << " ";
}