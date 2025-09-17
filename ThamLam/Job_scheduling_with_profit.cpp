#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

/*
Bài toán: Lập lịch công việc để tối đa hóa lợi nhuận (Job Sequencing Problem)

Cho N công việc. Mỗi công việc được biểu diễn bởi bộ 3 số nguyên dương:
- JobID: mã công việc
- Deadline: thời hạn kết thúc công việc (đơn vị: thời gian)
- Profit: lợi nhuận nếu công việc được hoàn thành đúng hạn

Quy tắc thực hiện:
- Mỗi công việc mất đúng 1 đơn vị thời gian để thực hiện.
- Một công việc chỉ được thực hiện nếu nó hoàn thành trước hoặc đúng deadline.
- Tại một thời điểm chỉ được thực hiện 1 công việc.

Yêu cầu: 
Xác định tập hợp công việc cần thực hiện để tổng lợi nhuận đạt lớn nhất.

Input format:
- Dòng 1: số nguyên dương N (số lượng công việc).
- N dòng tiếp theo: mỗi dòng gồm 3 số nguyên id, deadline, profit.

Constraints:
- 1 <= N <= 10^5
- 1 <= JobID <= N
- 1 <= Deadline <= N
- 1 <= Profit <= 1000

Output format:
- In ra lợi nhuận lớn nhất có thể đạt được.

Ví dụ:
Input:
4
1 2 20
2 1 10
3 1 40
4 1 30

Output:
60
*/

struct job{
	int id, deadline, profit;
};

bool cmp(job a, job b){
	if(a.profit != b.profit){
		return a.profit > b.profit;
	}
	else{
		return a.deadline < b.deadline;
	}
}

int used[100005];

int main(){
	int n;
	cin >> n;
	job a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i].id >> a[i].deadline >> a[i].profit;
	}
	sort(a, a+n, cmp);
	ll ans = 0;
	for(int i = 0; i < n; i++){
		int j = a[i].deadline;
		while(j > 0 && used[j]){
			j--;
		}
		if(j > 0){
			ans += a[i].profit;
			used[j] = 1;
		}
	}
	cout << ans << endl;
}
