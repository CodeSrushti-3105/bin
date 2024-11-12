#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){
    string fullname;
    cout<<"Enter fullname"<<endl;
    getline(cin,fullname);
    string f,m,l;
    istringstream iss(fullname);
    iss>>f;
    iss>>m;
    iss>>l;
    cout<<f[0]<<"."<<m[0]<<"."<<l<<endl;
    return 0;


}