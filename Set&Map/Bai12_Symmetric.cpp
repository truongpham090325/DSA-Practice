#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

int main(){
	int n, m;
	cin >> n >> m;
	set<int> se1, se2, se3;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		se1.insert(x);
	}
	for(int i = 0; i < m; i++){
		int x;
		cin >> x;
		se2.insert(x);
	}
	for(int x : se1){
		if(se2.count(x) == 0){
			se3.insert(x);
		}
	}
	for(int x : se2){
		if(se1.count(x) == 0){
			se3.insert(x);
		}
	}
	for(int x : se3){
		cout << x << " ";
	}
}
