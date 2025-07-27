#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;
/*
[DP]. Tổng lớn nhất của dãy con tăng dần

Mô tả:
---------
Cho dãy số A[] gồm N số. Nhiệm vụ của bạn là tìm tổng lớn nhất của dãy con được sắp theo thứ tự tăng dần 
(trong đó các phần tử không nhất thiết phải liền kề trong mảng A[]).

Ví dụ:
- Với dãy A[] = {1, 101, 2, 3, 100, 4, 5}, ta có dãy con tăng dần có tổng lớn nhất là: 1 + 2 + 3 + 100 = 106.
- Với dãy A[] = {10, 7, 5}, không có dãy con tăng nào dài hơn 1 phần tử, nên kết quả là 10.
- Với dãy A[] = {1, 2, 3, 5}, tổng lớn nhất là 1 + 2 + 3 + 5 = 11.

Input Format:
-------------
- Dòng đầu tiên là số nguyên N (1 <= N <= 1000) - số lượng phần tử trong dãy.
- Dòng thứ hai là N số nguyên A[i] (0 <= A[i] <= 1000), cách nhau bởi khoảng trắng.

Output Format:
--------------
- Đưa ra kết quả là tổng lớn nhất của dãy con tăng dần.

Sample Input 0:
---------------
8
2 2 3 5 13 16 11 4

Sample Output 0:
----------------
45
*/

int F[1005];

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		F[i] = a[i];
		for(int j = 0; j < i; j++){
			if(a[i] > a[j]){
				F[i] = max(F[i], F[j] + a[i]);
			}
		}
	}
	cout << *max_element(F, F+n) << endl;
}
