#pragma once
#include<iostream>
#include<string>
#include"IEquation.hpp"

class Human {
private:
	std::string m_name;
public:
	Human(std::string name) : m_name(name) { }
	std::string GetName()const { return m_name; }

};
class Student : public Human {
public:
	Student(std::string name) : Human(name) { }
	void make_eq(IEquation& eq);
	void solving_eq(IEquation& eq);
	void print_eq(IEquation& eq);
	void print_res(IEquation& eq);
};