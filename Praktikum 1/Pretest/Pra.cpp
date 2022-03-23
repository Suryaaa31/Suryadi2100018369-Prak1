#include <iostream>
#include <math.h>
using namespace std;

int tambah(int a, int b)
{
	int U=a+b;
	return U;
}
int kurang(int a, int b)
{
	int U=a-b;
	return U;
}
int kali(int a, int b)
{
	int U=a*b;
	return U;
}
float bagi(float a, float b)
{
	float U=a/b;
	return U;
}
float akar(float c)
{
	float U=sqrt(c);
	return U;
}
int pangkat(int a, int b)
{
	int U=pow(a,b);
	return U;
}
int main()
{
	int x, y, ta, ku, ka;
	float pa, ba,ak;
	string p;
	cout<<"Suryadi (2100018369)"<<endl;
	cout<<"M. Naufal Labib Ramadhan (2100018378)"<<endl;
	cout<<"Daffa Nauval Hadi Pratama (2100018388)"<<endl;
	cout<<"||	Menu\t\t||"<<endl;
	cout<<"||======================||"<<endl;
	cout<<"||1. Penjumlahan\t||"<<endl;
	cout<<"||2. Pengurangan\t||"<<endl;
	cout<<"||3. Perkalian\t\t||"<<endl;
	cout<<"||4. Pemabagian\t\t||"<<endl;
	cout<<"||5. Akar\t\t||"<<endl;
	cout<<"||6. Pangkat\t\t||"<<endl;
	
	cout<<endl;
	cout<<"Pilih menu: "; cin>>p;
	cout<<"Masukan bilangan pertama: "; cin>>x;
	
	ak=akar(x);
	if (p=="5"){
		cout<<"Akar dari "<<x<<" adalah "<<ak<<endl;
	}
	else{
		cout<<"Bilangan kedua: ";cin>>y;
	}
	
	ta=tambah(x,y);
	ku=kurang(x,y);
	ka=kali(x,y);
	ba=bagi(x,y);
	pa=pangkat(x,y);
	
	if(p=="1"){
		cout<<"Hasil "<<x<<" + "<<y<<" = "<<ta<<endl;
	}
	else if(p=="2"){
		cout<<"Hasil "<<x<<" - "<<y<<" = "<<ku<<endl;
	}
	else if(p=="3"){
		cout<<"Hasil "<<x<<" * "<<y<<" = "<<ka<<endl;
	}
	else if(p=="4"){
		cout<<"Hasil "<<x<<" : "<<y<<" = "<<ba<<endl;
	}
	else if (p=="6"){
		cout<<"Hasil "<<x<<" ^ "<<y<<" = "<<pa<<endl;
	}
	return 0;
}
