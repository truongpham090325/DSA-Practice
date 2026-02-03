#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

vector<int> unique_vector(vector<int> v){
	set<int> se;
	for(int x : v){
		se.insert(x);
	}
	vector<int> result;
	for(int x : se){
		result.push_back(x);
	}
	return result;
}

vector<int> nhap(){
	int n;
	cin >> n;
	vector<int> v;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	return v;
}

void in(vector<int> v){
	for(int x : v){
		cout << x << " ";
	}
}

int main(){
	vector<int> v = nhap();
	vector<int> res = unique_vector(v);
	in(res);
}
