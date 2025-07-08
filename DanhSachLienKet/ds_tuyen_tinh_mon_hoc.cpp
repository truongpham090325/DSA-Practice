#include <bits/stdc++.h>
using namespace std;
#define max 100
/*
    Cho danh sách lưu trữ kế tiếp lưu trữ thông tin về môn học, 
    mỗi môn học gồm các thông tin: mã môn, tên môn, số tín chỉ.

    Yêu cầu: Viết chương trình thực hiện:
    - Khai báo cấu trúc dữ liệu của danh sách.
    - Tạo một danh sách môn học có từ 5 phần tử trở lên, hiển thị danh sách sau khi tạo.
    - Nhập tên của một môn học, tìm môn học có tên vừa nhập trong danh sách, 
      hiển thị thông tin đầy đủ của môn học nếu tìm thấy.
    - Xóa môn học vừa tìm ở trên nếu việc tìm kiếm thành công, hiển thị danh sách nếu xóa.
    - Chèn thêm một môn học mới vào sau môn học thứ 3 trong danh sách, hiển thị danh sách.
*/

//Khai bao cau truc du lieu mon hoc
struct MonHoc{
	char maMH[10];
	char tenMH[30];
	int soTinChi;	
};
//Khai bao cau truc du lieu danh sach
struct List{
	int count;
	MonHoc E[max];
};
List L;
//Khoi tao danh sach rong
void Create(List &L){
	L.count = -1;
}
//Kiem tra danh sach rong
int Empty(List L){
	return L.count == -1;
}
//Kiem tra danh sach day
int Full(List L){
	return L.count == max-1;
}
//Ham tao
MonHoc TaoMH(const char *maMH, const char *tenMH, int soTinChi){
	MonHoc x;
	strcpy(x.maMH, maMH);
	strcpy(x.tenMH, tenMH);
	x.soTinChi = soTinChi;
	return x;
}
//Them mon hoc vao cuoi danh sach
int Add(List &L, MonHoc x){
	if(Full(L)){
		cout << "Danh sach day" << endl;
		return 0;
	}
	else{
		L.count++;
		L.E[L.count] = x;
		return 1;
	}
}
//Khoi tao danh sach gom 5 phan tu
void KhoiTao(List &L){
	Add(L, TaoMH("MH01", "OOP", 3));
	Add(L, TaoMH("MH02", "Cau Truc", 3));
	Add(L, TaoMH("MH03", "My Thuat", 2));
	Add(L, TaoMH("MH04", "Phap Luat", 2));
	Add(L, TaoMH("MH05", "Am Nhac", 2));
}
//Hien thi tung phan tu
void HienThi(MonHoc x){
	cout << fixed;
	cout << setw(7) << left << x.maMH;
	cout << setw(25) << left << x.tenMH;
	cout << setw(8) << left << x.soTinChi << endl;
}
//Hien thi danh sach
void HienThiDS(List L){
	if(Empty(L)){
		cout << "Danh sach rong !" << endl;
	}
	else{
		cout << setw(10) << left << "MaMH";
		cout << setw(17) << left << "TenMH";
		cout << setw(5) << left << "SoTinChi" << endl;
		for(int i = 0; i <= L.count; i++){
			HienThi(L.E[i]);
		}
	}
}
//Xoa phan tu dau tien trong danh sach
void XoaDau(List &L){
	if(Empty(L)){
		return;
	}
	else{
		for(int i = 1; i <= L.count; i++){
			L.E[i-1] = L.E[i]; 
		}
		L.count--;
	}
}
//Xoa o vi tri thu k
void Remove(int k, List &L){
	for(int i = k; i < L.count; i++){
		L.E[i] = L.E[i+1];
	}
	L.count--;
}

//Tim Kiem va xoa
void TimKiemVaXoa(List L){
	int index = -1;
	MonHoc x;
	cout << "\tNhap ten: ";
	fflush(stdin);
	gets(x.tenMH);
	for(int i = 0; i <= L.count; i++){
		if(strcmp(x.tenMH, L.E[i].tenMH) == 0){
			cout << "THONG TIN MON HOC:\n";
			HienThi(L.E[i]);
			index = i;
		}
	}
	if(index == -1){
		cout << "KHONG TIM THAY THONG TIN !" << endl;
		return;
	}
	else if(index == 0){
		XoaDau(L);
		cout << "DANH SACH MON HOC SAU KHI XOA:\n";
		HienThiDS(L);
	}
	else{
		Remove(index, L);
		cout << "DANH SACH MON HOC SAU KHI XOA:\n";
		HienThiDS(L);
	}
}
//Them mot mon hoc vao sau mon hoc thu 3 trong danh sach
int Insert(List &L){
	MonHoc x;
	if(!Full(L)){
		cout << "Nhap mon hoc can bo sung\n";
		cout << "\tNhap ma mon hoc: "; fflush(stdin);
		gets(x.maMH);
		cout << "\tNhap ten mon hoc: "; fflush(stdin);
		gets(x.tenMH);
		cout << "\tNhap so tin chi: ";
		cin >> x.soTinChi;
		for(int i = L.count; i >= 3; i--){
			L.E[i+1] = L.E[i];
		}
		L.count = L.count+1;
		L.E[3] = x;
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	Create(L);
	KhoiTao(L);
	cout << "DANH SACH MON HOC: \n";
	HienThiDS(L);
	TimKiemVaXoa(L);
	Insert(L);
	cout << "DANH SACH MON HOC SAU KHI CHEN:\n";
	HienThiDS(L);
}

