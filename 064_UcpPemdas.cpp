//1. a. class Mahasiswa{
//		public:
//			string nama;
// };
//	 b. class Mahasiswa{
//		public:
// 			int umur;
// };
//   c. class BangunDatar{
//		privat:
//			float panjang lebar;
// };
// 
//2. Perkondisian While:
// int main(){
//	char pilihan;
//	
//	do{
//		cout << "Berangkat beli makanan" << endl;
//		cout << "Memesan makanan" << endl;
//		cout << "Makanan datang" << endl;
//		cout << "Apakah mau memesan lagi?" << endl;
//		cin >> pilihan;
//	}while(pilihan == 'y' || pilihan == 'Y');
// }
// 
//3.Implementasi Struct:
// struct DetailAlamat {
// string desa;
// string kota;
// };
// 
// struct Mahasiswa {
//		string nim;
//		string nama;
//	DetailAlamat alamat;	
//		string umur;
// 
// int main() {
//		Mahasiswa mhs[3];
//		for (int i = 0; i < 3; i++) {
//			cout << "Data ke- " << (i + 1) << ":" << endl;
//			cout << "Nomor Mahasiswa : ";	
//			cin >> mhs[i].nim;	
//			cout << "Nama Mahasiswa : ";
//			cin >> mhs[i].nama;
// 
//		cout << "Alamat Mahasiswa : " << endl;
//		cout << "\t Nama Desa : ";
//		cin >> mhs[i].alamat.desa;
//		cout << "\t Nama Kota : ";
//		cin >> mhs[i].alamat.kota;
//		cout << "Umur Mahasiswa : ";
//		cin >> mhs[i].umur;
//		cin.ignore(1, '\n');
//		cout << endl;
// }
// 
// for (int i = 0; i < 3; i++) {
//		cout << endl;	
//		cout << "Data Mahasiswa ke- " << (i + 1) << ":" << endl;
//		cout << "\n NIM : " << mhs[i].nim;
//		cout << "\n Nama : " << mhs[i].nama;
//		cout << "\n Alamat : ";
//		cout << "\n \t Desa : " << mhs[i].alamat.desa;
//		cout << "\n \t Kota : " << mhs[i].alamat.kota;	
//		cout << "\n Umur : " << mhs[i].umur;
//		cout << endl;
//	}
// 
// }
// 
//4.Implementasi Prosedur dan Fungsi:
// string nama;
// int nXpander, nPorche, nAvanza, nBrio, nLamborghini;
// int hXpander = 300, hPorche = 8000, hAvanza = 250, hBrio = 200, hLamborghini = 6000;
// 
// void input()
// {
// 
// cout << "Nama Pembeli : ";
// cin >> nama;
// cout << "Jumlah Xpander :";
// cin >> nXpander;
// 
// cout << "Jumlah Porche : ";
// cin >> nPorche;
// 
// cout << "Jumlah Avanza : ";
// cin >> nAvanza;
// 
// cout << "Jumlah Brio : ";
// cin >> nBrio;
// 
// cout << "Jumlah Lamborghini : ";
// cin >> nLamborghini;
// }
// 
// int TotalHarga()
// {
// return (nXpander * hXpander) + (nPorche * hPorche) + (nAvanza * hAvanza) + (nBrio * hBrio) + (nLamborghini * hLamborghini);
// }
// 
// void Display()
// {
// cout << "Total Harganya : " << TotalHarga() << endl;
// }
// 
// int main()
// {
//    char pilihan;
//    do{
//    input();
//    Display();
//	  cout << "Apakah ingin membeli kembali ? ";
//    cin >> pilihan;    
//    }while(pilihan == 'y'||pilihan == 'Y');
// }
//5.Implementasi Loopoing:
// struct DetailAlamat {
// string desa;
// string kota;
// };
// 
// struct Mahasiswa {
//		string nim;
//		string nama;
//		DetailAlamat alamat;
//		string umur;
// };
// 
// int main() {
//	Mahasiswa mhs[3];
//	for (int i = 0; i < 3; i++) {
//		cout << "Data ke- " << (i + 1) << ":" << endl;
//		cout << "Nomor Mahasiswa : ";
//		cin >> mhs[i].nim;
//		cout << "Nama Mahasiswa : ";
//		cin >> mhs[i].nama;
// 
//		cout << "Alamat Mahasiswa : " << endl;
//		cout << "\t Nama Desa : ";
//		cin >> mhs[i].alamat.desa;
//		cout << "\t Nama Kota : ";
//		cin >> mhs[i].alamat.kota;
//		cout << "Umur Mahasiswa : ";
//		cin >> mhs[i].umur;
//		cin.ignore(1, '\n');
//		cout << endl;
//	}
//	for (int i = 0; i < 3; i++) {
//		cout << endl;
//		cout << "Data Mahasiswa ke- " << (i + 1) << ":" << endl;
//		cout << "\n NIM : " << mhs[i].nim;
//		cout << "\n Nama : " << mhs[i].nama;
//		cout << "\n Alamat : ";
//		cout << "\n \t Desa : " << mhs[i].alamat.desa;
//		cout << "\n \t Kota : " << mhs[i].alamat.kota;
//		cout << "\n Umur : " << mhs[i].umur;
//		cout << endl;
//	}
// 
// }
// 
//6.
#include <iostream>
using namespace std;

int main() {
	int nMatematika, nBasing, nRerata, NamaMhs;
	string status;

	cout << "Masukkan Nilai Matematika = " << endl;
	cin >> nMatematika;
	cout << "Masukkan Nilai Bahasa Inggris = " << endl;
	cin >> nBasing;

	nRerata = (nMatematika + nBasing) / 2;

	if (nRerata >= 70 || nMatematika >= 80) {
		status = "Lulus";
	}
	else {
		status = "Tidak Lulus";
	}
	cout << "Rata-rata anda : " << nRerata << endl;
	cout << "Anda Dinyatakan : " << status << endl;

	for (int i = 0; i < 3; i++)
	cout << "Data ke- " << (i + 1) << ":" << endl;
	cout << "Nama Mahasiswa : ";
	cin >> NamaMhs;
	cout << "Status Mahasiswa : ";
	cin >> status;
	return 0;
}