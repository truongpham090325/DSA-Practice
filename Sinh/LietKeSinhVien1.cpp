#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

//Cài đặt chương trình liệt kê các cách lấy 4 sinh viên từ 6 sinh viên gồm:
//Trang, Cong, Trung, Binh, Hoan, Mai.

int n = 6, k = 4, x[1000], ok = 1;

void ktao(){
	for(int i = 1; i <= k; i++){
		x[i] = i;
	}
}

void sinh(){
	int i = k;
	while(i >= 1 && x[i] == n-k+i){
		--i;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		x[i]++;
		for(int j = i+1; j <= n; j++){
			x[j] = x[j-1] + 1;
		}
	}
}

int main(){
	ktao();
	while(ok){
		for(int i = 1; i <= k; i++){
			if(x[i] == 1){
				cout << "Trang" << " ";
			}
			else if(x[i] == 2){
				cout << "Cong" << " ";
			}
			else if(x[i] == 3){
				cout << "Trung" << " ";
			}
			else if(x[i] == 4){
				cout << "Binh" << " ";
			}
			else if(x[i] == 5){
				cout << "Hoan" << " ";
			}
			else if(x[i] == 6){
				cout << "Mai" << " ";
			}
		}
		cout << endl;
		sinh();
	}
}
