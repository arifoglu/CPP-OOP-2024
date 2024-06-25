#include <iostream>
#include <list>
using namespace std;

class Channel{

  public: 
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

    // create a constructor
    Channel(string name,string ownername){
      Name = name;
      OwnerName = ownername;
      SubscribersCount = 0;
    }
    void getInfo(){
       cout << "Name : " << Name <<endl;
       cout << "OwnerName : " << OwnerName <<endl;
       cout << "SubscribersCount: " << SubscribersCount <<endl;
       for(string Videos : PublishedVideoTitles){
        cout << Videos <<endl;
       }
    }

};

int main(){
   Channel chnl("Code","AA");

   chnl.PublishedVideoTitles.push_back("first");
   chnl.PublishedVideoTitles.push_back("second");
   chnl.PublishedVideoTitles.push_back("third");
   
   Channel chnl2("Songs","BB");
   chnl2.PublishedVideoTitles.push_back("baby shark");
   chnl2.PublishedVideoTitles.push_back("titanic");
   chnl2.PublishedVideoTitles.push_back("gladiator");

   chnl.getInfo();
   chnl2.getInfo();
   return 0;
}