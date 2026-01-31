#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

int main(){
	vector<int> v;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	reverse(v.begin(), v.end());
	for(int x : v){
		cout << x << " ";
	}
	cout << endl;
	int l, r;
	cin >> l >> r;
	reverse(v.begin() + l, v.begin() + r + 1);
	for(int x : v){
		cout << x << " ";
	}
}
