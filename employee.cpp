#include <iostream>
using namespace std;

class Employee{
   private:
   int salary;
   int workhoursperday;

   public:
   void getInfo(int s,int hours){
    salary=s;
    workhoursperday=hours;

   }

   void AddSal(){
    if(salary < 50000){
        salary+=10000;
    }
   }
   void AddWork(){
    if(workhoursperday>6){
        salary+=1000;
    }
   }
   void DisplaySal(){
   cout<<"Final salary is"<<salary<<endl;
   }

};

int main(){
    Employee emp;
    int salary,hours;
    cout<<"Enter your salary"<<endl;
    cin>>salary;
    cout<<"enter your hours"<<endl;
    cin>>hours;
    emp.getInfo(salary,hours);
    emp.AddSal();
    emp.AddWork();
    emp.DisplaySal();
    return 0;
    
}