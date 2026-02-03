#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

void nhap(vector<int> &v){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
}

void rev(vector<int> &v){
	reverse(v.begin(), v.end());
}

void in(vector<int> v){
	for(int x : v){
		cout << x << " ";
	}
}

int main(){
	vector<int> v;
	nhap(v);
	rev(v);
	in(v);
}
