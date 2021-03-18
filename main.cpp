#include<iostream>
#include "Planet.h"
#include "Jedi.h"
#include "Stormtrooper.h"
int main()
{
    Planet p1("Mars",Protoplanet,"Milky Way", "Texas");
    Planet p3;
    p3 = p1;
    print(p3);
    Jedi j1("Yoda",Youngling, 4.5, "blabla", "blabla", p1);
    print(j1);
    Stormtrooper s1("bla", Cadet, "bla", p1);
    print(s1);
    return 0;
}