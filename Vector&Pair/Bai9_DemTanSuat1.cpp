#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

int main(){
	int n;
	cin >> n;
	vector<pair<int, int>> v;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		bool check = true;
		for(pair<int, int> &a : v){
			if(a.first == x){
				a.second++;
				check = false;
				break;
			}
		}
		if(check){
			v.push_back({x, 1});
		}
	}
	for(auto x : v){
		cout << x.first << " " << x.second << endl;
	}
}
