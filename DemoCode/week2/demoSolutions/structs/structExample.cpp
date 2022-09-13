#include <iostream>
using namespace std;

struct Pet{
    //scientific name, legs, tail
    string scientificName;
    int legs;
    bool tail;

    void setUtterance(string utter){
        utterance = utter;
    }
    string getUtterance(){
        return utterance;
    }


    private:
        string utterance;
    
};

int main(){
    //create dog struct
   struct Pet dog;
    //direct access
    dog.legs = 4;
    dog.tail = true;
    dog.scientificName = "Canis Lupus Familiaris";
    
    dog.setUtterance = "woof";
    cout << dog.legs << endl;
    cout << dog.getUtterance <<endl;
    //use the struct to construct a snake struct and set all properties
    //and print "I am species serpentes. I say spspspspsps" using the struct
   struct Pet snake;
   snake.legs = 0;
   snake.tail = true;
   snake.scientificName = "serpentes"
   snake.utterance("spspspspspsps");
    return 0;
}