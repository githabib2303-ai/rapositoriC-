#include<iostream>
using namespace std;
int main(){
//soal pertama & kedua
	int total =0;
	int bilangan;
	
	cout<<"total angka genap :\n";
	for (int a=1;a<=10;a++){
	bilangan =a*2; 
	total += bilangan;
	
	cout<<bilangan;
	
	if (a < 10){
		cout<<" + ";
	}else {
		cout<<" = ";
	}
}
	cout<<total<<endl;
	return 0;
}
