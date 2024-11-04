#include "Linear_eq.hpp"
#include<iostream>
#include<exception>
#include<cstdlib>
#include<ctime>


Linear_eq::Linear_eq(){
	coef_a = 1;
	coef_c = 0;
	if (coef_a == 0) {
		throw std::exception("The equation has no roots!\n");
		return;
	}
	m_x = -coef_c / coef_a;
}

Linear_eq::Linear_eq(int a, int c){
	coef_a = a;
	coef_c = c;
	if (coef_a == 0) {
		throw std::exception("The equation has no roots!\n");
		return;
	}
	m_x = -coef_c / coef_a;
}

void Linear_eq::make_eq(){
	srand(time(NULL));
	coef_a = rand() % (100 + 100) - 100;
	coef_c = rand() % (100 + 100) - 100;
}

void Linear_eq::solving_eq(){
	if (coef_a == 0) {
		throw std::exception("The equation has no roots!\n");		
	}	
	m_x = static_cast<double>(-coef_c) / coef_a;
}

void Linear_eq::print_eq(){	
	if (coef_c > 0) {
		std::cout << coef_a << "x + " << coef_c << " = 0;\n";
		return;
	}
	if (coef_c < 0) {
		std::cout << coef_a << "x - " << -coef_c << " = 0;\n";
		return;
	}
	if (coef_c == 0) {
		throw std::exception("The equation has any result!\n");
		return;
	}

}

void Linear_eq::print_result(){
	std::cout << "Корень уравнения равен -> " << m_x << '\n';
}
