#include "Figura.h"

Figura::Figura(double wysokosc, string kolor)
{
	this->wysokosc = wysokosc;
	this->kolor = kolor;
	this->nazwa = "kwadrat";
	this->szerokosc = 10;
}

Figura::Figura(string nazwa, double wyoskosc, double szerokosc, string kolor)
{
	this->nazwa = nazwa;
	this->wysokosc = wysokosc;
	this->szerokosc = szerokosc;
	this->kolor = kolor;
}

Figura::Figura(double wysokosc)
{
	this->nazwa = "kwadrat";
	this->wysokosc = wysokosc;
	this->szerokosc = 10;
	this->kolor = "czarny";
}

void Figura::piszDane()
{
	cout << "Nazwa: " << this->nazwa << endl;
	cout << "Wysokosc: " << this->wysokosc << endl;
	cout << "Szerokosc: " << this->szerokosc << endl;
	cout << "KOlor: " << this->kolor << endl;
}

Figura::Figura()
{
	this->nazwa = "Kwadrat";
	this->szerokosc = 10;
	this->kolor = "Czarny";
}

/*bool Figura::operator==(const Figura& f)
{
	
	
}
*/

/*bool Figura::operator&= = (Figura & f)
{
	return 1;
}*/

Figura::~Figura()
{
}

int Figura::oblicz_Pole()
{
	if (this->nazwa == "Trojkat") {
		this->pole = ((this->wysokosc * this->szerokosc) / 2);
		return this->pole;
	}
	if (this->nazwa == "Prostokat")
	{
		this->pole= (this->szerokosc * this->wysokosc);
		return this->pole;

	}
	if (this->nazwa == "Kwadrat")
	{
		this->pole = (this->szerokosc * this->wysokosc);
		
		return this->pole;

	}

}


