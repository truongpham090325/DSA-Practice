#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;
/*
[DP]. Dãy con tăng dài nhất (LIS - Longest Increasing Subsequence)

Mô tả:
---------
Cho mảng số nguyên A[] gồm N phần tử, hãy tìm dãy con (không nhất thiết các phần tử phải liền kề) tăng chặt dài nhất của mảng A.

Input Format:
-------------
- Dòng đầu tiên là số nguyên N - số lượng phần tử trong mảng (1 <= N <= 1000)
- Dòng thứ hai chứa N số nguyên A[i] (1 <= A[i] <= 1000)

Output Format:
--------------
- In ra độ dài của dãy con tăng dài nhất.

Ví dụ:

Sample Input 0:
---------------
14
128 104 53 876 660 961 754 755 290 231 224 915 392 994

Sample Output 0:
----------------
6

Giải thích:
-----------
Một dãy con tăng dài nhất có thể là: 104, 660, 754, 755, 915, 994
*/

ll F[100005];

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		F[i] = 1;
		for(int j = 0; j < i; j++){
			if(a[i] > a[j]){
				F[i] = max(F[i], F[j]+1);
			}
		}
	}
	cout << *max_element(F, F+n) << endl;
}
