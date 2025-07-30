#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
Bài tập : Sinh các hoán vị của tập S = {1, 2, ..., n}

Đề bài:
Viết chương trình sinh ra tất cả các hoán vị của tập S = {1, 2, ..., n} theo thứ tự từ điển tăng dần.
Mỗi hoán vị được in ra trên một dòng, các phần tử viết liền nhau (không cách).

Input:
- Một số nguyên dương n (1 ≤ n ≤ 9)

Output:
- Ghi ra tất cả các hoán vị của tập {1, 2, ..., n}, mỗi hoán vị trên một dòng.

Ví dụ:
Input:
3

Output:
123  
132  
213  
231  
312  
321
*/

int n, x[1000], ok = 1;

void ktao(){
	for(int i = 1; i <= n; i++){
		x[i] = i;
	}
}

void sinh(){
	int i = n-1;
	while(i >= 1 && x[i] > x[i+1]){
		--i;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		int j = n;
		while(x[i] > x[j]){
			--j;
		}
		swap(x[i], x[j]);
		reverse(x + i + 1, x + n + 1);
	}
}

int main(){
	cin >> n;
	ktao();
	while(ok){
		for(int i = 1; i <= n; i++){
			cout << x[i] << "";
		}
		cout << endl;
		sinh();
	}
}