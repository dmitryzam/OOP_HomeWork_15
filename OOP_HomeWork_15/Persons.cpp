#include "Persons.hpp"

void Student::make_eq(IEquation& eq){
	eq.make_eq();
}

void Student::solving_eq(IEquation& eq){
	
	eq.solving_eq();
}

void Student::print_eq(IEquation& eq){
	eq.print_eq();
}

void Student::print_res(IEquation& eq){
	eq.print_result();
}
