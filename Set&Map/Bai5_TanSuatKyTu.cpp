#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

int main(){
	int n;
	cin >> n;
	map<char, int> mp;
	for(int i = 0; i < n; i++){
		char x;
		cin >> x;
		mp[x]++;
	}
	cout << mp.begin()->first << " " << mp.end()->second << endl;
	cout << mp.rbegin()->first << " " << mp.rend()->second << endl;
	for(pair<char, int> x : mp){
		cout << x.first << " " << x.second << endl;
	}
	cout << endl;
	for(auto it = mp.rbegin(); it != mp.rend(); it++){
		cout << (*it).first << " " << (*it).second << endl;
 	}
}
