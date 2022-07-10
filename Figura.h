#pragma once
#include <iostream>
using namespace std;
class Figura
{
	string nazwa;
	double wysokosc;
	double szerokosc;
	double pole;
	string kolor;
public:
	Figura(double wysokosc, string kolor);
	Figura(string nazwa, double wyoskosc, double szerokosc, string kolor);
	Figura(double wysokosc);
	void piszDane();
	//bool operator= = (const Figura & f);
	Figura();
	
	int oblicz_Pole();
	friend ostream& operator<<(ostream& wy, Figura& f);
	~Figura();
	
	
	
	
};

