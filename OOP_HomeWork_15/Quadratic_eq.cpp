#include"Quadratic_eq.hpp"
#include<iostream>
#include<exception>
#include<cmath>		// для sqrt()
#include<cstdlib>
#include<ctime>

double Quadratic_eq::find_discrim(int coef_a, int coef_b, int coef_c){
	return (coef_b * coef_b - 4 * coef_a * coef_c);
}

Quadratic_eq::Quadratic_eq() {
	coef_a = 1;
	coef_b = 1;
	coef_c = 0.25;	// TODO: тип переменной double!!!!
	discrim = find_discrim(coef_a, coef_b, coef_c);	
	if (discrim < 0) {
		throw std::runtime_error("The equation has no roots!\n");
		return;
	}	
	if (discrim == 0) {
		m_x1 = -(coef_b / (2 * coef_a));
		return;
	}
	m_x1 = (-coef_b + sqrt(discrim)) / (2 * coef_a);
	m_x2 = (-coef_b - sqrt(discrim)) / (2 * coef_a);	
}

Quadratic_eq::Quadratic_eq(int a, int b, int c){
	coef_a = a;
	coef_b = b;
	coef_c = c;
	discrim = find_discrim(coef_a, coef_b, coef_c);
	if (discrim < 0) {
		throw std::runtime_error("The equation has no roots!\n");
		return;
	}
	if (discrim == 0) {
		m_x1 = -(coef_b / (2 * coef_a));
		return;
	}
	m_x1 = (-coef_b + sqrt(discrim)) / (2 * coef_a);
	m_x2 = (-coef_b - sqrt(discrim)) / (2 * coef_a);
}

void Quadratic_eq::make_eq(){
	srand(time(NULL));
	coef_a = rand() % (100 + 100) - 100;
	coef_b = rand() % (100 + 100) - 100;
	coef_c = rand() % (100 + 100) - 100;
}

void Quadratic_eq::solving_eq(){
	discrim = find_discrim(coef_a, coef_b, coef_c);
	if (discrim < 0) {
		throw std::runtime_error("The equation has no roots!\n");
	}
	if (discrim == 0) {
		m_x1 = -(coef_b / (2 * coef_a));
	}
	m_x1 = (-coef_b + sqrt(discrim)) / (2 * coef_a);
	m_x2 = (-coef_b - sqrt(discrim)) / (2 * coef_a);
}

void Quadratic_eq::print_eq(){
	if (discrim < 0) {
		throw std::runtime_error("The equation has no roots!\n");
	}
	if (coef_b == 0) {
		std::cout << coef_a;
		coef_c > 0 ? std::cout << "x^2 + " : std::cout << "x^2 - ";
		std::cout << coef_c << " = 0;\n";
		return;
	}
			
	std::cout << coef_a;
	coef_b > 0 ? std::cout << "x^2 + " << coef_b : std::cout << "x^2 - " << -coef_b;
	//std::cout << coef_b;
	coef_c > 0 ? std::cout << "x + " << coef_c : std::cout << "x - " << -coef_c;
	std::cout << " = 0;\n";
	return;	
}

bool Quadratic_eq::discrim_is_zero(){
	if (discrim == 0)
		return true;
	return false;
}

void Quadratic_eq::print_result(){
	std::cout << "Корень уравнения равен -> " << m_x1 << '\n';
	if (discrim > 0)
		std::cout << "Второй корень уравнения равен -> " << m_x2 << '\n';
}


