#include <iostream>
#include<cmath>
using namespace std;

int factorial(int num1){
    int fact=1;
    for(int i=1;i<=num1;i++){
        fact*=i;
        return fact;
    }

}

int main(){
  int choice,num1,num2; 
cout<<"Enter num1"<<endl;
cin>>num1;
cout<<"Enter your choice!"<<endl;
cin>>choice;

if(choice == 1){
    cout<<"Square of"<<num1<<"is"<<num1*num1<<endl;
}
if(choice == 2){
    cout<<"cube of :"<<num1<<num1*num1*num1<<endl;
}
if(choice == 3){
    cout<<"squareroot of :"<<num1<<sqrt(num1)<<endl;
}
if(choice == 4){
    cout<<"factorial of :"<<num1<<factorial(num1)<<endl;
}
if(choice == 5){
    cout<<"Enter num2"<<endl;
    cin>>num2;
    cout<<"sum is"<<num1+num2<<endl;
}
if(choice == 6){
    cout<<"Enter num2"<<endl;
    cin>>num2;
    cout<<"product is :"<<num1*num2<<endl;
}


}
