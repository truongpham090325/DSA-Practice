#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;
/*
 * Bài toán: Giải mã chuỗi đã được mã hóa bằng thuật toán Caesar Cipher.
 * Công thức: D(x) = (x - k + 26) mod 26
 * Trong đó:
 *   - x là vị trí ký tự mã hóa (A=0, B=1,..., Z=25)
 *   - k là khóa dịch (số bước đã dùng để mã hóa)
 * Yêu cầu: Viết hàm nhận chuỗi đầu vào và giá trị k, trả về chuỗi gốc đã giải mã.
 * Ví dụ: "KHOOR" → giải mã → "HELLO" với k = 3
 */

int main(){
	cout << "Moi ban nhap ban ma : ";
	string s;
	getline(cin, s);
	cout << "Moi ban nhap khoa K : ";
	int k;
	cin >> k;
	for(int i = 0; i < s.size(); i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			if(char(s[i] - k) < 'A'){
				s[i] = (s[i] - 'A' - (k % 26) + 26) % 26 + 'A';
			}
			else{
				s[i] = char(s[i] - k);
			}
		}
		else if(s[i] >= 'a' && s[i] <= 'z'){
			if(char(s[i] -k ) < 'a'){
				s[i] = (s[i] - 'a' - (k % 26) + 26) % 26 + 'a';
			}
			else{
				s[i] = char(s[i] - k);
			}
		}
	}
	cout << "Ban ro ban can tim la: ";
	cout << s;
}