#include <iostream>
using namespace std;

int main(){
    int marks;
    string grade;  // Changed to string to handle words like "Pass" and "fail"
    
    cout << "Enter your marks:" << endl;
    cin >> marks;

    if(marks >= 91 && marks <= 100){
        grade = "O";
    }
    else if(marks >= 81 && marks <= 90){
        grade = "A";
    }
    else if(marks >= 71 && marks <= 80){
        grade = "B";
    }
    else if(marks >= 61 && marks <= 70){
        grade = "C";
    }
    else if(marks >= 51 && marks <= 60){
        grade = "D";
    }
    else if(marks >= 41 && marks <= 50){
        grade = "Pass";
    }
    else {
        grade = "fail";  // This is for marks below 40
    }

    cout << "Your grade: " << grade << endl;
    return 0;
}
