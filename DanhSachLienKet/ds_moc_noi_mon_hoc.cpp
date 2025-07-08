#include <bits/stdc++.h>
using namespace std;
/*
    Cho danh sách móc nối đơn lưu trữ thông tin về môn học, 
    mỗi môn học gồm các thông tin: mã môn, tên môn, số tín chỉ.

    Yêu cầu: Viết chương trình thực hiện:
    - Khai báo cấu trúc dữ liệu của danh sách.
    - Tạo một danh sách môn học có từ 5 phần tử trở lên, hiển thị danh sách sau khi tạo.
    - Nhập tên của một môn học, tìm môn học có tên vừa nhập trong danh sách, 
      hiển thị thông tin đầy đủ của môn học nếu tìm thấy.
    - Xóa môn học vừa tìm ở trên nếu việc tìm kiếm thành công, hiển thị danh sách nếu xóa.
    - Chèn thêm một môn học mới vào sau môn học thứ 3 trong danh sách, hiển thị danh sách.
*/

//Khai bao cau truc du lieu
struct MonHoc{
	char maMH[10];
	char tenMH[30];
	int soTinChi;
};
//Khai bao cau truc du lieu cua danh sach
struct Node{
	MonHoc infor;
	Node* next;	
};
typedef Node* Tro;
//Khoi tao danh sach rong
void Create(Tro &L){
	L = NULL;
}
//Kiem tra danh sach rong
int Empty(Tro L){
	return L == NULL;
}
//Ham tao
MonHoc Tao(const char maMH[10], const char tenMH[30], int soTinChi){
	MonHoc x;
	strcpy(x.maMH, maMH);
	strcpy(x.tenMH, tenMH);
	x.soTinChi = soTinChi;
	return x;
}
//Nhap danh sach Node
void Add(Tro &L, MonHoc x){
	Tro Q = L;
	Tro P = new Node;
	P->infor = x;
	P->next = NULL;
	if(Empty(L)){
		L = P;
	}
	else{
		while(Q->next != NULL){
			Q = Q->next;
		}
		Q->next = P;
	}
}
//Danh sach mon hoc
void DSMonHoc(Tro &L){
	Add(L, Tao("MH01", "Cau Truc", 3));
	Add(L, Tao("MH02", "OOP", 3));
	Add(L, Tao("MH03", "My Thuat", 2));
	Add(L, Tao("MH04", "Am Nhac", 2));
	Add(L, Tao("MH05", "Lich Su Dang", 2));
}
//Hien thi mon hoc
void HienThi(MonHoc x){
	cout << setw(10) << left << x.maMH;
	cout << setw(30) << left << x.tenMH;
	cout << setw(10) << left << x.soTinChi << endl;
}
//Hien thi danh sach mon hoc
void HienThiDS(Tro L){
	Tro Q;
	if(!Empty(L)){
		cout << setw(10) << left << "MaMonHoc";
		cout << setw(30) << left << "TenMonHoc";
		cout << setw(10) << left << "SoTinChi" << endl;
		Q = L;
		while(Q != NULL){
			HienThi(Q->infor);
			Q = Q->next;
		}
	}
	else{
		cout << "Danh sach rong !" << endl;
		return;
	}
}

//Tim kiem
Tro TimKiem(Tro L, char *ten){
	Tro Q = L;
	while(Q != NULL){
		if(strcmp(Q->infor.tenMH, ten) == 0){
			return Q;
		}
		Q = Q->next;
	}
	return NULL;
}
//Hien thi mon hoc
void HienThiTK(Tro L, char *ten){
	Tro Q = L;
	while(Q != NULL){
		if(strcmp(Q->infor.tenMH, ten) == 0){
			cout << "THONG TIN MON HOC:\n";
			HienThi(Q->infor);
		}
		Q = Q->next;
	}
}
//Ham xoa nut tro boi con tro T trong danh sach
void Remove(Tro &L, Tro T){
	Tro Q;
	if(T == L){
		L = T->next;
	}
	else{
		Q = L;
		while(Q->next != T){
			Q = Q->next;
		}
		Q->next = T->next;
	}
	delete T;
}
//Ham xoa mon hoc khi tim kiem
void XoaMonHoc(Tro &L, char *ten){
	Tro T = TimKiem(L, ten);
	if(T == NULL){
		return;
	}
	Remove(L, T);
	cout << "DANH SACH MON HOC SAU KHI XOA:\n";
	HienThiDS(L);
}
//Ham bo sung vao sau mot nut
void Insert(Tro &L, Tro Q, MonHoc x){
	Tro P;
	P = new (Node);
	P->infor = x;
	P->next = Q->next;
	Q->next = P;
}
//Chen mot mon hoc moi vao sau mon hoc thu 3
void BoSung(Tro &L){
	MonHoc x;
	cout << "\tNhap mon hoc bo sung" << endl;
	cout << "\tNhap ma mon: "; fflush(stdin);
	gets(x.maMH);
	cout << "\tNhap ten mon hoc: "; fflush(stdin);
	gets(x.tenMH);
	cout << "\tNhap so tin chi: ";
	cin >> x.soTinChi;
	Tro Q = L;
	int d = 1;
	while(d < 3){
		d++;
		Q = Q->next;
	}
	Insert(L, Q, x);
	cout << "DANH SACH MON HOC SAU KHI CHEN:\n";
	HienThiDS(L);
}

int main(){
	Tro L;
	Create(L);
	DSMonHoc(L);
	cout << "DANH SACH MON HOC:\n";
	HienThiDS(L);
	cout << "\tNhap ten mon hoc: ";
	MonHoc x;
	fflush(stdin);
	gets(x.tenMH);
	TimKiem(L, x.tenMH);
	HienThiTK(L, x.tenMH);
	XoaMonHoc(L, x.tenMH);
	BoSung(L);
}