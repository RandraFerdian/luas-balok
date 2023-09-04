#include <iostream>
using namespace std;

int main() {
	int p, l, t, volume, luas;

	cout << "jadi pada program ini kita akan menghitung luas permukaan dan volume dari sebuah balok" << endl;
	cout << "masukan panjang sebuah balok"; cin >> p;
	cout << "masukan lebar sebuah balok"; cin >> l;
	cout << "masukan tinggi sebuah balok"; cin >> t;

	volume = p * l * t;
	luas = 2 * (p * l) + (p * t) + (l * t);

	cout << "volume baloknya adalah" << volume << endl;
	cout << "luas permukaan baloknya adalah " << luas << endl;
	
	cin.get();
	return 0;
}