#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	string nama, nim, plug;
	
	cout<<"Masukkan :"<<endl;
	cout<<"Nama :";
	getline(cin, nama);
	cout<<"NIM :";
	getline (cin, nim);
	cout<<"Plug :";
	getline(cin,plug);
	cout<<endl;
	
	cout<<"Inilah Data Anda :"<<endl;
	cout<<"Nama :"<<nama<<endl;
	cout<<"NIM :"<<nim<<endl;
	cout<<"Plug :"<<plug<<endl; 
	cout<<endl;
	
	cout<<"Dalam bentuk Tabel:"<<endl;
	
	cout<<setw(55)<<setfill('=')<<""<<endl;
	cout<<setw(12)<<setfill(' ')<<"NIM"<<"|";
	cout<<setw(30)<<setfill(' ')<<"Nama"<<"|";
	cout<<setw(10)<<setfill(' ')<<"Plug"<<"|"<<endl;
	
	cout<<setw(55)<<setfill('=')<<""<<endl;
	cout<<setw(12)<<setfill(' ')<<nim<<"|";
	cout<<setw(30)<<setfill(' ')<<nama.substr(0,30)<<"|";
	cout<<setw(10)<<setfill(' ')<<plug<<"|"<<endl;
	
	cout<<setw(55)<<setfill('-')<<""<<endl;
	
}
