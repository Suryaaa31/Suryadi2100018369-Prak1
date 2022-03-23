#include<iostream>
#include<conio.h>
#include "_hitung2.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
		Hitung X;
	cin>>X;
	X.hitung_jumlahnya();
	cout<<X;
	getch();

	return 0;
}
