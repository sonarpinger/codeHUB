#include <iostream>
// #include <string>
using namespace std;

class Pet{
    int legs;
    bool tail;
    string species, name;

    public:
    int getLegs(){
        return legs;
    }
    bool hasTail(){
        return tail;
    }
    string getSpecies(){
        return species;
    }
    string getName(){
        return name;
    }

    void setTail(bool hasTail){
        tail = hasTail;
    }

    void setLegs(int numLegs){
        legs = numLegs;
    }

    void setName(string setName){
        name = setName;
    }

    void setSpecies(string setSpecies){
        species = setSpecies;
    }
};


int main(){
    Pet newpet;
    newpet.setLegs(4);
    newpet.setSpecies("Canine Lupus Familiaris");
    newpet.setName("Doug");

    cout << newpet.getName() << " is a " << newpet.getSpecies() << " with " << newpet.getLegs() << " legs.";
}