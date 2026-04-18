// Initial setup

#include <iostream>
#include <string>
using namespace std;


// class set up without constructor
class apexLegends
{
    // Attributes

    public:
        int amountPlayers;
        int smgAmount;
        int arAmount;
        

    
        void joinMatch() {

            cout << "Matchmaking..." << endl;
        }

        void displayAtt() {
            cout << amountPlayers << endl;
            cout << smgAmount << endl;
            cout << arAmount << endl;
        }
        

};

// Second class set up WITH constructor

class Ninja
{
    public:
        string rank;
        string name;
        int age;

        void displayAtt()
        {
            cout << name << endl;
            cout << rank << endl;
            cout << age << endl;
        }

    Ninja(string rank, string name, int age) // Constructor with parameteres
     {
        this->rank = rank;
        this->name = name;
        this->age = age;
     }
};


// Overloaded constructors
// Basically multiple constructors with different amount of parameters
class Color {
    public:
    string color1;
    string color2;
    string color3;

    Color(){}

    Color(string color1){
        this->color1 = color1;
    }

    Color(string color1, string color2){
        this->color1 = color1;
        this->color2 = color2;
    }

    Color(string color1, string color2, string color3){
        this->color1 = color1;
        this->color2 = color2;
        this->color3 = color3;
    }

    void attDisplay()
    {
        cout << color1 << endl;
        cout << color2 << endl;
        cout << color3 << endl;
    }
};



struct ytChannel {
    string name;
    int subsCount;

    ytChannel(string name, int subsCount){
        this->name = name;
        this->subsCount =  subsCount;
    }

    void attDisplay(){
        cout << name << endl;
        cout << subsCount << endl;
    }

};

// Operator overload #1
//              cout is type ostream
// Syntax (not including parenthesis): "type(&) Name"
// So on if having multiple parameters.

// Commented out due to not working with example #2
// Cannot have two definitions of the same operator overload--operator<<.
// With exact parameter but different returs (void & ostream)
// Compiler cannot tell diff between the two

// void operator<<(ostream& COUT, ytChannel& ytCh) {
//     COUT << "Name: " << ytCh.name << endl;
//     COUT << "Subscribers: " << ytCh.subsCount << endl;
// }

// Operator overload #2
// Prefered definition due to allowing operator chaining
ostream& operator<<(ostream& COUT, ytChannel& ytCh) {
    COUT << "Name: " << ytCh.name << endl;
    COUT << "Subscribers: " << ytCh.subsCount << endl;
    return COUT;
}

class inheritanceClass {};

// main function set up
int main() {

    // #1
    apexLegends firstVer; // No constructor

    firstVer.amountPlayers = 230;
    firstVer.arAmount = 5;
    firstVer.smgAmount = 8;

    firstVer.joinMatch();
    firstVer.displayAtt();

    // #2
    Ninja ninja1("Shinobi", "Mark", 25); // Object with constructor

    ninja1.displayAtt();

    // #3

    Color color;
    Color color1("green");
    Color color2("green", "black");
    Color color3("green", "black", "red");

    color.attDisplay();
    color1.attDisplay();
    color2.attDisplay();
    color3.attDisplay();
    
    // #4
    // Another way to declare objects: Copy Initialization
    // Mimics e.g. int x = value;
    // However, Google's interior style favors Direct Initialization: className objName();
    ytChannel x = ytChannel("Cab", 10000);
    ytChannel x2 = ytChannel("Cab2", 20000);
    cout << x << x2;


    return 0;
}





