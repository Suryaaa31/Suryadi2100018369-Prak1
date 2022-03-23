//Suryadi (2100018369)
//M Naufal Labib Ramadhan (2100018378)
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	char pembelian;
	int kode, porsi, jumlah, banyak;
	long int total,diskon,akhir, bayar, harga,duit,kembalian;
	atas:
	
	cout<<" ======================MENU MAKANAN======================="<<endl;
	cout<<" 1. Ayam Bakar"<<endl;
	cout<<" 2. Ayam Goreng"<<endl;
	cout<<"Jumlah Menu Yang Dipesan = ";
	cin>>banyak;
	jumlah=1;
	bayar=0;
	for(jumlah=1;jumlah<=banyak;jumlah++){
	ulang:cout<<" Masukan Kode Menu = ";
	cin>>kode;
	if (kode==1)
	{
		cout<<" Nama Makanan = Ayam Bakar"<<endl;
		cout<<" Harga        = Rp. 17.000,-"<<endl;
		cout<<" Jumlah Porsi = ";cin>>porsi;
		harga=17000;
		total=harga*porsi;
		cout<<" Total Harga  = Rp"<<total;
		cout<<endl;
	}
	else if (kode==2)
	{
		cout<<" Nama Makanan = Ayam Goreng"<<endl;
		cout<<" Harga        = Rp. 21.000,-"<<endl;
		cout<<" Jumlah Porsi = "; cin>>porsi;
		harga=21000;
		total=harga*porsi;
		cout<<" Total Harga  = Rp"<<total;
		cout<<endl;
	}
	else
	{
		cout<<"-Invalid Number-a";
		goto ulang;
	}
		bayar=bayar+total;
	}
		cout<<"Total Bayar          = Rp"<<bayar<<",-"<<endl;
		cout<<"Masukan Pembayaran   = Rp";cin>>duit;
		if(bayar>45000){
		diskon = bayar*0.10; 
		cout<<"";
	}
	else {
	diskon = 0;
	}
	akhir=bayar-diskon;
	kembalian=duit-akhir;
	cout<<"Kamu Dapat Diskon 10% = Rp"<<diskon<<",-"<<endl;
	cout<<"Cash Back             = Rp"<<kembalian<<",-"<<endl;
	cout<<"=========TERIMAKASIH=========="<<endl;
	cout<<"Pembelian Baru [y/t] ";cin>>pembelian;
	if (pembelian=='y'||pembelian=='Y')
	goto atas;
	else
	
	return 0;
	}
