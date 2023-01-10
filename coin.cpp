#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	long long int a,b; cin >> a >> b;
    	long long s = a + b;
        if(s % 3) cout << "NO\n";
        else{
            long long tmp = a;
            a = max(a,b);
            b = min(tmp,b);
            double x = double(2*a - b);
            double y = double(a - (4*a - 2*b)/3) ;
            if(x >= 0 && (double)x == (long long)x && y >= 0 && (double)y == (long long)y)
                cout << "YES\n";
            else 
                cout << "NO\n";
        }
    }
	return 0;
}