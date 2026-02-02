#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

int main(){
	vector<pair<int, int>> v;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x, y;
		cin >> x >> y;
		v.push_back({x, y});
	}
	for(pair<int, int> x : v){
		cout << fixed << setprecision(2) << sqrt(pow(x.first, 2) + pow(x.second, 2)) << " ";
	}
}
