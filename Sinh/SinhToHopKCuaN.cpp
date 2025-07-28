#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;
/*
------------------------------------------------------------
[Thuật toán sinh] - Bài: Sinh các tập con k phần tử của tập S
------------------------------------------------------------

Đề bài:
Viết chương trình sinh ra tất cả các tập con gồm đúng k phần tử 
của tập S = {1, 2, ..., n}. Mỗi tập con được in ra dưới dạng dãy 
các số nguyên tăng dần, mỗi tập con trên một dòng.

Các tập con phải được sinh ra theo thứ tự từ điển tăng dần 
(giống thứ tự từ điển của các số).

Input Format:
- Một dòng gồm hai số nguyên n và k (1 ≤ k ≤ n ≤ 1000).

Output Format:
- In ra tất cả các tập con gồm đúng k phần tử của tập S,
  mỗi tập con trên một dòng, các phần tử viết liền nhau không cách.

Ví dụ:

Input:
5 3

Output:
123
124
125
134
135
145
234
235
245
345

Giải thích:
Tập S = {1, 2, 3, 4, 5}, các tập con có 3 phần tử được liệt kê 
theo đúng thứ tự từ điển: bắt đầu từ {1,2,3} cho tới {3,4,5}.
*/

int n, k, x[1000], ok = 1;

void ktao(){
	for(int i = 1; i <= k; i++){
		x[i] = i;
	}
}

void sinh(){
	int i = k;
	while(i >= 1 && x[i] == n-k+i){
		--i;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		x[i]++;
		for(int j = i+1; j <= k; j++){
			x[j] = x[j-1]+1;
		}
	}
}


int main(){
	cin >> n >> k;
	ktao();
	while(ok == 1){
		for(int i = 1; i <= k; i++){
			cout << x[i] << "";
		}
		cout << endl;
		sinh();
	}
}
