#include <iostream>
#include <cstring>

class Planet
{
private:
    char* name;
    char* planetSystem;
    char* republic;

public:
    void print(); 

    Planet();
    Planet(const Planet&);
    Planet(const char*, const char*, const char*);

    Planet& operator=(const Planet&); 
    ~Planet(); 

    void setName(const char*);
    void setPlanetSystem(const char*); 
    void setRepublic(const char*);

    char* getName();
    char* getPlanetSystem(); 
    char* getRepublic();
};

void Planet::print()
{
    std::cout << name << " " << planetSystem << " " << republic << std::endl;
}

Planet::Planet()
{
    name = new char[100];
    strcpy_s(name,100, "Earth");
    planetSystem = new char[100];
    strcpy_s(planetSystem,100, "Milky Way");
    republic = new char[100];
    strcpy_s(republic,100, "Monroe");
}

Planet::Planet(const char* newPlanetName, const char* newPlanetSystem, const char* newRepublic)
{
    name = new char[strlen(newPlanetName) + 1];
    strcpy_s(name, strlen(newPlanetName) + 1, newPlanetName);

    planetSystem = new char[strlen(newPlanetSystem) + 1];
    strcpy_s(planetSystem, strlen(newPlanetSystem) + 1, newPlanetSystem);

    republic = new char[strlen(newRepublic) + 1];
    strcpy_s(republic, strlen(newRepublic) + 1, newRepublic);
}

Planet::Planet(const Planet& others)
{
    name = new char[strlen(others.name) + 1];
    strcpy_s(name, strlen(others.name) + 1, others.name);

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
        delete[] name;
        delete[] planetSystem;
        delete[] republic;
        name = new char[strlen(others.name) + 1];
        strcpy_s(name, strlen(others.name) + 1, others.name);

        planetSystem = new char[strlen(others.planetSystem) + 1];
        strcpy_s(planetSystem, strlen(others.planetSystem) + 1, others.planetSystem);

        republic = new char[strlen(others.republic) + 1];
        strcpy_s(republic, strlen(others.planetSystem) + 1, others.republic);
    }
    return *this;
}

void Planet::setName(const char* newName)
{
    delete[] name;
    name = new char[strlen(newName) + 1];
    strcpy_s(name, strlen(newName) + 1, newName);
}

void Planet::setPlanetSystem(const char* newPlanetSystem)
{
    delete[] planetSystem;
    planetSystem = new char[strlen(newPlanetSystem) + 1];
    strcpy_s(planetSystem, strlen(newPlanetSystem) + 1, newPlanetSystem);
}

void Planet::setRepublic(const char* newRepublic)
{
    delete[] republic;
    republic = new char[strlen(newRepublic) + 1];
    strcpy_s(republic, strlen(newRepublic) + 1, newRepublic);
}

char* Planet::getName()
{
    return name;
}

char* Planet::getPlanetSystem()
{
    return planetSystem;
}

char* Planet::getRepublic()
{
    return republic;
}

class Jedi {
private:
    char* name;
    enum rank { YOUNGLING, PADAWAN, JEDISERVICECORPS };
    double midichlorian;
    char* spicies;
    char* militaryRank;
    Planet planet;
public:
    void print();

    Jedi();
    Jedi(const Jedi&);
    Jedi(const char*, rank, double, const char*, const char*, Planet);

    Jedi& operator=(const Jedi&); 
    ~Jedi(); 

    void setName(const char*);
    void setRank(rank);
    void setMidichlorian(double);
    void setSpicies(const char*);
    void setMilitaryRank(const char*);
    void setPlanet(Planet);


    char* getName();
    rank getRank(); 
    double getMidichlorian();
    char* getSpicies();
    char* getMilitaryRank();
    Planet getPlanet();
};
void Jedi::print()
{
    std::cout << name << " " << " " << midichlorian << " " << spicies << " " << militaryRank << " "  << std::endl;
}
class Stormtrooper{
private:
    char* id;
    enum rank{RANK1, RANK2, RANK3};
    char* type; 
    Planet planet;
public:
    void print();

    Stormtrooper();
    Stormtrooper(const Stormtrooper&);
    Stormtrooper(const char*, rank,  const char*, Planet);

    Stormtrooper& operator=(const Stormtrooper&);
    ~Stormtrooper();

    void setId(const char*);
    void setRank(rank);
    void setType(const char*);
    void setPlanet(Planet);


    char* getId();
    rank getRank();
    char* getType();
    Planet getPlanet();
};
void Stormtrooper::print()
{
    std::cout << id << " "  << type << " " << std::endl;
}

int main()
{
    Planet p;
    Planet p1("Mars", "Milky Way", "Texas");
    Planet p3;
    p3.print();
    p3 = p1;
    p3.print();
   
    return 0;
    
}
