#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t; cin >> t;
    while(t--){
    	long long a,b; cin >> a >> b;
        long long s = a + b;
        if(s % 3) cout << "NO\n";
        else{
            while(a > 0 && b > 0){
                if(a > b){
                    a -= 2;
                    b -= 1;
                }else{
                    a -= 1; b -= 2;
                }
            }
            if(a == 0 && b == 0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
	return 0;
}