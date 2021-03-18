#pragma once
#include "Planet.h"
enum sRank { 
    Cadet,
    Private,
    LanceCorporal,
    Corporal,
    Sergeant,
    StaffSergeant,
    MasterSergeant,
    OfficerCadet,
    Lieutenant,
    Captain,
    Major,
    Colonel,
    Commander
};
class Stormtrooper {
private:
    char* id;
    sRank rank;
    char* type;
    Planet planet;
public:
    friend std::ostream& operator<<(std::ostream& out, const Stormtrooper& obj) {
		out << obj.id << " " <<obj.type;
		switch (obj.rank)
		{
		case Cadet:
			out << "Cadet";
			break;
		case Private:
			out << "Private";
			break;
		case LanceCorporal:
			out << "LanceCorporal";
			break;
		case Corporal:
			out << "Corporal";
			break;
		case Sergeant:
			out << "Sergeant";
			break;
		case StaffSergeant:
			out << "StaffSergeant";
			break;
		case MasterSergeant:
			out << "MasterSergean";
			break;
		case OfficerCadet:
			out << "OfficerCadet";
			break;
		case Lieutenant:
			out << "Lieutenant";
			break;
		case Captain:
			out << "Captain";
			break;
		case Major:
			out << "Major";
			break;
		case Colonel:
			out << "Colonel";
			break;
		case Commander:
			out << "Commander";
			break;
		default:
			break;
		}
		out <<obj.planet << std::endl;
        return out;
    }

    Stormtrooper();
    Stormtrooper(const Stormtrooper&);
    Stormtrooper(const char*, sRank, const char*, Planet);

    Stormtrooper& operator=(const Stormtrooper&);
    ~Stormtrooper();

    void setId(const char*);
    void setRank(sRank);
    void setType(const char*);
    void setPlanet(Planet);


    char* getId();
    sRank getRank();
    char* getType();
    Planet getPlanet();
};

