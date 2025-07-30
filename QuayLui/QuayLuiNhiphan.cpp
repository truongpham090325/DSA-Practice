#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;
/*
 * Bài toán: Sinh tất cả các xâu nhị phân độ dài n
 * ----------------------------------------------
 * Cho số nguyên dương n (1 <= n <= 20).
 * Hãy liệt kê tất cả các xâu nhị phân có độ dài n theo thứ tự từ điển tăng dần.
 * Sử dụng phương pháp quay lui để giải bài toán.
 * 
 * Ví dụ:
 * Input:
 * 3
 * 
 * Output:
 * 000
 * 001
 * 010
 * 011
 * 100
 * 101
 * 110
 * 111
 */

int n, x[1000];

void Try(int i){
	for(int j = 0; j <= 1; j++){
		x[i] = j;
		if(i == n){
			for(int j = 1; j <= n; j++){
				cout << a[j] << "";
			}
			cout << endl;
		}
		else{
			Try(i+1);
		}
	}
}

int main(){
	cin >> n;
	Try(1);
}