#include <iostream>
#include <string>
using namespace std;

class Humans{

    string nation;
    string language;
    int avarage_salary;
    
public:
    Humans(string input_nation,string input_language,int input_salary){
        nation = input_nation;
        language = input_language;
        avarage_salary = input_salary;
    }  
    void print_infos(){
       cout << "Nationality :" << nation <<endl;
       cout << "Language :" << language <<endl;
       cout << "Salary avarage  :" << avarage_salary <<endl;
    }  
};

int main(){
    Humans suisse("suisse","french",5000);
    Humans german("german","german",3000);

    suisse.print_infos();
    german.print_infos();

    return 0;
}