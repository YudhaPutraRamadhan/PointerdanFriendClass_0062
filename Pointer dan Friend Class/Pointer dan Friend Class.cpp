#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim() {
		cout << "No Induk = " << nim << endl;
	}
};

int main() {
	
	mahasiswa mhs{ 1 }; //object mhs
	mhs.showNim(); //member access operator

	mahasiswa &refMhs = mhs; //Pointer reference refMhs
	refMhs.nim = 2; //Member access operator
	mhs.showNim();

	mahasiswa *pMhs = &mhs;
	pMhs->nim = 3;
	pMhs->showNim();
	return 0;
}