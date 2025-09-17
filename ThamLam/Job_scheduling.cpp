#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

/*
Bài toán: Lập lịch

Bạn được giao N công việc, mỗi công việc có thời điểm bắt đầu và kết thúc.
Một công việc chỉ có thể được thực hiện nếu nó không trùng lặp với bất kỳ 
công việc nào khác đã chọn trước đó. 

Nhiệm vụ: Chọn ra số lượng công việc nhiều nhất có thể thực hiện, 
sao cho không có hai công việc nào chồng lấn thời gian.

Input:
- Dòng 1: số nguyên dương N – số lượng công việc.
- N dòng tiếp theo: mỗi dòng gồm 2 số nguyên start, end – 
  thời điểm bắt đầu và kết thúc của một công việc.

Constraints:
- 1 ≤ N ≤ 10^5
- 0 ≤ start < end ≤ 10^9

Output:
- In ra số lượng công việc nhiều nhất có thể chọn.

Ví dụ:
Input:
6
1 2
3 4
0 6
5 7
8 9
5 9

Output:
4
*/

bool cmp(pair<int, int> a, pair<int, int> b){
	return a.second < b.second;
}

int main(){	
	int n;
	cin >> n;
	pair<int, int> a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i].first >> a[i].second;
	}
	sort(a, a+n, cmp);
	int cnt = 0, last = 0;
	for(int i = 0; i < n; i++){
		if(a[i].first > last){
			cnt++;
			last = a[i].second;
		}
	}
	cout << cnt << endl;
}
