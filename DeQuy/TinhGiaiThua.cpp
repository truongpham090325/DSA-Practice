#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;
/*
 * Đề bài:
 * Viết chương trình sử dụng hàm đệ quy để tính giai thừa của một số nguyên không âm n.
 *
 * Giai thừa của n (ký hiệu là n!) được định nghĩa như sau:
 *   - 0! = 1
 *   - n! = n × (n-1) × (n-2) × ... × 1, với n ≥ 1
 *   - Quy ước: n! = n × (n-1)!
 *
 * Yêu cầu:
 * - Viết hàm đệ quy để tính giai thừa của n.
 * - Nhập vào số nguyên không âm n (0 ≤ n ≤ 20), in ra n!
 *
 * Input:
 * Một số nguyên không âm n
 *
 * Output:
 * Giai thừa của n (n!)
 *
 * Ví dụ:
 * Input:
 * 5
 * Output:
 * 120
 */

ll gt(int n){
	if(n == 0){
		return 1;
	}
	else{
		return n * gt(n-1);
	}
}

int main(){
	int n;
	cin >> n;
	cout << gt(n) << endl;
}
