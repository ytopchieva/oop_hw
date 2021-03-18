#pragma once
#include<iostream>
#include "Planet.h"

enum Rank {
    Youngling,
    Padwan,
    JediKnight,
    JediConsular,
    JediGuardian,
    JediSentinel,
    Jedimaster,
    JediCouncilMember,
    MasterOfTheOrder,
    Grandmaster

};

class Jedi {
private:
    char* name;
    Rank rank;
    double midichlorian;
    char* spicies;
    char* militaryRank;
    Planet planet;
public:
    friend std::ostream& operator<<(std::ostream& out, const Jedi& obj) {

        out << obj.name << " ";
        switch (obj.rank)
        {
        case Youngling:
            out << "Youngling";
            break;
        case Padwan:
            out << "Padwan";
            break;
        case JediKnight:
            out << "JediKnight";
            break;
        case JediConsular:
            out << "JediConsular";
            break;
        case JediGuardian:
            out << "JediGuardian";
            break;
        case JediSentinel:
            out << "JediSentinel";
            break;
        case Jedimaster:
            out << "Jedimaster";
            break;
        case JediCouncilMember:
            out << "JediCouncilMember";
            break;
        case MasterOfTheOrder:
            out << "MasterofTheOrder";
            break;
        case Grandmaster:
            out << "Grandmaster";
            break;
        default:
            break;
        }

        out << obj.midichlorian << " " << obj.spicies << " " << obj.militaryRank;
        out<< obj.planet << std::endl;
        return out;
    }
     
    Jedi();
    Jedi(const Jedi&);
    Jedi(const char*, Rank, double, const char*, const char*, Planet);

    Jedi& operator=(const Jedi&);
    ~Jedi();

    void setName(const char*);
    void setRank(Rank);
    void setMidichlorian(double);
    void setSpicies(const char*);
    void setMilitaryRank(const char*);
    void setPlanet(Planet);


    char* getName();
    Rank getRank();
    double getMidichlorian();
    char* getSpicies();
    char* getMilitaryRank();
    Planet getPlanet();
};