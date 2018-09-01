//#include<iostream>
//#include<conio.h>
//#include<ctime>
//using namespace std;
//
//int *findMax(int arr[], int size){
//	int *max = arr;
//	cout<<"dia chi dau tien: "<< max << endl;
//	for(int i = 1; i < size; i++)
//		if(*max < *(max + i))
//			max = (max + i);
//	cout<<"dia chi cuoi cung: "<< max << endl;
//	return max;
//}
//
//int main(){
//	int n, *p;
//	cout<<" Nhap size: ";
//	cin >> n;
//	int arr[10000];
//	for(int i = 0 ; i < n; i++)
//		cin>>arr[i];
//	p = findMax(arr, n);
//	cout<<" Max la: " << *p <<endl;
//	getch();
//	return 0;
//}