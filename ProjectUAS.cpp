#include <iostream>
#include <conio.h>
using namespace std;
//I Putu Wibina Karsa Gumi//
//17.11.1614//
class Transaksi{
	public:
		int rek, uang, total, jumlah;
		int pajak;
		string nama;
		int unqcode;
		void isi_rek(){
			cin>>rek;
		}
		
		void isi_nama(){
			cin>>nama;
		}
		
		void isi_uang(){
			cin>>uang;
		}
		void setUnqcode(int unqcode){
			code=unqcode;
		}
	protected:
		int code;
};

class BankBca : public Transaksi{
	public:
		int getPajak(int pajak){
			return (uang/14);
		}
		int getTotal(int total){
			return ((uang/14)+(uang));
		}
		void showpajak(){
			cout<<"\nPPN 14%"<<endl;
		}
};

class BankBri : public Transaksi{
	public:
		int getPajak(int pajak){
			return (uang/8);
		}
		int getTotal(int total){
			return ((uang/8)+(uang));
		}
		void showpajak(){
			cout<<"\nPPN 8%"<<endl;
		}
};

class BankBni : public Transaksi{
	public:
		int getPajak(int pajak){
			return (uang/10);
		}
		int getTotal(int total){
			return ((uang/10)+(uang));
		}
		void showpajak(){
			cout<<"\nPPN 10%"<<endl;
		}
};
int main(){
	int saldo=2000000;
	int pilih,pajak,total,first,exit;
	first:
	cout<<"-------------TRANSAKSI BANK AMIKOM-------------"<<endl;
	cout<<"1. BCA\n2. BRI\n3. BNI\n4. Keluar\n";
	cin>>pilih;
	system("cls");
	if(pilih==1){
		BankBca bca;
		bca.setUnqcode(014);
		cout<<"-------------TRANSAKSI BANK AMIKOM-------------"<<endl;
		cout<<"Rekening : "; bca.isi_rek();
		cout<<"Nama : ";bca.isi_nama();
		cout<<"Jumlah Pengiriman : ";bca.isi_uang();
		cout<<"\nPPN = "<<bca.getPajak(pajak); 
		cout<<"\nBiaya Transasksi = "<<bca.getTotal(total);
		bca.showpajak();
		goto first;
	}
	else if(pilih==2){
		BankBri bri;
		bri.setUnqcode(012);
		cout<<"-------------TRANSAKSI BANK AMIKOM-------------"<<endl;
		cout<<"Rekening : "; bri.isi_rek();
		cout<<"Nama : ";bri.isi_nama();
		cout<<"Jumlah Pengiriman : ";bri.isi_uang();
		cout<<"\nPPN = "<<bri.getPajak(pajak); 
		cout<<"\nBiaya Transasksi = "<<bri.getTotal(total);
		bri.showpajak();
		goto first;
	}
	else if(pilih==3){
		BankBni bni;
		bni.setUnqcode(011);
		cout<<"-------------TRANSAKSI BANK AMIKOM-------------"<<endl;
		cout<<"Rekening : "; bni.isi_rek();
		cout<<"Nama : ";bni.isi_nama();
		cout<<"Jumlah Pengiriman : ";bni.isi_uang();
		cout<<"\nPPN = "<<bni.getPajak(pajak); 
		cout<<"\nBiaya Transasksi = "<<bni.getTotal(total);
		bni.showpajak();
		goto first;
	}
	else{
		goto exit;
	}
	exit:
	getch();
}













