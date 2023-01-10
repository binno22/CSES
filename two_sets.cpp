#include<bits/stdc++.h>
using namespace std;

long long int n,a[100001];
set<long long int> s1,s2;
bool ok;

void sinh(){
	int i = n; 
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		--i;
	}
	if(i == 0) ok = false;
	else a[i] = 1;
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin >> n;
	for(int i =  1; i <= n; i++) a[i] = 0;
	ok = true;
	while(ok){
		long long sum1 = 0,sum2 = 0;
		for(int i = 1; i <= n; i++){
			if(a[i] == 0){
				sum1 += i;
				s1.insert(i);
			}else{
				sum2 += i;
				s2.insert(i);
			}
		}
		if(sum1 == sum2){
			cout << "YES\n";
			cout << s1.size() << endl;
			for(int x : s1) cout << x << " ";
			cout << endl;
			cout << s2.size() << endl;
			for(int x : s2) cout << x << " ";
			return 0;
		}
		s1.clear(); s2.clear();
		sinh();
	}
	cout << "NO";
	return 0;
}