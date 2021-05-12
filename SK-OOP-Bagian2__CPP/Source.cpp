#include <iostream>
#include <conio.h>

using namespace std;

class PersegiPanjang {
	int lebarPP, tinggiPP;

public:
	void atur_nilai(int, int);

	int LuasPP() {
		return lebarPP * tinggiPP;
	}
};

void PersegiPanjang::atur_nilai(int X, int Y) {
	lebarPP = X;
	tinggiPP = Y;
}

int main() {
	PersegiPanjang PP1;
	PP1.atur_nilai(50, 30);

	cout << "Luas\t: " << PP1.LuasPP();

	_getch();
	return 0;
}