




//soal kelima
#include<iostream>
using namespace std;
int main(){

int n=5; //jumlah baris
int totalSemua = 0;
	
	//loop luar untuk hitung mundur dari baris ke 5
	for (int d=5;d>=1;d--){
	int totalBaris =0;
	
	//loop dalam untuk mencetak angka genap, mulai dari d=5 karena angka genap terbesar adalah 10 (5*2)
	for (int k=5;k> (5-d);k--){//kenapa mulai dari 5? karena angka pertama yang diminta adalah 10 (5*2)
		int genap = k*2;
		totalBaris += genap;
		
	cout<<genap;
	
	if (k > (5-d+1)){
		cout<<" + ";
	}else {
		cout<<" = ";
	}
}
	cout<<totalBaris<<endl;
	totalSemua += totalBaris;
}
cout<<"------------ +"<<endl;
cout<<totalSemua<<endl;
	return 0;  
}
