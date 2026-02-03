#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

vector<char> nhap(){
	vector<char> v;
	char x;
	while(cin >> x){
		v.push_back(x);
	}
	return v;
}

vector<char> thaydoi(vector<char> v){
	for(char &x : v){
		if(islower(x)){
			x = toupper(x);
		}
		else if(isupper(x)){
			x = tolower(x);
		}
		else{
			x = x;
		}
	}
	return v;
}

void in(vector<char> v){
	for(char x : v){
		cout << x << " ";
	}
}

int main(){
	vector<char> v = nhap();
	vector<char> res = thaydoi(v);
	in(res);
}
