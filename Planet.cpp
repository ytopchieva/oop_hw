#include "Planet.h"



Planet::Planet()
{
    name = nullptr; 
    planetSystem = nullptr;
    republic = nullptr;
}

Planet::Planet(const char* newPlanetName,planetType newPlanetType, const char* newPlanetSystem, const char* newRepublic)
{
    name = new char[strlen(newPlanetName) + 1];
    strcpy_s(name, strlen(newPlanetName) + 1, newPlanetName);

    PlanetType = newPlanetType;

    planetSystem = new char[strlen(newPlanetSystem) + 1];
    strcpy_s(planetSystem, strlen(newPlanetSystem) + 1, newPlanetSystem);

    republic = new char[strlen(newRepublic) + 1];
    strcpy_s(republic, strlen(newRepublic) + 1, newRepublic);
}

Planet::Planet(const Planet& others)
{
    name = new char[strlen(others.name) + 1];
    strcpy_s(name, strlen(others.name) + 1, others.name);

    PlanetType = others.PlanetType;

    planetSystem = new char[strlen(others.planetSystem) + 1];
    strcpy_s(planetSystem, strlen(others.planetSystem) + 1, others.planetSystem);

    republic = new char[strlen(others.republic) + 1];
    strcpy_s(republic, strlen(others.republic) + 1, others.republic);
}

Planet::~Planet()
{
    delete[] name;
    delete[] planetSystem;
    delete[] republic;
}


Planet& Planet::operator=(const Planet& others)
{
    if (this != &others)
    {
   
        name = new char[strlen(others.name) + 1];
        strcpy_s(name, strlen(others.name) + 1, others.name);

        PlanetType = others.PlanetType;

        planetSystem = new char[strlen(others.planetSystem) + 1];
        strcpy_s(planetSystem, strlen(others.planetSystem) + 1, others.planetSystem);

        republic = new char[strlen(others.republic) + 1];
        strcpy_s(republic, strlen(others.planetSystem) + 1, others.republic);
    }
    return *this;
}

void Planet::setName(const char* newName)
{
  
    name = new char[strlen(newName) + 1];
    strcpy_s(name, strlen(newName) + 1, newName);
}

void Planet::setPlanetType(planetType newPlanetType)
{
    PlanetType = newPlanetType;
}

void Planet::setPlanetSystem(const char* newPlanetSystem)
{
    
    planetSystem = new char[strlen(newPlanetSystem) + 1];
    strcpy_s(planetSystem, strlen(newPlanetSystem) + 1, newPlanetSystem);
}

void Planet::setRepublic(const char* newRepublic)
{
    
    republic = new char[strlen(newRepublic) + 1];
    strcpy_s(republic, strlen(newRepublic) + 1, newRepublic);
}

char* Planet::getName()
{
    return name;
}

planetType Planet::getPlanetType()
{
    return PlanetType;
}
char* Planet::getPlanetSystem()
{
    return planetSystem;
}

char* Planet::getRepublic()
{
    return republic;
}