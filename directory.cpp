#include<iostream>
using namespace std;

class Directory{
   char name[50];
   char address[200];
   int tele;
   int mobile;
   char head[50];

   public:
   void setInfo(){
    cout<<"Name of person"<<endl;
    cin.ignore();
    cin.getline(name,50);

    cout<<"Address"<<endl;
    cin.getline(address,50);

    cout<<"Telephone Number"<<endl;
    cin>>tele;

    cout<<"Mobile Number"<<endl;
    cin>>mobile;

    cout<<"Name of head"<<endl;
    cin.ignore();
    cin.getline(head,50);
}

     void getInfo(){
        cout<<"------Directory Entry-------"<<endl;
        cout<<"Name of Person"<<name<<endl;
        cout<<"Address"<<address<<endl;
        cout<<"Telephone number"<<tele<<endl;
        cout<<"Mobile Number"<<mobile<<endl;
        cout<<"Head of family"<<head<<endl;

     }
};

     int main(){
        Directory details;
        details.setInfo();
        details.getInfo();
        return 0;
     }
