#include "Stormtrooper.h"
#include "Planet.h"


 


Stormtrooper::Stormtrooper()
{
	id = nullptr;
	rank = Cadet;
	type = nullptr;
}
Stormtrooper::Stormtrooper(const char* Id, sRank Rank, const char* Type, Planet Planet)
{
	id = new char[strlen(Id) + 1];
	strcpy_s(id, strlen(Id) + 1, Id);
	rank = Rank;
	type = new char[strlen(Type) + 1];
	strcpy_s(type, strlen(Type) + 1, Type);
	planet = Planet;
}
Stormtrooper::Stormtrooper(const Stormtrooper& others)
{
	id = new char[strlen(others.id) + 1];
	strcpy_s(id, strlen(others.id) + 1, others.id);
	rank = others.rank;
	type = new char[strlen(others.type) + 1];
	strcpy_s(type, strlen(others.type) + 1, others.type);
	planet = others.planet;
}
Stormtrooper::~Stormtrooper()
{
	delete[]id;
	delete[]type;
}

Stormtrooper& Stormtrooper:: operator=(const Stormtrooper& others )
{
	if (this != &others)
	{
		
		id = new char[strlen(others.id) + 1];
		strcpy_s(id, strlen(others.id) + 1, others.id);
		rank = others.rank;
		type = new char[strlen(others.type) + 1];
		strcpy_s(type, strlen(others.type) + 1, others.type);
		planet = others.planet;
	}
	return *this;
}

void Stormtrooper::setId(const char* Id)
{
	
	id = new char[strlen(Id) + 1];
	strcpy_s(id, strlen(Id) + 1, Id);

}
void Stormtrooper::setRank(sRank Rank)
{
	rank = Rank;
}
void Stormtrooper::setType(const char* Type)
{

	type = new char[strlen(Type) + 1];
	strcpy_s(type, strlen(Type) + 1, Type);
}
void Stormtrooper::setPlanet(Planet Planet)
{
	planet = Planet;
}

char* Stormtrooper::getId()
{
	return id;
}
sRank Stormtrooper::getRank()
{
	return rank;
}
char* Stormtrooper::getType() {
	return type;
}
Planet Stormtrooper::getPlanet()
{
	return planet;
}