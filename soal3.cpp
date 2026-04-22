#include<iostream>
using namespace std;
int main(){
	
	//soal ketiga
	int n=5; //jumlah baris
	
	for (int a=1;a<=n;a++){
	int total =0;//ganti total menjadi 0 untuk setiap
	for (int b=1;b<=a;b++){
		int genap = b*2;//variable ganti genap && untuk rumus diganti dengan b*2 sajaa.
		total += genap;//variable ganit genap
		
	cout<<genap;//variable ganti genap
	
	if (b < a){
		cout<<" + ";//ganti menjadi +
	}else {
		cout<<" = ";
	}
}

	cout<<total<<endl;
}
	return 0;
}

