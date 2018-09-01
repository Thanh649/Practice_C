//#include <iostream>
//#include <conio.h>
//using namespace std;
//
//class Box{
//private:
//	int length;
//	int width;
//	int height;
//
//public:
//	void setValue(int l, int w, int h){
//		length	= l;
//		width	= w;
//		height	= h;
//	}
//
//	int setVolume(){
//		return length * width * height;
//	}
//
//	Box operator+(Box obj){
//		Box box;
//		box.length	= this->height + obj.height;
//		box.width	= this->width + obj.width;
//		box.height	= this->height + obj.height;
//		return box;
//	}
//};
//
//void main(){
//	Box box1, box2, box3;
//	box1.setValue(1, 2, 3);
//	box2.setValue(3, 2, 1);
//	box3 = box1 + box2;
//	cout<<" Volume box1: "<<box1.setVolume()<<"\n";
//	cout<<" Volume box2: "<<box2.setVolume()<<"\n";
//	cout<<" Volume box3: "<<box3.setVolume()<<"\n";
//	getch();
//}