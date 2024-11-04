#pragma once

// Интерфейсный класс:
class IEquation {
public:
	virtual void	make_eq() = 0;		// создание уравнения
	virtual void	solving_eq() = 0;	// решение уравнения
	virtual void	print_eq() = 0;		// вывод в консоль формулы уравнения
	virtual void	print_result() = 0;	// вывод в консоль результат уравнения

	//virtual ~IEquation(){}			// TODO: разобраться с virtual деструктором
};