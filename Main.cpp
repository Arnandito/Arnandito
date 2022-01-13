/*
Tugas Final Project Algoritma dan pemrograman
Judul: Quiz Pengetahuan Umum Tentang Indonesia
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	system("cls");
	//Variable character
	char jawaban, a;

	//Tampilan Judul
	cout << "**********************************************************" << endl;
	cout << "---------- SELAMAT DATANG DI GAME CERDAS CERMAT ----------" << endl;
	cout << "--------------- BERHADIAH 100 JUTA RUPIAH ----------------" << endl;
	cout << "**********************************************************" << endl;
	cout << endl << endl;

	//Peraturan Quiz
	cout << "PERATURAN PENTING                                                                   " << endl;
	cout << endl;
	cout << "Anda hanya perlu menjawab 5 pertanyaan umum dari game ini                           " << endl;
	cout << "Jika ada jawaban yang salah, maka anda akan mengulang dari awal                     " << endl;
	cout << "Dan jika semua jawabannya benar, maka anda berhak mendapatkan hadiah 100 juta rupiah" << endl;
	cout << "Anda harus menjawab dengan huruf kapital (A,B,C,D)                                  " << endl;
	cout << endl;

	//Code untuk lanjut atau tidak dengan menekan (Y/T)
	cout << "Klik Y untuk memulai permainan " << endl;
	cout << "Atau tekan T untuk keluar      " << endl;
	cout << "(Y/T)                          " << endl;
	cin >> jawaban;

	//Code Memulai Quiz
	if (jawaban == 'Y')
	{
		system("cls");

		cout << "1. Sebutkan tempat terkering dan terbasah di Indonesia? " << endl;
		cout << endl;
		cout << " A.  Yogyakarta dan Pangandaran" << endl;
		cout << " B.  Jakarta dan Bogor" << endl;
		cout << " C.  NTT dan Bogor" << endl;
		cout << " D.  Bandung dan Aceh" << endl;
		cout << endl;
		cout << " Masukkan Jawaban Anda: ";
		cin >> jawaban;
		if (jawaban == 'C')
		{
			system("cls");
			cout << " SELAMAT JAWABAN ANDA BENAR !!! " << endl;
			cout << " Soal selanjutnya " << endl;
			cout << endl;
		}
		else if (jawaban != 'C')
		{
			system("cls");
			cout << "Jawaban anda salah" << endl;
			cout << "Silahkan ulangi dari awal" << endl;
			exit(0);
		}
		cout << "2. Pada tahun berapa Sumpah Pemuda pertama kali dibacakan? " << endl;
		cout << endl;
		cout << "A.  1966" << endl;
		cout << "B.  1922" << endl;
		cout << "C.  1945" << endl;
		cout << "D.  1928" << endl;
		cout << endl;
		cout << "Masukkan jawaban anda: ";
		cin >> jawaban;
		if (jawaban == 'D')
		{
			system("cls");
			cout << " SELAMAT JAWABAN ANDA BENAR !!! " << endl;
			cout << " Soal selanjutnya " << endl;
			cout << endl;
		}
		else if (jawaban != 'D')
		{
			system("cls");
			cout << "Jawaban anda salah" << endl;
			cout << "Silahkan ulangi dari awal" << endl;
			exit(0);
		}
		cout << "3. Rumah adat tongkonan berasal dari provinsi apa?" << endl;
		cout << endl;
		cout << "A.  Sulawesi Selatan" << endl;
		cout << "B.  Jawa Barat" << endl;
		cout << "C.  Jawa Tengah" << endl;
		cout << "D.  Aceh" << endl;
		cout << endl;
		cout << "Masukkan jawaban anda: ";
		cin >> jawaban;
		if (jawaban == 'A')
		{
			system("cls");
			cout << " SELAMAT JAWABAN ANDA BENAR !!! " << endl;
			cout << " Soal selanjutnya " << endl;
			cout << endl;
		}
		else if (jawaban != 'A')
		{
			system("cls");
			cout << "Jawaban anda salah" << endl;
			cout << "Silahkan ulangi dari awal" << endl;
			exit(0);
		}
		cout << "4. Berapa jumlah provinsi yang ada di Indonesia?" << endl;
		cout << endl;
		cout << "A.  30 provinsi" << endl;
		cout << "B.  14 provinsi" << endl;
		cout << "C.  34 provinsi" << endl;
		cout << "D.  42 provinsi" << endl;
		cout << endl;
		cout << "Masukkan jawaban anda: ";
		cin >> jawaban;
		if (jawaban == 'C')
		{
			system("cls");
			cout << " SELAMAT JAWABAN ANDA BENAR !!! " << endl;
			cout << " Soal selanjutnya " << endl;
			cout << endl;
		}
		else if (jawaban != 'C')
		{
			system("cls");
			cout << "Jawaban anda salah" << endl;
			cout << "Silahkan ulangi dari awal" << endl;
			exit(0);
		}
		cout << "5. Pada tahun berapa Indonesia merdeka? " << endl;
		cout << endl;
		cout << "A.  1943" << endl;
		cout << "B.  1945" << endl;
		cout << "C.  1928" << endl;
		cout << "D.  2022" << endl;
		cout << endl;
		cout << "Masukkan jawaban anda: ";
		cin >> jawaban;
		if (jawaban == 'B')
		{
			system("cls");
			cout << "**********************************************************" << endl;
			cout << "------------ SELAMAT JAWABAN ANDA BENAR SEMUA ------------" << endl;
			cout << " -- ANDA TELAH MENDAPATKAN UANG SENILAI 100 JUTA RUPIAH --" << endl;
			cout << "**********************************************************" << endl;
		}
		else if (jawaban != 'B')
		{
			system("cls");
			cout << "Jawaban anda salah" << endl;
			cout << "Silahkan ulangi dari awal" << endl;
			exit(0);
		}
		
	}
	else if (jawaban == 'T')
	{
		system("cls");
		cout << "SAMPAI JUMPA !!!" << endl;
		exit(0);
	}

	cin.get();

	return 0;
}