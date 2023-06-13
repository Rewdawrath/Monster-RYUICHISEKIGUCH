#include <string>

std::string nameList[] = {
"Gloomflayer",
"Kraken",
"Wraith",
"Wrath",
"Afanc",
"Alphyn",
"Amphiptere",
"Basilisk",
"Bonnacon",
"Chestorius",
"Dinosaur",
"Dragon",
"Enfield",
"Beast",
"Griffin",
"Hippogriff",
"Mandragora",
"Manticore",
"Melusine",
"Mosasaur",
"Ouroboros",
"Pterosaur",
"Questing Beast",
"Salamander",
"Woodwose",
"Yale",
"Ypotryll",

};

std::string getRandomName()
{
    return nameList[rand() % 28];
}