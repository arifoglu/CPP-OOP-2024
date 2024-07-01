#include <iostream>
#include <string>
using namespace std;

class Car{
    private:
        string energy;
    public:
        string name;
        string model;
        string color;

        string setandgetEnergy(string energy_choise){
            energy = energy_choise;

            return energy; 
        }
        Car(string names,string models,string colors){
            name = names;
            model = models;
            color = colors;
        }
        void show(){
          cout << name << " " <<model <<" "<<color<<" "<<endl;
        }
};

int main(){
    Car select1("BMW","i5","blue");
    select1.show();
    select1.setandgetEnergy("electricity");
    

    return 0;
}