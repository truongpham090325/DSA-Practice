#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

/*
    ĐỀ BÀI: CHIA MẢNG THÀNH HAI PHẦN CÓ HIỆU TỔNG LỚN NHẤT

    Cho mảng A[] gồm N số nguyên không âm và số K. 
    Nhiệm vụ của bạn là chia mảng A[] thành hai mảng con có kích thước K và N-K 
    sao cho hiệu giữa tổng hai mảng con là lớn nhất.

    Ví dụ:
        Với mảng A[] = {8, 4, 5, 2, 10}, K = 2
        Ta có kết quả là 17 vì mảng A[] được chia thành hai mảng {4, 2} và {8, 5, 10}.
        Khi đó hiệu giữa tổng hai mảng con là 23 - 6 = 17 (lớn nhất).

    Input Format:
        - Dòng đầu chứa 2 số nguyên N và K
        - Dòng thứ 2 chứa N số nguyên của mảng A[]

    Constraints:
        - 1 <= K <= N <= 10^6
        - 0 <= A[i] <= 10^9

    Output Format:
        - In ra đáp án của bài toán

    Sample Input 0:
        6 4
        3 10 7 5 2 1

    Sample Output 0:
        27

int main(){
	int n, k;
	cin >> n >> k;
	k = min(k, n-k);
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	int ans = 0;
	for(int i = 0; i < n; i++){
		if(i < k){
			ans -= a[i];
		}
		else{
			ans += a[i];
		}
	}
	cout << ans << endl;
}
