#include <iostream>

using namespace std;

int main()
{
	int a, b, hasil;
	
	cout << "masukkan angka : "; cin >> a;
	cout << "masukkan pangkat : "; cin >> b;
	
	hasil = a;
	
	for(int i=1; i<b; i++){
		hasil = hasil*a;
	}
	cout << "hasilnya adalah : " << hasil << endl;
	
	return 0;
	
}

