#include <iostream>
using namespace std;

int main() {
	
	int nilaiMatematika, nilaifisika, nRerata;
	string status;

	cout << "Masukkan Nilai Matematika = ";
	cin >> nilaiMatematika;

	cout << "Masukkan Nilai fisika =";
	cin >> nilaifisika;

	nRerata = (nilaiMatematika + nilaifisika) / 2;

	if (nRerata > 60) {
		status = "lulus";
	}
	else if (nilaiMatematika > 70){
		status = "lulus";
	}

	else {
		status = "Tidak Lulus";
	}

	cout << "Nilai MTK :" << nilaiMatematika << endl;
	cout << "Nilai Fisika :" << nilaifisika << endl;
	cout << "Statusnya adalah :" << status << endl;
	cout << "Rata-ratanya adalah :" << nRerata << endl;

	return 0;
}
