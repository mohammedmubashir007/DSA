#include<iostream>
using namespace std;

int main(){


int a = 9;
int b = 8;

bool x = a > b;
bool y = a>=b;
bool z = a==b;
bool f = a!=b;

bool g = (a==b) & (a>b);
bool h = (a==b) || (a>b);
bool i = !(a==b);

cout<<g<<endl;
cout<<h<<endl;

// cout<<x<<endl;
    return 0;
}