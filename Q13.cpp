#include<iostream>
#include<cmath>
using namespace std;
class roots{
    private :
    int a , b , c ;
    float d;
    public:
    void getData();
    void discriminant();
    void ans();
};
void roots :: getData(){
    cout<<"Input As Per This Equation ax^2 + bx + c=0"<<endl;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"Enter c : ";
    cin>>c;
    d=b*b-4*a*c;
}
void roots :: discriminant(){
    if(d==0){
        cout<<"Real & Equal Roots"<<endl;
    }
    else if(d>=0){
        cout<<"Real & Unequal Roots"<<endl;
    }
    else{
        cout<<"Imaginary Roots"<<endl;
    }
}
void roots :: ans(){
    if(d<0){
        cout<<"Roots Imaginary - Error";
    }
    else{
        cout<<"The Roots Are : "<<(-b+sqrt(d))/2*a<<" & "<<(-b-sqrt(d))/2*a;
    }
}
int main(){
    roots r;
    r.getData();
    r.discriminant();
    r.ans();
    return 0;
}