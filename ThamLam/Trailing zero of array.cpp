#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
  [Tham Lam]. Trailing zeros of array
  
  Cho mảng A[] gồm N phần tử, gọi X là tích các phần tử trong mảng A[].
  Hãy xác định xem X có bao nhiêu chữ số 0 liên tiếp tính từ chữ số cuối cùng của X.

  Ví dụ:
    A = [2, 5, 10, 3, 1, 2]
    Khi đó X = 2 * 5 * 10 * 3 * 1 * 2 = 600
    → X có 2 chữ số 0 tận cùng.

  Đầu vào:
    - Dòng 1: số nguyên N (số phần tử trong mảng)
    - Dòng 2: N số nguyên A[i] (0 ≤ A[i] ≤ 10^6)

  Giới hạn:
    - 1 ≤ N ≤ 10^6

  Đầu ra:
    - In ra số lượng chữ số 0 tận cùng trong tích X.
*/

int main(){
	int n;
	cin >> n;
	int c2 = 0, c5 = 0;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		while(x % 2 == 0){
			c2++;
			x /= 2;
		}
		while(x % 5 == 0){
			c5++;
			x /= 5;
		}
	}
	cout << min(c2, c5) << endl;
}