#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

int main(){
	int n;
	cin >> n;
	set<int> se;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		se.insert(x);
	}
	int q;
	cin >> q;
	while(q--){
		int tt;
		cin >> tt;
		if(tt == 1){
			int x;
			cin >> x;
			se.insert(x);
		}
		else if(tt == 2){
			int x;
			cin >> x;
			if(se.count(x)){
				se.erase(x);	
			}
		}
		else if(tt == 3){
			cout << *se.begin() << endl;
		}
		else if(tt == 4){
			cout << *se.rbegin() << endl;
		}
	}
}
