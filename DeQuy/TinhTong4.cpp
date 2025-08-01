#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;
/*
 * Đề bài:
 * Viết hàm đệ quy tính giá trị biểu thức sau với số nguyên dương n:
 *     S(n) = -1 + 2 - 3 + 4 - 5 + 6 + ... + (-1)^n * n bằng đệ quy
 * Yêu cầu:
 * - Sử dụng hàm đệ quy để tính giá trị biểu thức S(n).
 * - Nhập vào số nguyên n (n ≥ 1), in ra giá trị S(n).
 *
 * Input: Một số nguyên dương n (1 ≤ n ≤ 10^5)
 * Output: Một số nguyên là kết quả của biểu thức S(n)
 *
 * Ví dụ:
 * Input:
 * 5
 * Output:
 * -3
 */

int S(int n){
	if(n == 1){
		return -1;
	}
	else{
		return pow(-1, n) * n + S(n-1);
	}
}

int main(){
	int n;
	cin >> n;
	cout << S(n) << endl;
}
