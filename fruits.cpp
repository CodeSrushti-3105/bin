#include <iostream>
using namespace std;

class Apples{
   public:
   int apple;
   int apples(){
     cout<<"Enter number of apples"<<endl;
     cin>>apple;
     cout<<"Total apples"<<apple<<endl;
     return apple;
   }
};

class Mangoes{
   public:
   int mango;
   int mangoes(){
     cout<<"Enter number of mangoes"<<endl;
     cin>>mango;
     cout<<"Total apples"<<mango<<endl;
     return mango;
   }
};

class Fruits:public Apples,public Mangoes{
   public:
   int cal(int a,int b){
    cout<<"Total number of fruits"<<a+b<<endl;
   }
};

int main(){
    Fruits obj;
    obj.apples();
    obj.mangoes();
    
    int a = obj.apples();
    int b=obj.mangoes();
    obj.cal(a,b);
    return 0;



}