#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;
/*
 * Đề bài:
 * Viết chương trình sử dụng hàm đệ quy để tính số Fibonacci thứ n.
 *
 * Dãy Fibonacci được định nghĩa như sau:
 *   F(1) = 0
 *   F(2) = 1
 *   F(n) = F(n-1) + F(n-2) với n ≥ 3
 *
 * Yêu cầu:
 * - Viết hàm đệ quy để tính F(n)
 * - Nhập vào số nguyên dương n (1 ≤ n ≤ 50), in ra F(n)
 *
 * Input:
 * Một số nguyên dương n
 *
 * Output:
 * Số Fibonacci thứ n tương ứng
 *
 * Ví dụ:
 * Input:
 * 6
 * Output:
 * 5
 */

ll F(int n){
	if(n == 1){
		return 0;
	}
	if(n == 2){
		return 1;
	}
	return F(n-2) + F(n-1);
}

int main(){
	int n;
	cin >> n;
	cout << F(n) << endl;
}
