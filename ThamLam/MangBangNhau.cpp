#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;
// Bài toán: Mảng bằng nhau
// Hai mảng A và B được xem là bằng nhau nếu tích tất cả các phần tử của chúng bằng nhau.
// Cho mảng A có N phần tử, mảng B có M phần tử.
// Kiểm tra xem tích các phần tử trong hai mảng có bằng nhau hay không.
//
// Input:
//   - Dòng 1: Hai số nguyên N và M — số phần tử của mảng A và B.
//   - Dòng 2: N số nguyên — các phần tử của mảng A.
//   - Dòng 3: M số nguyên — các phần tử của mảng B.
//
// Output:
//   - In "YES" nếu tích hai mảng bằng nhau.
//   - Ngược lại in "NO".
//
// Ví dụ 1:
// Input:
// 2 3
// 9 3
// 3 3 3
// Output:
// YES

int cnt[1000001];

void pt1(int n){
	for(int i = 2; i * i <= n; i++){
		while(n % i == 0){
			cnt[i]++;
			n /= i;
		}
	}
	if(n > 1){
		cnt[n]++;
	}
}

void pt2(int n){
	for(int i = 2; i * i <= n; i++){
		while(n % i == 0){
			cnt[i]--;
			n /= i;
		}
	}
	if(n > 1){
		cnt[n]--;
	}
}

int main(){
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		pt1(x);
	}
	for(int i = 0; i < m; i++){
		int x;
		cin >> x;
		pt2(x);
	}
	for(int i = 0; i <= 100000; i++){
		if(cnt[i] != 0){
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
