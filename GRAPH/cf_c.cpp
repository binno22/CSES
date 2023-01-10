#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int n,m,sum;
int a[1001][1001];
bool ok;

void Try(int i,int j){
	if(i == n && j == m){
		if(sum == 0){
			ok = true; return;
		}
	}
	if(i <= n && i >= 1 && j + 1 <= m && j + 1 >= 1 && a[i][j + 1] != 0){
		int tmp = a[i][j + 1];
		sum += a[i][j + 1];
		a[i][j + 1] = 0;
		Try(i,j + 1);
		a[i][j + 1] = tmp;
		sum -= tmp;
	}
	if(i + 1 <= n && i + 1 >= 1 && j <= m && j >= 1 && a[i + 1][j] != 0){
		int tmp = a[i + 1][j];
		sum += a[i + 1][j];
		a[i + 1][j] = 0;
		Try(i + 1,j);
		a[i + 1][j] = tmp;
		sum -= tmp;
	}
	
}

void input(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++) cin >> a[i][j];
	}
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--){
		input();
		sum = a[1][1];
		ok = false;
		Try(1,1);
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
