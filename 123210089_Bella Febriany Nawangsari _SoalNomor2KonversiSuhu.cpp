#include <iostream>
using namespace std;

int main ()
{
	float celcius,fahrenheit,kelvin,reamur;
	
	cout<<"Konversi Suhu dari Derajat Celcius"<<endl;
	cout<<endl;
	
	cout<<"Suhu Celcius :";
	cin>>celcius;
	
	//Rumus Konversi suhu//
	fahrenheit = (celcius*9/5)+32;
	kelvin = 273 + celcius;
	reamur = (celcius*4/9)+32;
	
	
	cout<<"Suhu Fahrenheit :"<<fahrenheit<<endl;
	cout<<"Suhu Kelvin :"<<kelvin<<endl;
	cout<<"Suhu Reamur :"<<reamur<<endl;
	cout<<endl;
	
	cout<<"Program Selesai"<<endl;
}	
