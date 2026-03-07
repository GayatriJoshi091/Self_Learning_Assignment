
#include<iostream>
using namespace std;


class Operator{

    int a,b;

    public:
    Operator();
    Operator(int, int);
    void Logical(int, int);
    void Unary(int);
    void Ternary(int, int);
    void Assignment(int);
};

Operator :: Operator(int a, int b){
    this->a = a;
    this->b = b;
}

void Operator :: Logical(int a, int b){ 
    cout<<"Logical Operator"<<endl<<endl;

    cout<<"a && b = "<<(a && b)<<endl;
    cout<<"a || b = "<<(a || b)<<endl;
    cout<<"!a = "<<(!a)<<endl;
    cout<<"------------------"<<endl<<endl;
}

void Operator :: Unary(int a){
    cout<<"Unary Operator"<<endl<<endl;
    cout<<"a++ = "<<a++<<endl;
    cout<<"++a = "<<++a<<endl;
    cout<<"a-- = "<<a--<<endl;
    cout<<"--a = "<<--a<<endl;
    cout<<"------------------"<<endl<<endl;
}

void Operator :: Ternary(int a, int b){
    cout<<"Ternary Operator"<<endl<<endl;

    int max = (a>b) ? a : b;
    cout<<"Maximun Number between "<<a<<" and "<< b <<" is "<<max<<endl<<endl;
    cout<<"------------------"<<endl<<endl;
}

void Operator :: Assignment(int a){
    cout<<"Assignment Operator"<<endl<<endl;
    a+=1;
    cout<<"a+=1 = "<<a<<endl;
    a-=1;
    cout<<"a-=1  = "<<a<<endl;
    a*=1;
    cout<<"a*=1  = "<<a<<endl;
    a/=1;
    cout<<"a/=1  = "<<a<<endl;

    cout<<"------------------"<<endl<<endl;
}