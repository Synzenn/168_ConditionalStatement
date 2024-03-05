#include <iostream>
using namespace std;

int main()
{
	int nBilA;
	int nBilB;
	string status;

	srand(time(0));

	nBilA = rand() % 10;
	nBilB = rand() % 10;

	if (nBilA > nBilB){
		status = "Bilangan A lebih besar dari Bilangan B";
	}
		
	else if (nBilA == nBilB) {
		status = "Bilangan A sama dengan Bilangan B";
	}

	else {
		status = " Bilangan A lebih kecil dari Bilangan B";
	}

	cout << "Bilangan pertama adalah =" << nBilA << endl;
	cout << "Bilanan kedua adalah =" << nBilB << endl;
	cout << "status Bilangannya adalah = " << status << endl;




	return 0;


}