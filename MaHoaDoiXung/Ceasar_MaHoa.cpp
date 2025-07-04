#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;
/*
 * Bài toán: Mã hóa chuỗi ký tự tiếng Anh bằng thuật toán Caesar Cipher.
 * Công thức: E(x) = (x + k) mod 26
 * Trong đó:
 *   - x là vị trí ký tự (A=0, B=1,..., Z=25)
 *   - k là số bước dịch (khóa mã hóa)
 * Yêu cầu: Viết hàm mã hóa chuỗi đầu vào với tham số k.
 * Ví dụ: "HELLO" → "KHOOR" với k = 3
 */

int main(){
	cout << "Moi ban nhap ban ro : ";
	string s;
	getline(cin, s);
	cout << "Moi ban nhap khoa K : ";
	int k;
	cin >> k;
	for(int i = 0; i < s.size(); i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			if(char(s[i] + k) > 'Z'){
				s[i] = (s[i] - 'A' + k) % 26 + 'A';
			}
			else{	
				s[i] = char(s[i] + k);
			}
		}
		else if(s[i] >= 'a' && s[i] <= 'z'){
			if(char(s[i]) + k > 'z'){
				s[i] = (s[i] - 'a' + k) % 26 + 'a';
			}
			else{
				s[i] = char(s[i] + k);
			}
		}
	}
	cout << "Ban ma ban can tim la: ";
	cout << s;
}
