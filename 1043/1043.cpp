#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>
using namespace std;

class Food {
public:
	virtual void prepare() = 0;
};

class Breakfast : public Food {
public:
	void prepare() override {
		cout << "cook breakf" << endl;


	}
};

class Lunch : public Food {
public:
	void prepare() override {
		cout << "cook Lunch" << endl;
	}
};

class Dinner : public Food {
public:
	void prepare() override {
		cout << "cook dinner" << endl;
	}
};

class Person {
public:
	void eat(Food& food) {
		cout << "подготавливаем еду" << endl;
		food.prepare();
		cout << "едим" << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");


	Breakfast breakfast;
	Lunch lunch;
	Dinner dinner;
	Person person;

	cout << "Едим завтрак" << endl;
	person.eat(breakfast);
	cout << "-" << endl;
	cout << "Едим обед" << endl;
	person.eat(lunch);
	cout << "-" << endl;
	cout << "Едим ужин" << endl;
	person.eat(dinner);



}

