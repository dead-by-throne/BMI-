#include <iostream>
#define min 18.5

using namespace std;
const double maks = 24.9;

int main()
{
	string nama;
	int u, bmi, bb, gender, t=0;
	float tb, ideal;
	
	cout<<"==========================================="<<endl;
	cout<<"PROGRAM HITUNG BERAT BADAN IDEAL"<<endl;
	cout<<"=========================================== \n";
	
	cout<<"Halo!"<<endl;
	cout<<"Selamat Datang, yuk hitung Body Mass Index mu! \n"<<endl;
	
	cout<<"Masukkan Nama: ";
	cin>>nama;
	cout<<"Masukkan Usia: ";
	cin>>u;
	cout<<"Masukkan Berat Badan(kg): ";
	cin>>bb;
	cout<<"Masukkan Tinggi(m): ";
	cin>>tb;
	
	cout<<"Pilih Gender : "<<endl;
	cout<<"1. Pria "<<endl;
	cout<<"2. Wanita"<<endl;
    cin>>gender;
    
    switch(gender){
    case 1:
            ideal = (tb-100)-((tb-100)*0.1);
            bmi = bmi = bb/(tb*tb);
			cout<<"HASIL BMI ANDA : "<<bmi<<endl;
			cout<<endl;
			break;
	case 2:
			ideal = (tb-100)-((tb-100)*0.15);
			bmi = bmi = bb/(tb*tb);
			cout<<"HASIL BMI ANDA : "<<bmi<<endl;
			cout<<endl;
	}
	
	cout<<endl;
	if (bmi<=18.5) {
		cout<<"Anda Kekurangan Berat Badan"<<endl;
		cout<<"Terimakasih Telah Menghitung Berat Badan Anda"<<endl;
		cout<<"Silahkan Konsultasi Ke Dokter Ya!"<<endl;
	} else if (bmi >18.5 && bmi <=25){
		cout<<"Berat Badan Anda Ideal"<<endl;
	} else if (bmi >25 && bmi <=30){
		cout<<"Anda Kelebihan Berat Badan"<<endl;
		cout<<"Terimakasih Telah Menghitung Berat Badan Anda"<<endl;
		cout<<"Silahkan Konsultasi Ke Dokter Ya!"<<endl;
	} else {
		cout<<"Anda Obesitas"<<endl;
		cout<<"Terimakasih Telah Menghitung Berat Badan Anda"<<endl;
		cout<<"Silahkan Konsultasi Ke Dokter Ya!"<<endl;
	}
	
	cout<<endl;
	cout<<"=========================================="<<endl;
	cout<<"       PATOKAN MINIMAL DAN MAKSIMAL       "<<endl;
	cout<<"=========================================="<<endl;
	cout<<"Tinggi Badan (cm)                  = "<<tb<<endl;
	cout<<"Berat Badan Ideal         	    = "<<ideal<<endl;
	cout<<"=========================================="<<endl;
	cout<<endl;
	
	
	return 0;
}
