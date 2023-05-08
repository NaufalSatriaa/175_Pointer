#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	string nama;
public:
	friend void setnama(mahasiswa& a, string);
};

void setnama(mahasiswa& a, string pnama) {
	a.nama = pnama;
	cout << "Nama: " << a.nama;

}

int main() {
	mahasiswa mhs;
	setnama(mhs, "joko kumat");
	cout << endl;
	system("pause");
	return 0;
}