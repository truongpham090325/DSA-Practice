#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

int main(){
	int n;
	cin >> n;
	cin.ignore();
	map<string, vector<string>> mp;
	for(int i = 0; i < n; i++){
		string s;
		getline(cin, s);
		int idx = s.find("-");
		string a = s.substr(0, idx-1);
		string b = s.substr(idx+2);
		mp[a].push_back(b);
		mp[b].push_back(a);
	}
	
	for(auto x : mp){
		cout << x.first << " : ";
		for(int j = 0; j < x.second.size(); j++){
			cout << x.second[j];
			if(j != x.second.size()-1){
				cout << ", ";
			}
		}
		cout << endl;
	}
}
