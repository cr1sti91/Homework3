#include <iostream>

int main() {
	double pret1{}, pret2{}, pret3{};
	std::cout << "Introduce-ti va rog preturile" << std::endl;
	std::cout << "Pret1 : "; 
	std::cin >> pret1; 
	std::cout << "Pret2 : "; 
	std::cin >> pret2; 
	std::cout << "Pret3 : "; 
	std::cin >> pret3; 

	std::cout << "Media aritmetica a preturilor : " << (pret1 + pret2 + pret3) / 3 << " lei." << std::endl;
	std::cout << "Suma totala : " << pret1 + pret2 + pret3 << " lei." << std::endl;
}