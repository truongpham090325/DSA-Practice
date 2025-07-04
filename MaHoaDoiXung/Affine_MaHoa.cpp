#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;
/*
 * Bài toán: Mã hóa và giải mã chuỗi ký tự tiếng Anh bằng thuật toán Affine Cipher.
 * Công thức mã hóa: E(x) = (a * x + b) mod 26
 * Công thức giải mã: D(x) = a⁻¹ * (x - b) mod 26
 * Yêu cầu: Viết hàm mã hóa và giải mã với tham số a, b (a phải nguyên tố cùng 26).
 * Ví dụ: "HELLO" → mã hóa → "RCWWA" với a=5, b=8
 */

int main(){
	cout << "Moi ban nhap ban ro : ";
	string s;
	cin >> s;
	cout << "Moi ban nhap khoa K\n";
	cout << "Nhap a : ";
	int a; cin >> a;
	cout << "Nhap b : ";
	int b; cin >> b;
	for(char &x : s){
		if(x >= 'A' && x <= 'Z'){
			x = x - 'A';
		}	
		else if(x >= 'a' && x <= 'z'){
			x = x - 'a';
		}
	}
	cout << "Ban ma ban can tim la : ";
	for(int i = 0; i < s.size(); i++){
		char y = int(a * s[i] + b) % 26 + 'A';
		cout << y;
	}
}
