#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

/*
    ĐỀ BÀI: TÌM KIẾM PHẦN TỬ TRONG MẢNG BẰNG ĐỆ QUY

    Viết chương trình tìm kiếm một phần tử x trong mảng số nguyên bằng phương pháp đệ quy.

    - Đầu vào:
        • Số nguyên n (1 ≤ n ≤ 10^5) – số phần tử của mảng.
        • Một số nguyên x cần tìm.

    - Yêu cầu:

    - Đầu ra:
        • In "1" nếu tìm thấy phần tử x trong mảng.
        • In "0" nếu không tìm thấy.

    - Ví dụ:
        Input:
        5
        3 1 7 2 5
        7

        Output:
        1

        Input:
        4
        10 20 30 40
        25
        
        Output:
        0
*/

bool cmp(int a, int b){
	return a > b;
}

bool check(int a[], int n, int x){
	if(n == -1){
		return false;
	}
	else if(a[n] == x){
		return true;
	}
	else{
		return check(a, n-1, x);
	}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int x;
	cin >> x;
	sort(a, a+n, cmp);
	if(check(a, n-1, x)){
		cout << "1" << endl;
	}
	else{
		cout << "0" << endl;
	}
}
