#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;
/*
 * Bài toán: Sinh tất cả hoán vị của tập S = {1, 2, ..., n}
 * ---------------------------------------------------------
 * Cho số nguyên dương n (1 ≤ n ≤ 10).
 * Hãy liệt kê tất cả các hoán vị của n phần tử từ 1 đến n.
 * Mỗi hoán vị là một dãy gồm n số khác nhau, không trùng lặp.
 * Các hoán vị được liệt kê theo thứ tự từ điển tăng dần.
 * 
 * Sử dụng thuật toán quay lui để sinh các cấu hình hợp lệ.
 * 
 * Ví dụ:
 * Input:
 * 3
 * 
 * Output:
 * 123
 * 132
 * 213
 * 231
 * 312
 * 321
 * 
 * Giải thích: Có tất cả 3! = 6 hoán vị của tập {1, 2, 3}.
 */

int n, x[1000], used[1000];

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(used[j] == 0){
			x[i] = j;
			used[j] = 1;
			if(i == n){
				for(int j = 1; j <= n; j++){
					cout << x[j] << "";
				}
				cout << endl;
			}
			else{
				Try(i+1);
			}
			used[j] = 0;
		}
	}
}

int main(){
	cin >> n;
	Try(1);
}
