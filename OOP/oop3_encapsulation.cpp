#include <iostream>
#include <list>
using namespace std;

class Channel{

private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

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

int main(){
   Channel chnl("Code","AA");

   chnl.PublishedVideo("first");
   chnl.PublishedVideo("second");
   chnl.PublishedVideo("third");
   chnl.Subscribe();
   chnl.UnSubscribe();
   chnl.UnSubscribe();
   chnl.UnSubscribe();
   chnl.getInfo();

   return 0;
}