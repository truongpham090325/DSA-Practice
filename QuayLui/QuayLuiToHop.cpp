#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;
/*
 * Bài toán: Sinh các tổ hợp chập k của n phần tử
 * ----------------------------------------------
 * Cho hai số nguyên dương n và k (1 ≤ k ≤ n ≤ 20).
 * Hãy liệt kê tất cả các tổ hợp chập k của tập S = {1, 2, ..., n},
 * mỗi tổ hợp là một dãy gồm k số nguyên tăng dần, không trùng nhau.
 * Các tổ hợp được liệt kê theo thứ tự từ điển tăng dần.
 * 
 * Sử dụng phương pháp quay lui để sinh tất cả các tổ hợp hợp lệ.
 * 
 * Ví dụ:
 * Input:
 * 5 3
 * 
 * Output:
 * 123
 * 124
 * 125
 * 134
 * 135
 * 145
 * 234
 * 235
 * 245
 * 345
 */

int n, k, x[1000];

void Try(int i){
	for(int j = x[i-1]+1; j <= n-k+i; j++){
		x[i] = j;
		if(i == k){
			for(int j = 1; j <= k; j++){
				cout << x[j] << "";
			}
			cout << endl;
		}
		else{
			Try(i+1);
		}
	}
}

int main(){
	cin >> n >> k;
	Try(1);
}
