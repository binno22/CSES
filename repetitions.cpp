#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string s; cin >> s;
	int n = s.size();
	int m = 0, curr = 1;
	for(int i = 1; i < n; i++){
		if(s[i] != s[i - 1]){
			m  = max(m,curr);
			curr = 0;
		}
		++curr;
	}
	m = max(m,curr);
	cout << m;
	return 0;
}