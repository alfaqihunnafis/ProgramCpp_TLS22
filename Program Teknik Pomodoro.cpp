#include<cstdio>
#include<iostream>
#include<ctime>				// Pertama kita deklarasikan dulu library-library yang kita butuhkan, seperti disamping ini yang berguna untuk timer waktu.

using namespace std;

int siklus;					// Lalu deklarasi statement yang kita butuhkan nantinya dalam program.

int main(){																				// Setelah itu masuk dalam main fungsi program.
	cout<<"Selamat datang di program teknik pomodoro"<<endl;		
	cout<<"Ketik berapa banyak perkiraan siklus pomodoro yang kamu butuhkan : ";		// Tulis keluaran sebagai petunjuk bagi pengguna.
	cin>>siklus;																		// Berikan perintah masukan untuk banyaknya.
																						//	siklus pomodoro yang dibutuhkan pengguna.
	for(int i=1; i <= siklus; i++ ){													// Buat perulangan sesuai dengan masukan dari pengguna.
		cout<<endl<<"Silahkan mulai pengerjaan selama 25 menit, SEMANGAT!"<<endl;		// Tulis keluaran sebagai tanda dimulainya waktu fokus melakukan pekerjaan.
		
		int delay=1500;										// Deklarasi waktu delay sebagai timer waktu pengerjaan selama 25 menit	
		delay *= CLOCKS_PER_SEC;							// Karenakan disini kita menggunakan fungsi waktu per detik, 
		clock_t now = clock();								//	waktu interval kita ubah kedalam satuan detik.
		while(clock() - now <delay);						// Gunakanlah perulangan sebagai fungsi timer waktu otomatis seperti disamping.

		if (i<siklus){										// Setelah waktu pengerjaan selesai masuk ke dalam percabangan
			cout<<endl<<"Waktu pengerjaan telah selesai silahkan istirahat 5 menit, jangan lupa masih ada siklus berikutnya."<<endl;
															//	dimana jika masih terdapat siklus pengerjaan yang akan datang,
			int delay1=300;									//	akan masuk ke percabangan timer waktu istirahat selama 5 menit yang menggunakan fungsi timer
			delay1 *= CLOCKS_PER_SEC;						//	yang kurang lebih sama seperti yang kita gunakan di timer pengerjaan.
			clock_t now = clock();
			while(clock() - now <delay1);		
		}
		else{												// Tetapi jika siklus sudah terpenuhi sama seperti masukan pengguna, akan masuk dalam percabangan 
			cout<<endl<<"Selamat siklus pomodoro yang kamu kira dibutuhkan telah selesai."<<endl;
		}													//	yang melakukan keluaran sebagai tanda metode pomodoro telah terselesaikan.
	}
	return 0;
 }
