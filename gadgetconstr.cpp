#include <iostream>

using namespace std;

class gadget { // The class
private: // Access specifier
string name; // Attribute
string brand; // Attribute
float price; 

public:
// Attribute
gadget(string x, string y, float z);

void displayGadgetInfo(); // Constructor declaration
};


// Constructor definition outside the class
gadget::gadget(string x, string y, float z) {
name = x;
brand = y;
price = z;
}

void gadget::displayGadgetInfo() {
  cout << "The gadget name is:" << name << endl;
  cout << "The gadget brand is:" << brand << endl;
  cout << "The gadget price is: $" << price << endl;
}
int main() {

gadget gadObj1( "Pegasus", "Beyblade", 13.99);
gadget gadObj2( "Cometas", "Digitals", 14.78);

gadObj1.displayGadgetInfo();
gadObj2.displayGadgetInfo();

return 0;

}
