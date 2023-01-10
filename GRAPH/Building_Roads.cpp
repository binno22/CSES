#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int n,m;
vector<int> ke[100001];
bool visited[100001];
vector<int> v; 
vector<vector<int>> ans;

void dfs(int u){
	visited[u] = true;
	v.push_back(u);
	for(int v : ke[u]){
		if(!visited[v]) dfs(v);
	}
}

void input(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x,y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	memset(visited,false,sizeof(visited));
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	input();
	for(int i = 1; i <= n; i++){
		if(visited[i] == false){
			dfs(i);
			ans.push_back(v);
			v.clear();
		}
	}
	if(ans.size() == 1) cout << 0;
	else{
		cout << ans.size() - 1 << "\n";
		auto i = 0;
		while(i < ans.size() - 1){
			cout << ans[i][0] << ' ' << ans[i + 1][0] << "\n";
			++i;
		}
	}
	return 0;
}
