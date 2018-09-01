//#include <iostream>
//#include <conio.h>
//#include <cstdlib>
//#include <iomanip>
//using namespace std;
//
//struct student{
//	char id[10];
//	char fullname[100];
//	char sex[10];
//	int sc1, sc2, sc3, sc4;
//	int totalsc;
//};
//
//void menu(){
//	system("cls");
//	cout<<"==============================================="<<endl;
//	cout<<"--------------------MENU-----------------------"<<endl;
//	cout<<"<1>- Them thong tin sinh vien "<<endl;
//	cout<<"<2>- Xoa thong tin sinh vien "<<endl;
//	cout<<"<3>- Xem danh sach sinh vien "<<endl;
//	cout<<"<4>- Tim thong tin sinh vien"<<endl;
//	cout<<"<5>- Cap nhat thong tin sinh vien"<<endl;
//}
//
//int searchStd(student std[], int index, char ids[]){
//	for(int i=1; i<index; i++)
//		if(strcmp(std[i].id, ids) == 0)
//			return i;
//	return -1;
//}
//
//void addStudent(student std[], int &index){
//	index++;
//	system("cls");
//	cout<<"Nhap msv: ";
//	cin.ignore();
//	cin.getline(std[index].id,100);
//    while(searchStd(std, index, std[index].id) != -1){
//		system("cls");
//		cout<<"Msv da ton tai"<<endl;
//		cout<<"Nhap lai msv: ";
//		cin>>std[index].id;
//	}
//	cout<<"Nhap ten sv: ";
//	cin.getline(std[index].fullname, 100);
//	cout<<"Nhap gioi tinh<nam-M, nu-F>:";
//	cin>>std[index].sex;
//	cout<<"Nhap diem 1: ";
//	cin>>std[index].sc1;
//	cout<<"Nhap diem 2: ";
//	cin>>std[index].sc2;
//	cout<<"Nhap diem 3: ";
//	cin>>std[index].sc3;
//	cout<<"Nhap diem 4: ";
//	cin>>std[index].sc4;
//}
//
//void clean(student std[], int &index){
//	std[index].sc1 = 0;
//	std[index].sc2 = 0;
//	std[index].sc3 = 0;
//	std[index].sc4 = 0;
//	std[index].totalsc = 0;
//	strcpy(std[index].fullname, "");
//	strcpy(std[index].id, "");
//	strcpy(std[index].sex, "");
//	index--;
//}
////xoa thong tin sinh vien
//void delStd(student std[], int &index){
//	system("cls");
//	if(index>0){
//		char msv[10];
//		cout<<"Nhap msv muon xoa: ";
//		cin>>msv;
//		if(searchStd(std, index + 1, msv) != -1){
//			int numdel=searchStd(std, index, msv);
//		//xoa sv cuoi ds
//			if(numdel==index)
//				clean(std, index);
//		//xoa sv o dau hoac giua ds
//			else{
//				for(int i=numdel; i<index; i++)
//					std[i]=std[i+1];
//				clean(std, index);
//			}
//		}
//		else
//			cout<<"msv khong co trong danh sach"<<endl;
//	}
//	else
//		cout<<"Danh sach rong"<<endl;
//}
//
//void view(student std[], int index){
//	int tol;
//	system("cls");
//	if(index>0){
//	cout<<left<<setw(5)<<"ID"<<setw(20)<<"TEN"<<setw(12)<<"GIOI TINH"<<setw(5)<<"D1"<<setw(5)<<"D2"<<setw(5)<<"D3"<<setw(5)<<"D4"<<setw(5)<<"TONG"<<endl;
//	for(int i=1; i<=index; i++){
//		tol = std[i].sc1 + std[i].sc2 + std[i].sc3 + std[i].sc4;
//		cout<<left<<setw(5)<<std[i].id<<setw(20)<<std[i].fullname<<setw(12)<<std[i].sex<<setw(5)<<std[i].sc1<<setw(5)<<std[i].sc2<<setw(5)<<std[i].sc3<<setw(5)<<std[i].sc4<<setw(5)<<tol<<endl;
//	}
//	
//	}else
//		cout<<"Danh sach rong"<<endl;
//	cout<<"Enter de thoat..."<<endl;
//	getch();
//}
//
//void searchInfo(student Std[], int index){
//	system("cls");
//	char msv[10];
//	int i, tol;
//	if(index > 0){
//		cout<<"Nhap ma sinh vien can tim: ";
//		cin>>msv;
//		if(searchStd(Std, index+1, msv) != -1){
//			i = searchStd(Std, index+1, msv);
//			tol = Std[i].sc1 + Std[i].sc2 + Std[i].sc3 + Std[i].sc4;
//			cout<<left<<setw(5)<<"ID"<<setw(20)<<"TEN"<<setw(12)<<"GIOI TINH"<<setw(5)<<"D1"<<setw(5)<<"D2"<<setw(5)<<"D3"<<setw(5)<<"D4"<<setw(5)<<"TONG"<<endl;
//			cout<<left<<setw(5)<<Std[i].id<<setw(20)<<Std[i].fullname<<setw(12)<<Std[i].sex<<setw(5)<<Std[i].sc1<<setw(5)<<Std[i].sc2<<setw(5)<<Std[i].sc3<<setw(5)<<Std[i].sc4<<setw(5)<<tol<<endl;
//		}
//		else
//			cout<<"Ma sinh vien khong co trong danh sach"<<endl;
//	}
//	else
//		cout<<"Danh sach rong"<<endl;
//}
//
//void updateStd(student std[], int index){
//	system("cls");
//	char msv[10];
//	int i;
//	if(index > 0){
//		cout<<"Nhap ma sinh vien can cap nhat: ";
//		cin>>msv;
//		if(searchStd(std, index+1, msv) != -1){
//			i = searchStd(std, index + 1, msv);
//			clean(std, i);
//			cout<<"Nhap ten sv: ";
//			cin.getline(std[index].fullname, 100);
//			cout<<"Nhap gioi tinh<nam-M, nu-F>:";
//			cin>>std[i].sex;
//			cout<<"Nhap diem 1: ";
//			cin>>std[i].sc1;
//			cout<<"Nhap diem 2: ";
//			cin>>std[i].sc2;
//			cout<<"Nhap diem 3: ";
//			cin>>std[i].sc3;
//			cout<<"Nhap diem 4: ";
//			cin>>std[i].sc4;
//		}
//		else
//			cout<<"Ma sinh vien khong co trong danh sach"<<endl;
//	}
//	else
//		cout<<"Danh sach rong"<<endl;
//	getch();
//}
//
//student st[100];
//int index = 0;
//int main(){
//	int opt;
//	char Yn;
//	do{
//	menu();
//	cout<<"Nhap lua chon<1-5>: ";
//	cin>>opt;
//	switch(opt){
//	case 1:
//		char Yn1;
//		do{
//		addStudent(st, index);
//		cout<<"Ban muon nhap them sv khong<Y/N>: ";
//		cin>>Yn1;
//		}while(Yn1 == 'Y'|| Yn1 == 'y');
//		main();
//		break;
//	case 2:
//		char Yn2;
//		do{
//		delStd(st, index);
//		cout<<"Ban muon xoa them sv khong<Y/N>: ";
//		cin>>Yn2;
//		}while(Yn2 == 'Y'|| Yn2 == 'y');
//		main();
//		break;
//	case 3:
//		view(st, index);
//		main();
//		break;
//	case 4:
//		char Yn4;
//		do{
//		searchInfo(st, index);
//		cout<<"Ban muon tim kiem sinh vien khac khong<Y/N>: ";
//		cin>>Yn4;
//		}while(Yn4 == 'Y' || Yn4 == 'y');
//		main();
//		break;
//	case 5:
//		char Yn5;
//		do{
//		updateStd(st, index);
//		cout<<"Ban muon cap nhat sinh vien khac khong<Y/N> ";
//		cin>>Yn5;
//		}while(Yn5 == 'Y' || Yn5 == 'y');
//		main();
//		break;
//	}
//	cout<<endl;
//	cout<<"Ban muon tiep tuc khong<Y/N>: ";
//	cin>>Yn;
//	}while(Yn == 'Y' || Yn=='y');
//	return 0;
//}