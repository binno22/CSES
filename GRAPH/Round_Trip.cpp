#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int n,m;
int s,e;
vector<int> ke[100001];
int cha[100001];
bool tham[100001];
vector<int> ans;

bool dfs(int u,int p){
	tham[u] = true;
	cha[u] = p;
	for(auto v : ke[u]){
		//if(v == p) continue;
		if(tham[v] && v != p){
			s = v;
			e = u; 
			return true;
		}
		if(tham[v] == false){
			if(dfs(v,u)) return true;
		}
	}
	return false;
}

bool visit_all(){
	for(int i = 1; i <= n; i++){
		if(!tham[i]){
			if(dfs(i,0)) return true;
		}
	}
	return false;
}

void input(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x,y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	memset(tham,false,sizeof(tham));
}


int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	input();
	if(!visit_all()){
		cout << "IMPOSSIBLE";
		return 0;
	}
	int tv = e;
	ans.push_back(e);
	while(tv != s){
		ans.push_back(cha[tv]);
		tv = cha[tv];
	}
	ans.push_back(e);
	cout << ans.size() << endl;
	for(int x : ans) cout << x << ' ';
	return 0;
}
