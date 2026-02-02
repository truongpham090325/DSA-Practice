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
	cout << *min_element(v.begin(), v.end()) << endl;
	cout << *max_element(v.begin(), v.end()) << endl;
	cout << accumulate(v.begin(), v.end(), 0) << endl;
	return 0;
}
