#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int tahun;
	cout<<"Tahun : ";cin>>tahun;
	if (tahun%400==0)
	{cout<<tahun<<"\n\t Tahun kabisat\n";
	}
	else if (tahun%100==0)
	{cout<<tahun<<"\n\t bukan Tahun kabisat\n";
	}
	else if (tahun%4==0)
	{cout<<tahun<<"\n\t Tahun kabisat\n";
	}
	else
	{
	cout<<tahun<<"\n\t Bukan tahun kabisat\n";
	}
	return 0;
}
