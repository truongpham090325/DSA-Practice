#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

// Bài toán: Cửa hàng đồ chơi
// Một cửa hàng có N món đồ chơi, mỗi món có giá price[i].
// Teo có K đồng, muốn mua được càng nhiều đồ chơi càng tốt (tổng giá không vượt quá K).
// Hãy tìm số lượng đồ chơi tối đa mà Teo có thể mua.
//
// Input:
//   - Dòng 1: 2 số nguyên N và K — số lượng đồ chơi và số tiền của Teo.
//   - Dòng 2: N số nguyên price[i] — giá của từng món đồ chơi.
//
// Output:
//   - Một số nguyên: số lượng đồ chơi tối đa Teo có thể mua.
//
// Ví dụ 1:
// Input:
// 7 16
// 3 10 2 1 9 20 8
// Output:
// 4

int main(){
	int n, k;
	cin >> n >> k;
	int price[n];
	for(int i = 0; i < n; i++){
		cin >> price[i];
	}
	sort(price, price+n);
	int ans = 0;
	for(int i = 0; i < n; i++){
		if(k >= price[i]){
			ans++;
			k -= price[i];
		}
	}
	cout << ans << endl;
}
