#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

/*
    Trong một buổi học toán, giáo viên viết 2 số nguyên, A và B, và yêu cầu Tèo thực hiện phép cộng. 
    Tèo không bao giờ tính toán sai, nhưng thỉnh thoảng cậu ta chép các con số một cách không chính xác. 
    Lỗi duy nhất của Tèo là ghi nhầm '5' thành '6' hoặc ngược lại.

    Nhiệm vụ: 
        Cho hai số A và B, hãy tính tổng nhỏ nhất và tổng lớn nhất mà Tèo có thể nhận được.

    Input Format:
        - Một dòng duy nhất chứa 2 số A và B.

    Constraints:
        - 1 <= A, B <= 10^16

    Output Format:
        - In ra tổng lớn nhất và nhỏ nhất trên 1 dòng.

    Ví dụ:

    Input:
        891 746
    Output:
        1637 1636
*/

ll replace(ll a, ll b, char x, char y){
	string s = to_string(a);
	string t = to_string(b);
	for(char &c : s){
		if(c == x){
			c = y;
		}
	}
	for(char &c : t){
		if(c == x){
			c = x;
		}
	}
	return stoll(s) + stoll(t);
}

int main(){
	ll a, b;
	cin >> a >> b;
	cout << replace(a, b, '5', '6') << " " << replace(a, b, '6', '5') << endl;
}
