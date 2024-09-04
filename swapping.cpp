#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 10;

    cout<<"Before swap: a = "<<a<<", b = "<<b<<endl;

    int temporary = a;
    a = b;
    b = temporary;

    cout<<"After swap: a = "<<a<<", b = "<<b<<endl;

    return 0;
}
