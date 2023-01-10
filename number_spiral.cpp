#include<bits/stdc++.h>
using namespace std;

using ll = long long;
ll cnt = 1,num1 = 1;
ll a[10000][10000];

void sinh(){
	while(cnt <= 10000){
		if(cnt % 2 == 1){
			for(int i = 1; i <= cnt; i++){
				a[cnt][i] = num1++;
			}
			for(int i = cnt - 1; i >= 1; i--){
				a[i][cnt] = num1++;
			}
		}else{
			for(int i = 1; i <= cnt; i++){
				a[i][cnt] = num1++;
			}
			for(int i = cnt - 1; i >= 1; i--){
				a[cnt][i] = num1++;
			}
		}
		++cnt;
	}
}

int main(int argc, char const *argv[])
{
	int t; cin >> t;
	a[1][1] = 1;
	sinh();
	while(t--){
		ll x,y; cin >> x >> y;
		cout << a[x][y] << endl;
	}
	return 0;
}