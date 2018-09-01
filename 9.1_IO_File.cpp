//#include <iostream>
//#include <fstream>
//#include <conio.h>
//using namespace std;
//
//int main(){
//	char c, u;
//	char line[255];
//	//Doc file (ios::in)
//	ifstream fi("D:/Practice_C/Practice_basic/Practice_basic/abc");
//	if(fi.fail()){
//		cout<<"Fail to open FileInput"<<endl;
//		getch();
//		return 0;
//	}
//	cout<<"Doc fileInput lan 1:"<<endl;
//	while(fi.eof()==0){
//		fi.get(c);
//		cout<<c;
//	}
//	cout<<endl;
//	fi.close();
//
//	//ghi text moi vao fileInput (ios::out)
//	ofstream fo("D:/Practice_C/Practice_basic/Practice_basic/abc");
//	if(fo.fail()){
//		cout<<"Fail to open File"<<endl;
//		getch();
//		return 0;
//	}
//	cout<<"Ghi text moi vao file : "<<endl;
//	cin.getline(line, 255);
//	fo<<line;
//	fo.close();
//
//	//Doc file
//	fi.open("D:/Practice_C/Practice_basic/Practice_basic/abc");
//	if(fi.fail()){
//		cout<<"Fail to open FileInput"<<endl;
//		getch();
//		return 0;
//	}
//	cout<<"Doc file lan 2:"<<endl;
//	while(fi.eof()==0){
//		fi.get(c);
//		cout<<c;
//	}
//	cout<<endl;
//	fi.close();
//
//	//Ghi them text vao file (ios::app)
//	fo.open("D:/Practice_C/Practice_basic/Practice_basic/abc", ios::app);
//	if(fo.fail()){
//		cout<<"Fail to open File"<<endl;
//		getch();
//		return 0;
//	}
//	cout<<"Ghi them text vao file :" <<endl;
//	cin.getline(line, 255);
//	fo<<line;
//	fo.close();
//
//	//Doc file
//	fi.open("D:/Practice_C/Practice_basic/Practice_basic/abc");
//	if(fi.fail()){
//		cout<<"Fail to open FileInput"<<endl;
//		getch();
//		return 0;
//	}
//	cout<<"Doc file lan 3:"<<endl;
//	while(fi.eof()==0){
//		fi.get(c);
//		cout<<c;
//	}
//	cout<<endl;
//	fi.close();
//	getch();
//	return 0;
//}