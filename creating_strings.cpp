#include<bits/stdc++.h>
using namespace std;

string s;
bool ok;
vector<string> v;

void sinh(){
	int i = s.size() - 2;
	while(i >= 0 && s[i] >= s[i + 1]){
		--i;
	}
	if(i == -1) ok = false;
	else{
		int j = s.size() - 1;
		while(s[i] >= s[j]) --j;
		swap(s[i],s[j]);
		reverse(s.begin() + i + 1,s.end());
	}
}

int main(int argc, char const *argv[])
{
	cin >> s;
	sort(s.begin(),s.end());
	ok = true;
	while(ok){
		v.push_back(s);
		sinh();
	}
	cout << v.size() << endl;
	for(string x : v) cout << x << endl;
	return 0;
}