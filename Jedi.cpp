#include "Jedi.h"
#include "Planet.h"



Jedi::Jedi() 
{
	name = nullptr;
	rank = Youngling;
	midichlorian = 0;
	spicies = nullptr;
	militaryRank = nullptr;
}

Jedi::Jedi(const char* Name, Rank Rank, double Midichlorian, const char* Species, const char* MilitaryRank, Planet Planet)
{
	name = new char[strlen(Name) + 1];
	strcpy_s(name, strlen(Name) + 1,Name);
	rank = Rank; 
	midichlorian = Midichlorian; 
	spicies = new char[strlen(Species) + 1];
	strcpy_s(spicies, strlen(Species) + 1, Species);
	militaryRank = new char[strlen(MilitaryRank) + 1];
	strcpy_s(militaryRank, strlen(MilitaryRank) + 1, MilitaryRank);
	planet = Planet;
}

Jedi::Jedi(const Jedi& others) 
{
	name = new char[strlen(others.name) + 1];
	strcpy_s(name, strlen(others.name) + 1, others.name);
	rank = others.rank; 
	midichlorian = others.midichlorian;
	spicies = new char[strlen(others.spicies) + 1];
	strcpy_s(spicies, strlen(others.spicies) + 1, others.spicies); 
	militaryRank = new char[strlen(others.militaryRank) + 1];
	strcpy_s(militaryRank, strlen(others.militaryRank) + 1, others.militaryRank);
	planet = others.planet; 
}
Jedi::~Jedi()
{
	delete[]name;
	delete[]spicies;
	delete[]militaryRank;
 }
Jedi& Jedi::operator=(const Jedi& others)
{
	if (this != &others)
	{
		
		name = new char[strlen(others.name) + 1];
		strcpy_s(name, strlen(others.name) + 1, others.name);
		rank = others.rank;
		midichlorian = others.midichlorian;
		spicies = new char[strlen(others.spicies) + 1];
		strcpy_s(spicies, strlen(others.spicies) + 1, others.spicies);
		militaryRank = new char[strlen(others.militaryRank) + 1];
		strcpy_s(militaryRank, strlen(others.militaryRank) + 1, others.militaryRank);
		planet = others.planet;
	}
	return *this;
}

void Jedi::setName(const char* Name)
{
	name = new char[strlen(Name) + 1];
	strcpy_s(name, strlen(Name) + 1, Name);
}
void Jedi::setRank(Rank Rank)
{
	rank = Rank; 
}
void Jedi::setMidichlorian(double Midichlorian)
{
	midichlorian = Midichlorian;
}
void Jedi::setSpicies(const char* Spicies)
{
	spicies = new char[strlen(Spicies) + 1];
	strcpy_s(spicies, strlen(Spicies) + 1, Spicies);
}
void Jedi::setMilitaryRank(const char* MilitaryRank)
{
	militaryRank = new char[strlen(MilitaryRank) + 1];
	strcpy_s(militaryRank, strlen(MilitaryRank) + 1, MilitaryRank);
}
void Jedi::setPlanet(Planet Planet)
{
	planet = Planet; 
}

char* Jedi::getName()
{
	return name; 
}
Rank Jedi::getRank()
{
	return rank; 
}
double Jedi::getMidichlorian()
{
	return midichlorian;
}
char* Jedi::getSpicies()
{
	return spicies;
}
char* Jedi::getMilitaryRank()
{
	return militaryRank;
}
Planet Jedi::getPlanet()
{
	return planet;
}
