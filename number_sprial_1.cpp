#include<bits/stdc++.h>
using namespace std;

#define li long int

int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		li x,y; cin >> x >> y;
		if(x < y){
			if(y % 2 == 1){
				li r = y*y;
				cout << r - x + 1 << endl;
			}else{
				li r = (y - 1)*(y- 1) + 1;
				cout << r + x - 1 << endl;
			}
		}else{
			if(x % 2 == 0){
				li r = x*x;
				cout << r - y + 1 << endl;
			}else{
				li r = (x - 1)*(x - 1) + 1;
				cout << r + y - 1 << endl;
			}
		}
	}
	return 0;
}