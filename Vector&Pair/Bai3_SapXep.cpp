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
	sort(v.begin(), v.end());
	for(int x : v){
		cout << x << " ";
	}
	cout << endl;
	sort(v.begin(), v.end(), greater<int>());
	for(int x : v){
		cout << x << " ";
	}
}
