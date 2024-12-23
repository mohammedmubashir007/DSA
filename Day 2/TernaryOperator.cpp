#include<iostream>
using namespace std;

int main(){

int marks;
cin>>marks;
string PassOrFail;

// if(marks >= 33){
//     PassOrFail = "pass";
// }
// else{
//     PassOrFail = "fail";
// }

PassOrFail = marks >= 33 ? "pass":"fail";

cout<<PassOrFail;

    return 0;
}