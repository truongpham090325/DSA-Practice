#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;
/*
-----------------------------------------------
ĐỀ BÀI - SINH CÁC CHUỖI NHỊ PHÂN ĐỘ DÀI n
-----------------------------------------------
Viết chương trình sinh tất cả các chuỗi nhị phân có độ dài đúng bằng n.
Mỗi chuỗi nhị phân là một dãy gồm n ký tự, mỗi ký tự là '0' hoặc '1'.

Các chuỗi được in theo thứ tự tăng dần về giá trị nhị phân
(giống như đếm từ 0 đến 2^n - 1).

-----------------------------------------------
INPUT
-----------------------------------------------
- Một số nguyên n (1 ≤ n ≤ 20) — độ dài của chuỗi nhị phân.

-----------------------------------------------
OUTPUT
-----------------------------------------------
- In ra tất cả các chuỗi nhị phân độ dài n, mỗi chuỗi trên một dòng.

-----------------------------------------------
VÍ DỤ
-----------------------------------------------
Input:
3

Output:
000
001
010
011
100
101
110
111
*/
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
			cout << x[i] << "";
		}
		cout << endl;
		sinh();
	}
}
