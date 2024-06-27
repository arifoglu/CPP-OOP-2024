#include <iostream>
#include <list>
using namespace std;

class Channel{

  public: 
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

};

int main(){
   Channel chnl;

   chnl.Name = "Code";
   chnl.OwnerName = "AA";
   chnl.SubscribersCount = 1200;
   chnl.PublishedVideoTitles = {"first","second","third"};
 
   cout << "Name : " << chnl.Name <<endl;
   cout << "OwnerName : " << chnl.OwnerName <<endl;
   cout << "SubscribersCount: " << chnl.SubscribersCount <<endl;
   for(string Videos : chnl.PublishedVideoTitles){
    cout << Videos <<endl;
   }
   return 0;
}