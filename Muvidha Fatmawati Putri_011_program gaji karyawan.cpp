#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <string>

main()
{
first :
	using namespace std;
	string nik, jwb ;
char nama [100];
int jenis_kelamin, status, kendaraan;
long double gaji_pokok, uang_makan, tunjangan, transport, gaji_kotor, pajak, gaji_bersih;

	cout<<"\n\t PROGRAM GAJI KARYAWAN\n ";	
	cout<<"\n\t=====================================================================";
	cout<<"\n\t Nama : ";gets (nama);
	cout<<"\n\t NIK : ";cin>>nik;
	cout<<"\n\t ====================================================================";
	cout<<"\n\t [0 = laki laki, 1 = perempuan]";
	cout<<"\n\t Jenis kelamin : ";cin>>jenis_kelamin;
	cout<<"\n\t --------------------------------------------------------------------";
	cout<<"\n\t [0 = single, 1 = menikah]";
	cout<<"\n\t Status pernikahan : ";cin>>status;
	cout<<"\n\t --------------------------------------------------------------------";
	cout<<"\n\t [0 = motor, 1 = mobil";
	cout<<"\n\t Kendaraan : ";cin>>kendaraan;
	cout<<"\n\t --------------------------------------------------------------------";
	cout<<"\n\t Gaji pokok : Rp ";cin>>gaji_pokok;
	cout<<"\n\t --------------------------------------------------------------------";
	cout<<"\n\t Uang makan : Rp ";cin>>uang_makan;
//tunjangan
if (jenis_kelamin== 0 && status==1)
{
	tunjangan = 500;
	cout<<"Tunjangan = "<<tunjangan<<endl;
}
else
{
	tunjangan = 0;
	cout<<"Tunjangan = "<<tunjangan<<endl;
}
//transport
if (kendaraan==1)
{
	transport = 1000;
	cout<<"Transport = "<<transport<<endl;
}
	else if (kendaraan==0)
{
	transport = 500;
	cout<<"Transport = "<<transport<<endl;
}
else 
{
	transport =0;
	cout<<"Transport = "<<transport<<endl;
}
	gaji_kotor=gaji_pokok+tunjangan+uang_makan+transport;
	cout<<"Gaji Kotor="<<gaji_pokok<<"+"<<tunjangan<<"+"<<uang_makan<<"+"<<transport<<"="<<gaji_kotor<<endl;	
	pajak=0.05*gaji_kotor;
	cout<<"Pajak="<<0.05<<"*"<<gaji_kotor<<"="<<pajak<<endl;
	
	gaji_bersih=gaji_kotor-pajak;
	cout<<"Gaji Bersih="<<gaji_kotor<<"-"<<pajak<<"="<<gaji_bersih<<endl;

    return 0;
}
