#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    bool ok = true;
    int n = s.size() - 1;
    string t = "";
	for(int k = n; k >= 0; k--){
		t += s[k];
	}
	if(t == s){
		cout << s ; return 0;
	}
    int pos = n; // chi so danh dau
    for(int i = 0; i < n/2; i++){
    	int r = pos;
    	char x = s[i];
    	while(i < r){
    		if(x == s[r]){
    			if(s[r] == s[pos]) s[r] = x;
    			else swap(s[r],s[pos]);
    			string tmp = "";
    			for(int k = n; k >= 0; k--){
    				tmp += s[k];
    			}
		    	if(tmp == s){
		    		cout << s ; return 0;
		    	}
    			--pos; break;
    		}
    		--r;
    	}
    	if(i == r){
    		swap(s[i],s[pos - 1]); 
    		i = i;
    		set<char> se;
    		for(int j = i; j <= pos; j++){
    			se.insert(s[j]);
    		}
    		if(se.size() == (pos - i + 1)){
    			ok = false; 
    			cout << "NO SOLUTION\n"; return 0;
    		}
    	}
    }string tmp = "";
    			for(int k = n; k >= 0; k--){
    				tmp += s[k];
    			}
		    	if(tmp == s){
		    		cout << s ; return 0;
		    	}
	return 0;
}