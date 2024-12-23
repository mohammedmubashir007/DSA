#include<iostream>
using namespace std;

int main(){

int someVariable;

cin>>someVariable;

switch (someVariable)
{
case 1:
    cout<<"this is case 1";
    break;
    case 2:
    cout<<"this is case 2";
    break;
    case 3:
    cout<<"this is case 3";
    break;

    default:
    cout<<"Default";
    break;
}

    return 0;
}