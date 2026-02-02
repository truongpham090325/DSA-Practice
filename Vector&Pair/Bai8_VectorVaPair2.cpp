#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

int main(){
	int n;
	cin >> n;
	pair<pair<int, int>, int> a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i].first.first >> a[i].first.second >> a[i].second;
	}
	for(auto x : a){
		cout << x.first.first + x.first.second + x.second << " ";
	}
}
