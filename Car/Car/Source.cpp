#include <iostream>
#include <assert.h>
#include <string>
  
using namespace std;

class Car {

public:
	string m_make;
	string m_model; 
	int m_year;
	int m_engineVolume;
	string m_color;
	Car () {}
	Car(string make, string model, int year, int engineVolume, string color)
		: m_make(make), m_model(model), m_year(year), m_engineVolume(engineVolume), m_color(color) {}

	string get_make()
	{
		return this->m_make;
	}
	string get_model()
	{
		return this->m_model;
	}
	int get_year()
	{
		return this->m_year;
	}
	int get_engineVolume()
	{
		return this->m_engineVolume;
	}
	string get_color()
	{
		return this->m_color;
	}
	void set_make(string make)
	{
		this->m_make = make;
	}
	void set_model(string model)
	{
		this->m_model = model;
	}
	void set_year(int year)
	{
		this->m_year = year;
	}
	void set_engineVolume(int engineVolume)
	{
		this->m_engineVolume = engineVolume;
	}
	void set_color(string color)
	{
		this->m_color = color;
	}

	void print()
	{
		cout << "The Car make: " << m_make << "\nmodel: " << m_model << "\nyear: " << m_year
			<< "\nengineVolume: " << m_engineVolume << "\ncolor: " << m_color<< endl;
	}
	static Car compareByYear(Car &a, Car &b)
	{
		return a.m_year > b.m_year ? a : b;
	}
	static Car compareByEngineVolume(Car &a, Car &b)
	{
		return a.m_engineVolume > b.m_engineVolume ? a : b;
	}
};

int main()
{
	string tmpString;
	int tmpInt;
	Car userCar;
	cout << "Enter car details.\nmake:  ";
	cin >> tmpString;
	userCar.set_make(tmpString);
	cout << "model:  ";
	cin >> tmpString;
	userCar.set_model(tmpString);
	cout << "year:  ";
	cin >> tmpInt;
	userCar.set_year(tmpInt);
	cout << "engine volume:  ";
	cin >> tmpInt;
	userCar.set_engineVolume(tmpInt);
	cout << "color:  ";
	cin >> tmpString;
	userCar.set_color(tmpString);
	cout << endl;


	cout << "The details of your car: \n";
	userCar.print();

	Car myCar = { "Ford", "Focus", 2017, 1600, "White" };

	cout << "The details of greater years car: \n";
	Car::compareByYear(userCar, myCar).print();

	cout << "The details of greater engine-volume car: \n";
	Car::compareByEngineVolume(userCar, myCar).print();

	return 0;

}