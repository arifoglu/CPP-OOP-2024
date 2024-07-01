#include <iostream>
using namespace std;

class Instrument{
public:
   virtual void makesound() = 0;
};

class Accordion :public Instrument{

public:
   void makesound(){
    cout << "Accordion playing...\n";
   }
};
class Piano : public Instrument{
public:
   void makesound(){
    cout << "Piano playing...\n";
   }
};

int main(){
    Instrument* i1 = new Accordion();
    i1->makesound();
    
    Instrument* i2 = new Piano();
    i2->makesound();

    return 0;
}