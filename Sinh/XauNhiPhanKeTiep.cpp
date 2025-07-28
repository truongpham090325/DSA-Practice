#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;
/*
-----------------------------------------------
[Thuật toán sinh] : Xâu nhị phân kế tiếp
-----------------------------------------------

Đề bài:
Cho xâu nhị phân S, hãy in ra xâu nhị phân kế tiếp của S. 
Trong trường hợp S là xâu nhị phân cuối cùng (toàn bit 1) 
thì in ra xâu nhị phân đầu tiên (toàn bit 0 cùng độ dài).

Input Format:
- 1 dòng duy nhất chứa xâu nhị phân S.

Output Format:
- In ra xâu nhị phân kế tiếp của S.

Sample Input 0:
1110010

Sample Output 0:
1110011

*/

string sinh(string &s){
	int i = s.size()-1;
	while(i > -1 && s[i] == '1'){
		s[i] = '0';
		--i;
	}
	if(i == -1){
		for(int j = 0; j < s.size(); j++){
			s[j] = '0';
		}
		return s;
	}
	else{
		s[i] = '1';
		return s;
	}
}

int main(){
	string s;
	cin >> s;
	cout << sinh(s) << endl;
}