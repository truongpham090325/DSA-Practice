#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

int main(){
	vector<pair<char, int>> v;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		char c;
		cin >> c;
		bool check = true;
		for(int j = 0; j < v.size(); j++){
			if(v[j].first == c){
				v[j].second++;
				check = false;
				break;
			}
		}
		if(check){
			v.push_back({c, 1});
		}
	}
	for(pair<char, int> x : v){
		cout << x.first << " " << x.second << endl;
	}
}
