#include <iostream>

int main()
{
	int numar = 10;
	int& cifra = numar;

	std::cout << "Valoarea variabilei este " << numar << "." << std::endl;
	std::cout << "Valoarea referintei este " << cifra << "." << std::endl;

	system("pause");
}