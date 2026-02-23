#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

int main(){
	int n;
	cin >> n;
	map<int, int> mp;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			int x;
			cin >> x;
			if(mp[x] == i-1){
				mp[x] = i;
			}
		}
	}
	bool check = false;
	for(pair<int, int> x : mp){
		if(x.second == n){
			cout << x.first << " ";
			check = true;
		}
	}
	if(!check){
		cout << "NOT FOUND" << endl;
	}
}
