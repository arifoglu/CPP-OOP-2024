#include <iostream>
#include <list>
using namespace std;

class Channel{

private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
protected:
    string OwnerName;       
public: 
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
    void Subscribe(){
      SubscribersCount++;
    }
    void UnSubscribe(){
      if(SubscribersCount > 0)
             SubscribersCount--;
    }
    void PublishedVideo(string title){
      PublishedVideoTitles.push_back(title);
    }
};

class Channel2 : public Channel {

  public:
      Channel2(string name,string ownername) : Channel(name,ownername){
      }

  void practice(){
    cout << OwnerName << " is practicing .\n";
  }    
};

int main(){
    
    Channel2 kids("Amy kitchen","Amy"); 
    kids.practice();
    Channel2 youngs("John kitchen","John");
    youngs.practice(); 

   return 0;
}