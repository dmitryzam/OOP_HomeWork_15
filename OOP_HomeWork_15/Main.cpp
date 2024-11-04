#include<iostream>
#include<string>
#include"Linear_eq.hpp"
#include"Quadratic_eq.hpp"
#include"Persons.hpp"

// Задание. Создайте класс, описывающий уравнение.
// Класс должен являться интерфейсом. 
// От него унаследуйте два других класса: линейное уравнение и квадратное уравнение.
// Самостоятельно наполните их полями и методами.

int main() {
	setlocale(LC_ALL, "RU");
	try {
		std::cout << "Добро пожаловать на экзамен!!!\nНа экзамене необходимо решить" <<
			" два уравнения (линейное и квадратное).\n\n";
		std::cout << "Билет 1 с линейным уравнением:\n";
		Linear_eq f1;
		f1.make_eq();
		f1.print_eq();
		std::cout << "\n\n";
		Student st1("John");
		std::cout << "Student's name is " << st1.GetName() << '\n';
		std::cout << st1.GetName() << " пришел на экзамен по математике.\n";
		std::cout << "Он вытянул билет со следующим уравнением:\n";
		st1.print_eq(f1);
		std::cout << st1.GetName() << " решил уравнение и получил результат:\n";
		st1.solving_eq(f1);
		st1.print_res(f1);
		std::cout << "\n\n" << "   *   *   *   *   *   *\n";
		std::cout << "Билет 2 с квадратичным уравнением:\n";
		Quadratic_eq f2;
		f2.make_eq();
		f2.print_eq();
		std::cout << "\n\n";		
		std::cout << st1.GetName() << " вытянул второй билет со следующим уравнением:\n";
		st1.print_eq(f2);
		std::cout << st1.GetName() << " решил второе уравнение и получил результат:\n";
		st1.solving_eq(f2);
		st1.print_res(f2);

	}
	catch (std::runtime_error& log) {
		std::cout << "Результат: " << log.what() << '\n';
	}
	catch(std::exception& log){
		std::cout << "Error: " << log.what() << '\n';
	}

	return 0;
}


