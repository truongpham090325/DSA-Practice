#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

// Bài toán: Nhóm bạn thân thiện
// Cho mảng A gồm N học sinh, mỗi học sinh có một trình độ A[i].
// Chọn K học sinh sao cho chênh lệch giữa học sinh giỏi nhất và kém nhất trong nhóm là nhỏ nhất.
// In ra độ chênh lệch nhỏ nhất đó.
// Input: N, mảng A[N], K
// Output: độ chênh lệch nhỏ nhất trong nhóm K học sinh
// Ví dụ:
// Input:
// 6 3
// 3 9 10 20 14 7
//
// Output:
// 3

int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	int result = INT_MAX;
	for(int i = 0; i <= n-k; i++){
		result = min(result, a[i+k-1] - a[i]);
	}
	cout << result << endl;
}
