#pragma once
#include"IEquation.hpp"

class Linear_eq : public IEquation {
private:
	double m_x;
	int coef_a;
	int coef_c;
public:
	Linear_eq();
	Linear_eq(int a, int c);
	virtual void make_eq();
	virtual void solving_eq();
	virtual void print_eq();
	virtual void print_result();
	double GetX()const { return m_x; }
};