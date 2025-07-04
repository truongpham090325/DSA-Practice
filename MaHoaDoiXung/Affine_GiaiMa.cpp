#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;
/*
 * Bài toán: Giải mã chuỗi đã được mã hóa bằng thuật toán Affine Cipher.
 * Công thức giải mã: D(x) = a⁻¹ * (x - b) mod 26
 * Trong đó:
 *   - x là vị trí ký tự mã hóa (A=0, B=1,..., Z=25)
 *   - a⁻¹ là nghịch đảo modular của a theo mod 26
 *   - a và b là các số đã dùng khi mã hóa (a phải nguyên tố cùng 26)
 * Yêu cầu: Viết hàm nhận chuỗi đầu vào, a và b, trả về chuỗi đã giải mã.
 * Ví dụ: "RCLLA" → giải mã → "HELLO" với a=5, b=8
 */

int Euclid_MoRong(int a, int b, int &x, int &y){
	if(b == 0){
		x = 1;
		y = 0;
		return a;
	}
	int x1, y1;
	int d = Euclid_MoRong(b, a % b, x1, y1);
	x = y1;
	y = x1 - y1 * (a / b);
	return d;
}
int NghichDaoModulo(int a, int m){
	int x, y;
	int d = Euclid_MoRong(a, m, x, y);
	if(d != 1){
		return -1;
	}
	else{
		return x = (x % m + m) % m;
	}
}

int main(){
	cout << "Moi ban nhap ban ma : ";
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
	int a1 = NghichDaoModulo(a, 26);
	cout << "Ban ro ma ban can tim la : ";
	for(int i = 0; i < s.size(); i++){
		char x = (a1 * (s[i] - b + 26)) % 26 + 'A';
		cout << x;
	}
}
