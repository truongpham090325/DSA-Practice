#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

void nhap(vector<vector<int>> &v, int n, int m){
	for(int i = 0; i < n; i++){
		vector<int> tmp;
		for(int j = 0; j < m; j++){
			int x;
			cin >> x;
			tmp.push_back(x);
		}
		v.push_back(tmp);
	}
}

void xuat(vector<vector<int>> v, int n, int m){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
}

void lat(vector<vector<int>> &v, int n, int m){
	for(int i = 0; i < n; i++){
		reverse(v[i].begin(), v[i].end());
	}
}

int main(){
	int n, m;
	cin >> n >> m;
	vector<vector<int>> v;
	nhap(v, n, m);
	lat(v, n, m);
	xuat(v, n, m);
}
