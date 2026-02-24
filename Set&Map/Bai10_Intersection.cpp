#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

int main(){
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	set<int> se;
	for(int i = 0; i < m; i++){
		int x;
		cin >> x;
		se.insert(x);
	}
	for(int x : a){
		if(se.count(x)){
			cout << x << " ";
		}
	}
}
