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
	int l, r;
	cin >> l >> r;
	for(vector<int>::iterator it = v.begin() + l; it != v.begin() + r + 1; it++){
		cout << *it << " ";
	}
	cout << endl;
	for(auto it = v.begin() + r; it != v.begin() + l - 1; it--){
		cout << *it << " ";
	}
}
