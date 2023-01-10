#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n; cin >> n;
    long long total = n*(n + 1)/2;
    if(total & 1){ // total % 2 ; x >> 1 <=> x/2
    	cout << "NO"; return 0;
    }
    total /= 2ll;
    vector<long long int> v1,v2;
    while(n){
    	if(total - n >= 0){
    		v1.push_back(n);
    		total -= n;
    	}else{
    		v2.push_back(n);
    	}
    	--n;
    }
    cout << "YES\n";
    cout << v1.size() << endl;
    for(auto x : v1) cout << x << " ";
    cout << endl;
	cout << v2.size() << endl;
	for(auto x : v2) cout << x << " ";
	return 0;
}