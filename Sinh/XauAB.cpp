#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

//Cài đặt chương trình sinh các chuỗi ký tự độ dài chỉ chứa 2 ký tự ‘a’ và
//ký tự ‘b’.

int n, x[1000], ok = 1;

void ktao(){
	for(int i = 1; i <= n; i++){
		x[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && x[i] == 1){
		x[i] = 0;
		--i;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		x[i] = 1;
	}
}

int main(){
	cin >> n;
	while(ok){
		for(int i = 1; i <= n; i++){
			if(x[i] == 0){
				cout << 'a' << "";
			}
			else{
				cout << 'b' << "";
			}
		}
		cout << endl;
		sinh();
	}
}
