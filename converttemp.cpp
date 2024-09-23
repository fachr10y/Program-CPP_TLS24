#include <iostream>
#include <ctype.h>
#include <windows.h>

int main(){
	
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	char unit;
	double temp;
	double result;
	
	SetConsoleTextAttribute(h,2);
	std::cout << "*************** Konversi Suhu ***************\n";
	SetConsoleTextAttribute(h,7);
	std::cout << "C = Celsius\n";
	std::cout << "F = Fahrenheit\n";
	std::cout << "Pilih satuan suhu yang ingin dikonversikan: ";
	std::cin >> unit;
	std::cout << '\n';
	
	unit = tolower (unit); 
	if (unit == 'c'){
		std::cout << "Masukkan suhu dalam Celsius: ";
		std::cin >> temp;
		
		result = (temp * 1.8) + 32;
		std::cout << '\n';
		std::cout << "Hasil suhu dalam Fahrenheit: " << result << '\370' << "F" << '\n';
	}
	else if (unit == 'f'){
		std::cout << "Masukkan suhu dalam Fahrenheit: ";
		std::cin >> temp;
		
		result = (temp - 32) / 1.8;
		std::cout << '\n';
		std::cout << "Hasil suhu dalam Celsius: " << result << '\370' << "C" << '\n';
	}
	else {
		std::cout << '\n';
		std::cout << "Mohon hanya pilih antara Celsius (C) atau Fahrenheit (F)!\n";
	}
	
	SetConsoleTextAttribute(h,2);
	std::cout << "*********************************************";
	SetConsoleTextAttribute(h,7);
	return 0;
}
