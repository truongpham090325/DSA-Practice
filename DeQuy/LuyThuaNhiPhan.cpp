#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;
/*
 * Đề bài:
 * Cho hai số nguyên không âm a và b. Hãy tính giá trị:
 *      a^b mod (10^9 + 7)
 *
 * Yêu cầu:
 * - Sử dụng phương pháp **lũy thừa nhị phân** (Binary Exponentiation) để tối ưu hoá tốc độ tính toán.
 *
 * Input:
 * - Một dòng gồm hai số nguyên không âm a và b (0 ≤ a, b ≤ 10^18)
 *
 * Output:
 * - Một số nguyên duy nhất là kết quả của a^b % (10^9 + 7)
 *
 * Ví dụ:
 * Input:
 * 2 10
 * Output:
 * 1024
 */

ll powMod(ll a, ll b){
	if(b == 0){
		return 1;
	}
	ll x = powMod(a, b/2);
	if(b % 2 == 1){
		return (((x % MOD) * (x % MOD)) % MOD * (a % MOD)) % MOD;
	}
	else{
		return ((x % MOD) * (x % MOD)) % MOD;
	}
}

int main(){
	ll a, b;
	cin >> a >> b;
	cout << powMod(a, b) << endl;
}
