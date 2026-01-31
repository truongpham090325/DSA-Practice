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
	int q;
	cin >> q;
	while(q--){
		int tt;
		cin >> tt;
		if(tt == 1){
			int index, value;
			cin >> index >> value;
			if(index >= 0 && index <= v.size()){
				v.insert(v.begin() + index, value);
			}
		}
		else{
			int index;
			cin >> index;
			if(index >= 0 && index < v.size()){
				v.erase(v.begin() + index);
			}
		}
	}
	if(v.empty()){
		cout << "EMPTY" << endl;
	}
	else{
		for(int x : v){
			cout << x << " ";
		}
	}
}
