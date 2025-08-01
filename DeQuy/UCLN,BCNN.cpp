#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;
/*
 * Đề bài:
 * Cho 2 số nguyên dương a và b, hãy tính Ước chung lớn nhất (UCLN) và Bội chung nhỏ nhất (BCNN) của a và b.
 * Trong đó, yêu cầu sử dụng đệ quy để tính UCLN.
 *
 * Input Format:
 * - Gồm 2 số nguyên dương a và b.
 *
 * Constraints:
 * - 1 ≤ a, b ≤ 10^12
 *
 * Output Format:
 * - In ra UCLN và BCNN của 2 số trên 1 dòng, cách nhau bởi khoảng trắng.
 * - Dữ liệu đảm bảo kết quả nằm trong phạm vi của số nguyên 64-bit.
 *
 * Sample Input 0:
 * 10 20
 *
 * Sample Output 0:
 * 10 20
 */

ll gcd(ll a, ll b){
	if(b == 0){
		return a;
	}
	else{
		return gcd(b, a % b);
	}
}

ll lcm(ll a, ll b){
	return a / gcd(a, b) * b;
}

int main(){
	ll a, b;
	cin >> a >> b;
	cout << gcd(a, b) << " " << lcm(a, b) << endl;
}
