#include <iostream>
#include <math.h>

using namespace std;
int main(){
	float x1,x2,y1,y2,A,B,AB;
	AB=0;
	cout<<"Menghitung Jarak AB"<<endl;
	cout<<"Masukkan nilai x1: ";cin>>x1;
	cout<<"Masukkan nilai x2: ";cin>>x2;
	cout<<"Masukkan nilai y1: ";cin>>y1;
	cout<<"Masukkan nilai y2: ";cin>>y2;
	
	A=(x2-x1)*(x2-x1);
	B=(y2-y1)*(y2-y1);
	AB=sqrt(A+B);
	cout<<endl;
	cout<<"Jarak AB "<<AB<<endl;
	cout<<endl;
	return 0;
}
