#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

int n = 6, a[1000], ok = 1;

void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] > a[i+1]){
		--i;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		int j = n;
		while(a[i] > a[j]){
			--j;
		}
		swap(a[i], a[j]);
		reverse(a+i+1, a+n+1);
	}
}

int main(){
	ktao();
	while(ok){
		for(int i = 1; i <= n; i++){
			if(a[i] == 1){
				cout << "Trang" << " ";
			}
			else if(a[i] == 2){
				cout << "Cong" << " ";
			}
			else if(a[i] == 3){
				cout << "Trung" << " ";
			}
			else if(a[i] == 4){
				cout << "Binh" << " ";
			}
			else if(a[i] == 5){
				cout << "Hoan" << " ";
			}
			else{
				cout << "Mai" << " ";
			}
		}
		cout << endl;
		sinh();
	}
}
