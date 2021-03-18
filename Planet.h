#pragma once
#include <iostream>

template <typename T>
void print(const T& obj)
{
   std::cout << obj << std::endl;
}

enum planetType
{
    ChthonianPlanet,
    CarbonPlanet,
    CorelessPlanet,
    DesertPlanet,
    GasDwarf,
    GasGiant,
    HeliumPlanet,
    IceGiant,
    IcePlanet,
    IronPlanet,
    LavaPlanet,
    OceanPlanet,
    Protoplanet,
    PuffyPlanet,
    SilicatePlanet,
    TerrestrialPlanet
};
class Planet
{
private:
    char* name;
    planetType PlanetType;
    char* planetSystem;
    char* republic;

public:
   
   
    friend std::ostream& operator<<(std::ostream& out, const Planet& obj)
    {
        out << obj.name << " ";
        switch (obj.PlanetType)
        {
        case ChthonianPlanet:
            out << "ChthonianPlanet";
            break;
        case CarbonPlanet:
            out << "CarbonPlanet";
            break;
        case CorelessPlanet:
            out << "CorelessPlanet";
            break;
        case DesertPlanet:
            out << "DesertPlanet";
            break;
        case GasDwarf:
            out << "GasDwarf";
            break;
        case GasGiant:
            out << "GasGiant";
            break;
        case HeliumPlanet:
            out << "HeliumPlanet";
            break;
        case IceGiant:
            out << "IceGiant";
            break;
        case IcePlanet:
            out << "IcePlanet";
            break;
        case IronPlanet:
            out << "IronPlanet";
            break;
        case LavaPlanet:
            out << "LavaPlanet";
            break;
        case OceanPlanet:
            out << "OceanPlanet";
            break;
        case Protoplanet:
            out << "Protoplanet";
            break;
        case PuffyPlanet:
            out << "PuffyPlanet";
            break;
        case SilicatePlanet:
            out << "SilicatePlanet";
            break;
        case TerrestrialPlanet:
            out << "TerrestrialPlanet";
            break;
        default:
            break;
        }
        out << obj.planetSystem << " " << obj.republic << std::endl;
        return out;
    }
    Planet();
    Planet(const Planet&);
    Planet(const char*, planetType, const char*, const char*);

    Planet& operator=(const Planet&);
    ~Planet();

    void setName(const char*);
    void setPlanetType(planetType);
    void setPlanetSystem(const char*);
    void setRepublic(const char*);

    char* getName();
    planetType getPlanetType();
    char* getPlanetSystem();
    char* getRepublic();
};
