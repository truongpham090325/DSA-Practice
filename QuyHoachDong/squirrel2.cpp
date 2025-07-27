#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
[Bài toán QHD squirrel 2]

Có N nhóm hạt ngũ cốc được đánh số từ 1 tới N, mỗi nhóm sẽ có lượng hạt ngũ cốc là A[i] với 1 <= i <= N.
Một con sóc đang ở vị trí nhóm hạt số 1. Nhiệm vụ của nó là tới được nhóm hạt thứ N.

Chi phí mỗi lần di chuyển từ nhóm hạt x sang nhóm hạt y là abs(A[x] - A[y]).

Mỗi lần di chuyển, con sóc chỉ có thể đi từ nhóm hạt i sang nhóm hạt i + 1 hoặc i + 2, ..., i + K.

Nhiệm vụ của bạn là tính số lượng ngũ cốc tối thiểu mà con sóc này phải tiêu tốn để có thể đi đến nhóm hạt thứ N.

Input Format:
- Dòng 1: N, K
- Dòng 2: N số là số hạt ngũ cốc của mỗi nhóm từ 1 tới N

Constraints:
- 1 <= N <= 10^6
- 1 <= K <= 100
- 1 <= A[i] <= 10^9

Output Format:
- In ra số lượng ngũ cốc mà sóc đã mất làm chi phí di chuyển
*/

//Input:
//5 3
//5 1 1 7 4
//
//Output:
//5

ll F[100005];
int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	F[0] = 0;
	for(int i = 1; i < n; i++){
		ll tmp = LLONG_MAX;
		for(int j = 1; j <= k; j++){
			if(i - j >= 0){
				tmp = min(tmp, F[i-j] + abs(a[i] - a[i-j]));
			}
		}
		F[i] = tmp;
	}
	cout << F[n-1] << endl;
}