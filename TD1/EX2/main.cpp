#include <iostream>
#include <string>
#include "Complex2D.h"

int main(){
	Complex2D c1;
	Complex2D c2(3.5,4.6);
	Complex2D c3(1.0);
	Complex2D c4(c1);
	std::cout << "c1: "; c1.print();
    	std::cout << "c2: "; c2.print();
   	std::cout << "c3: "; c3.print();
    	std::cout << "c4: "; c4.print();
	Complex2D sum = c2 + c3;
    	Complex2D diff = c2 - c3;
    	Complex2D prod = c2 * c3;
	std::cout << "\nSomme: "; sum.print();
    	std::cout << "Différence: "; diff.print();
    	std::cout << "Produit: "; prod.print();

	return 0;
}
