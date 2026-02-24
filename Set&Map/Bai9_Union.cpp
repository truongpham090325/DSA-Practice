#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

int main(){
	int n, m;
	cin >> n >> m;
	set<int> se;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		se.insert(x);
	}
	for(int i = 0; i < m; i++){
		int x;
		cin >> x;
		se.insert(x);
	}
	for(auto it = se.rbegin(); it != se.rend(); it++){
		cout << *it << " ";
	}
}
