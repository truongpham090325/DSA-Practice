#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;
/*
    ĐỀ BÀI: KIỂM TRA MẢNG ĐỐI XỨNG

    Viết chương trình kiểm tra xem một mảng số nguyên có phải là mảng đối xứng (palindrome) hay không.

    - Đầu vào:
        • Số nguyên n (1 ≤ n ≤ 10^5) – số phần tử của mảng.
        • Dãy n số nguyên a[0], a[1], ..., a[n-1].

    - Đầu ra:
        • In "YES" nếu mảng đối xứng.
        • In "NO" nếu mảng không đối xứng.

    - Ví dụ:
        Input:
        5
        1 2 3 2 1
        Output:
        YES

        Input:
        4
        1 3 2 1
        Output:
        NO
*/

bool check(int a[], int l, int r){
	if(l >= r){
		return true;
	}
	else if(a[l] != a[r]){
		return false;
	}
	else{
		return check(a, l+r, r-1);
	}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	if(check(a, 0, n-1)){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
}
