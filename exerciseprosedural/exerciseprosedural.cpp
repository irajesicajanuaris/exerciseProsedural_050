#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
	while (true)
	{
		cout << "Masukkan Jumlah Data pada Array : ";
		cin >> n;

		if (n <= 20) {
			break;
		}
		else
		{
			cout << "\nArray yang anda masukkan maksimal 20 elemen.\n";
		}
	}
}


double rerata(double a, double b) {
	return (a + b) / 2;
}

string status(double r) {
	if (r >= 70) {
		return "Diterima";
	}else {
		return "Ditolak";
	}
}

string status2(double r, double n) {
	if (r >= 70 && n >= 80) {
		return "Diterima";
	}else {
		return "Ditolak";
	}
}

string status3(double r, double n) {
	if (r >= 70 || n >= 80) {
		return "Diterima";
	}else {
		return "Ditolak";
	}
}

int main() {
	float nilaiMath, nilaiBing, namapeserta;

	cout << "Masukkan nilai matematika : ";
	cin >> nilaiMath;
	cout << "Masukkan nilai bahasa inggris : ";
	cin >> nilaiBing;
	cout << "Masukkan nama peserta : ";
	cin >> namapeserta;

	//rerata = (nilaiMath + nilaiBing)/2;

	//rata = rerata(nilaiMath, nilaiBing);
	//st = status(rerata(nilaiMath, nilaiBing));

	//if (rata >= 70){
	//	status = "Diterima";
	// }else {
	//	status = "Ditolak";
	// }

	cout << "Nilai rata-rata nya : " << rerata(nilaiMath, nilaiBing);
	cout << "\nstatus kelulusannya : " << status(rerata(nilaiMath, nilaiBing));
	cout << "\nstatus kelulusannya : " << status2(rerata(nilaiMath, nilaiBing), nilaiMath);
	cout << "\nstatus kelulusannya : " << status2(rerata(nilaiMath, nilaiBing), nilaiMath);




}