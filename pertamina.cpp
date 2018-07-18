#include <iostream>
using namespace std;

class Pertamina {
	public:
		float premium(int liter) {
		return liter*6000;
		};
		
		float pertalite(int liter){
		return liter*7000; 
		};
		
		float pertamax(int liter){
		return liter*8500;
		};
		
		float solar(int liter){
		return liter*5500;
		};
};

int main(){
int opsi;
int liter;
int bayar;
Pertamina pertamina;
cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
cout<<"|                          Pertamina                          |"<<endl;
cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
cout<<"[1]. Premium\tRp.6000/l \n[2]. Pertalite\tRp.7000/l \n[3]. Pertamax\tRp.8500/l \n[4]. Bio Solar\tRp.5500/l"<<endl;
cout<<"\nPilihan Menu\t:"; cin>>opsi;
cout<<"==============================================================="<<endl;

if(opsi>4){
	cout<<"\nMaaf pilihan anda tidak tersedia";
}

switch (opsi){
	case 1 :
		cout<<"\n\n";
		cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<"|                             Kasir                           |"<<endl;
		cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<"Masukkan Jumlah Liter :  "; cin>>liter;
		cout<<"Total Harga = "<<pertamina.premium(liter)<<endl;
		cout<<"Bayar : "; cin>>bayar;
		cout<<"Total Kembalian : "<<bayar-pertamina.premium(liter);
		cout<<"\n\n######################### Terimakasih #########################";
	break; 
	
	case 2 :
		cout<<"\n\n";
		cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<"|                             Kasir                           |"<<endl;
		cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<"Masukkan Jumlah Liter : "; cin>>liter;
		cout<<"Total Harga = "<<pertamina.pertalite(liter)<<endl;
		cout<<"Bayar : "; cin>>bayar;
		cout<<"Total Kembalian : "<<bayar-pertamina.premium(liter);
		cout<<"\n\n######################### Terimakasih #########################";
	break;
	
	case 3 :
		cout<<"\n\n";
		cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<"|                             Kasir                           |"<<endl;
		cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<"Masukkan Jumlah Liter: "; cin>>liter;
		cout<<"Total Harga = "<<pertamina.pertamax(liter)<<endl;
		cout<<"Bayar : "; cin>>bayar;
		cout<<"Total Kembalian : "<<bayar-pertamina.premium(liter);
		cout<<"\n\n######################### Terimakasih #########################";
	break;
	
	case 4 :
		cout<<"\n\n";
		cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<"|                             Kasir                           |"<<endl;
		cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<"Masukkan Jumlah Liter : "; cin>>liter;
		cout<<"Total Harga = "<<pertamina.solar(liter)<<endl;
		cout<<"Bayar : "; cin>>bayar;
		cout<<"Total Kembalian : "<<bayar-pertamina.premium(liter);
		cout<<"\n\n######################### Terimakasih #########################";
	break;
}
return 0;
}
