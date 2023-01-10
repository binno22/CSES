#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int n,m; 
vector<int> ke[100001];
int cha[100001];
bool tham[100001];
vector<int> ans;
queue<int> q;

void bfs(int u){
	q.push(u);
	tham[u] = true;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(auto x : ke[v]){
			if(!tham[x]){
				cha[x] = v;
				q.push(x);
				tham[x] = true;
			}
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
	memset(tham,false,sizeof(tham));
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	input();
	bfs(1);
	if(tham[n] == false) cout << "IMPOSSIBLE";
	else{
		while(n != 1){
			ans.push_back(n);
			n = cha[n];
		}
		ans.push_back(n);
		reverse(begin(ans),end(ans));
		cout << ans.size() << "\n";
		for(int v : ans) cout << v << ' ';
	}
	return 0;
}
