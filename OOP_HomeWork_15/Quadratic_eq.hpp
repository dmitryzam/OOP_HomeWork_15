#pragma once
#include"IEquation.hpp"

class Quadratic_eq : public IEquation {
private:
	double m_x1;
	double m_x2;
	int coef_a;
	int coef_b;
	int coef_c;
	double discrim;
	double find_discrim(int coef_a, int coef_b, int coef_c);	// ф-ия нахождения дискрименанта
public:
	Quadratic_eq();
	Quadratic_eq(int a, int b, int c);
	virtual void make_eq();
	virtual void solving_eq();
	virtual void print_eq();
	double GetX1()const { return m_x1; }
	double GetX2()const { return m_x2; }
	bool discrim_is_zero();
	virtual void print_result();
	double Get_discrim()const { return discrim; }
};