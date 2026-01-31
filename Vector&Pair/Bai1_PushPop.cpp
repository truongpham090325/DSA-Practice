#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

int main(){
	vector<int> v;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int tt;
		cin >> tt;
		if(tt == 1){
			int x;
			cin >> x;
			v.push_back(x);
		}
		else{
			if(!v.empty()){
				v.pop_back();
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
	return 0;
}
