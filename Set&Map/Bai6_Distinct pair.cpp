#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

int main(){
	int n;
	cin >> n;
	map<int, int> mp;
	for(int i = 0; i < n; i++){
		int x, y;
		cin >> x >> y;
		mp.insert({x, y});
	}
	cout << mp.size() << endl;
}
