//#include <iostream>
//#include <conio.h>
//using namespace std;
//
//class sinhvien{
//public:
//	int msv;
//	void setMsv(){
//		cout<<"Nhap msv: ";
//		cin>>msv;
//	}
//
//	void getMsv(){
//		cout<<"Msv: "<< msv << endl;
//	}
//};
//
//class diemthi:virtual public sinhvien{
//public:
//	int d1, d2;
//	void setDiemthi(){
//		cout<<"Nhap diem thi 1: ";
//		cin>>d1;
//		cout<<"Nhap diem thi 2: ";
//		cin>>d2;
//	}
//
//	void getDiemthi(){
//		cout<<"Diem thi 1: "<<d1<<endl;
//		cout<<"Diem thi 2: "<<d2<<endl;
//	}
//};
//
//class diemtd:virtual public sinhvien{
//public:
//	int dtd;
//	void setDiemtd(){
//		cout<<"Nhap diem the duc: ";
//		cin>>dtd;
//		cout<<endl;
//	}
//
//	void getDiemtd(){
//		cout<<"Diem the duc: "<< dtd <<endl;
//	}
//};
//
//class ketqua:public diemthi, public diemtd{
//public:
//	int kq;
//	void getDisplay(){
//		kq = d1 + d2 + dtd;
//		getMsv();
//		getDiemthi();
//		getDiemtd();
//		cout<<"Tong diem: "<<kq<<endl;
//	}
//};
//
//int main(){
//	ketqua obj;
//	obj.setMsv();
//	obj.setDiemthi();
//	obj.setDiemtd();
//	obj.getDisplay();
//	getch();
//	return 0;
//}