#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int n,m;
int ia,ja;
int a[1001][1001];

int dx[4] = {1, 0 , 0, -1};
int dy[4] = {0, -1, 1, 0};
string path = "DLRU";
string ans = "";

void Try(int i,int j){
	if(i == n - 1 || j == m - 1){
		cout << ans;
		return;
	}
	for(int k = 0; k < 4; k++){
		int i1 = i + dx[k], j1 = j + dy[k];
		if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] = '.'){
			ans += path[k];
			a[i1][j1] = '#';
			Try(i1,j1);
			a[i1][j1] = '.';
			ans.pop_back();
		}
	}
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
			if(a[i][j] == 'A'){
				ia = i; ja = j;
			}
		}
	}
	return 0;
}
