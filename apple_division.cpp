#include<bits/stdc++.h>
using namespace std;

int n,k,b[100];
long long a[100];
bool ok;
long long m;


void ktao(){
	for(int i = 1; i <= k; i++) b[i] = i;
}
// Sinh to hop
void sinh(){
	int i = k;
	while(i >= 1 && b[i] == n - k + i){
		--i;
	}
	if(i == 0) ok = false;
	else{
		b[i]++;
		for(int j = i + 1; j <= k ; j++) b[j] = b[j - 1] + 1;
	}
}

int main(int argc, char const *argv[])
{
	int t = 1;
	while(t--){
		long long sum= 0;
		cin >> n;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			sum += a[i];
		}
		m = a[1];
		for(k = 1; k <= n/2; k++){
			ktao();
			ok = true;
			while(ok){
				long long sum1= 0;
				for(int i = 1; i <= k; i++) sum1 += a[b[i]];
				m = min(m,abs(sum - 2*sum1));
				sinh();
			}
		}
		cout << m << endl;
	}
	return 0;
}