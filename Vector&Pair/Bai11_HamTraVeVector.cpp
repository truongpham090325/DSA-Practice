#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

bool isPrime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return n > 1;
}

void nhap(vector<int> &v){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
}

void in(vector<int> v){
	for(int x : v){
		cout << x << " ";
	}
}

vector<int> prime_list(vector<int> v){
	vector<int> a;
	for(int x : v){
		if(isPrime(x)){
			a.push_back(x);	
		}
	}
	return a;
}

int main(){
	vector<int> v;
	nhap(v);
	vector<int> res = prime_list(v);
	in(res);
}
