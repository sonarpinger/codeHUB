#include <iostream>
using namespace std;


int main(){
    struct Pet dog;
    //direct access
    dog.legs = 4;
    dog.tail = false;
    dog.scientificName = "canis lupus familiaris";
    //direct access (no bueno)
    //dog.utterance = "schlorp";
    //cout << "I am a dog. I say " << dog.utterance << endl;
    //indirect access using function
    cout << "I am a dog. I say ";
    dog.printUtterance("woof");
    cout << endl;

    //use the struct to construct a snake struct and set all properties
    //and print "I am species serpentes. I say spspspspsps" using the struct
    struct Pet snake;
    snake.legs = 0;
    snake.tail = true;
    snake.scientificName = "serpentes";


    cout << "I am species " << snake.scientificName << ". I say ";
    snake.printUtterance("spspspsps");
    cout <<  endl;

}