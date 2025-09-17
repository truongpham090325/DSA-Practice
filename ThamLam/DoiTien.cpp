#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

/*
    ĐỀ BÀI: ĐỔI TIỀN SỬ DỤNG THUẬT TOÁN THAM LAM

    Viết chương trình tính số tờ tiền ít nhất cần dùng để đổi ra số tiền n, 
    với hệ thống mệnh giá cho trước.

    - Đầu vào:
        • Một số nguyên dương n (1 ≤ n ≤ 10^6) – số tiền cần đổi.
        • Các mệnh giá tiền có sẵn: 1, 2, 5, 10, 20, 50, 100, 200, 500.

    - Yêu cầu:
        • Sử dụng thuật toán tham lam (Greedy) để chọn mệnh giá lớn nhất có thể ở mỗi bước.
        • Tính và in ra số tờ tiền ít nhất cần thiết để đổi đúng số tiền n.

    - Đầu ra:
        • Một số nguyên duy nhất – số tờ tiền ít nhất.

    - Ví dụ:
        Input:
        121
        Output:
        3
        Giải thích: 121 = 100 + 20 + 1 → cần 3 tờ tiền.

        Input:
        1000
        Output:
        2
        Giải thích: 1000 = 500 + 500 → cần 2 tờ tiền.
*/

int main(){
	int n;
	cin >> n;
	int menhGia[] = {1, 2, 5, 10, 20, 50, 100, 200, 500};
	int ans = 0;
	for(int i = 8; i >= 0; i--){
		ans += n/menhGia[i];
		n %= menhGia[i];
	}
	cout << ans << endl;
}
