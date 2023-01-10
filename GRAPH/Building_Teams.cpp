#include<bits/stdc++.h>
using namespace std;

// to mau do thi

using ll = long long;

int n,m; 
vector<int> ke[100001];
int mau[100001];
int cha[100001];
bool ok = true;

void dfs(int u,int cha){
	mau[u] = 3 - mau[cha];
	for(int v : ke[u]){
		if(mau[v] == 0){
			dfs(v,u);
		}else if(mau[v] == mau[u]){
			ok = false; return;
		}
	}
}

void input(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x,y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	input();
	mau[0] = 2;
	for(int i = 1; i <= n; i++){
		if(mau[i] == 0){
			dfs(i,0);
		}
	}
	if(ok)
		for(int i = 1; i <= n; i++) cout << mau[i] << ' ';
	else cout << "IMPOSSIBLE";
	return 0;
}
