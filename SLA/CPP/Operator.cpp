#include<iostream>
using namespace std;
#include "Operator.h"

int main(){

    int a, b;
    cout<<"Enter a and b :";
    cin>>a>>b;
    cout<<endl;

    Operator o1(a,b);
    o1.Logical(a,b);
    o1.Unary(a);
    o1.Ternary(a,b);
    o1.Assignment(a);
}