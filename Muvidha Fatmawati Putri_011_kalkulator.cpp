#include<conio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int bil1, bil2, pil;
	float hasil;
	string operasi;
	cout<<"\n\t==========PILIH OPERASI MATEMATIKA==========\n"<<endl;
	cout<<"\n\t 1. penjumlahan\n"<<endl;
	cout<<"\n\t 2. pengurangan\n"<<endl;
	cout<<"\n\t 3. perkalian\n"<<endl;
	cout<<"\n\t 4. pembagian\n"<<endl;
	cout<<"\n\t 5. modulus\n"<<endl;
	cout<<endl;
	
	cout<<"pilihan : ";cin>>pil;
	cout<<"bilangan pertama : ";cin>>bil1;
	cout<<"bilangan kedua : ";cin>>bil2;
	
	switch (pil)
	{
		case 1 : hasil=bil1+bil2;
		operasi='+';
		break;
		case 2 : hasil=bil1-bil2;
		operasi='-';
		break;
		case 3 : hasil=bil1*bil2;
		operasi='*';
		break;
		case 4 : hasil=bil1/bil2;
		operasi='/';
		break;
		case 5 : hasil=bil1%bil2;
		operasi='%';
		break;
		default : 
		cout<<"Salah masukkan operasi"<<endl;
	}
	cout<<"----------------------------------------"<<endl;
	cout<<""<<bil1<<operasi<<bil2<<"="<<hasil<<endl;
	cout<<"----------------------------------------"<<endl;
	getch();
}
