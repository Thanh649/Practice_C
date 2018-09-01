//#include <iostream>
//#include <conio.h>
//using namespace std;
//
//struct phanso{
//	int tuso;
//	int mauso;
//};
//
//phanso toigianps(phanso ps){
//	phanso pstg;
//	if(ps.tuso > ps.mauso){
//		for(int i=ps.mauso; i>0; i--){
//			if(ps.tuso%i==0 && ps.mauso%i==0){
//				pstg.tuso = ps.tuso/i;
//				pstg.mauso = ps.mauso/i;
//				return pstg;
//			}
//		}
//	}
//	else{
//		for(int i=ps.tuso; i>0; i--){
//			if(ps.tuso%i==0 && ps.mauso%i==0){
//				pstg.tuso = ps.tuso/i;
//				pstg.mauso = ps.mauso/i;
//				return pstg;
//			}
//		}
//	}
//}
//
//phanso sum(phanso ps1, phanso ps2){
//	phanso ketqua = {ps1.tuso*ps2.mauso + ps1.mauso*ps2.tuso, ps1.mauso*ps2.mauso};
//	return ketqua;
//}
//
//int main(){
//	phanso f[2];
//	for(int i=0; i<2; i++){
//		cout<<"nhap tu so "<<i+1<<": ";
//		cin>>f[i].tuso;
//		cout<<"nhap mau so "<<i+1<<": ";
//		cin>>f[i].mauso;
//		f[i] = toigianps(f[i]);
//		cout<<endl;
//	}
//	cout<<"tong 2 phan so la: "<<sum(f[0], f[1]).tuso<<"/"<<sum(f[0],f[1]).mauso<<endl;
//	getch();
//}