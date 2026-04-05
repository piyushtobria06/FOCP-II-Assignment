#include<iostream>
using namespace std;
class triangle{
    private:
    int side1 , side2 , side3;
    public:
    void getData();
    void chkTri();
};
void triangle :: getData(){
    cout<<"Enter Side 1 : ";
    cin>>side1;
    cout<<"Enter Side 2 : ";
    cin>>side2;
    cout<<"Enter Side 3 : ";
    cin>>side3;
}
void triangle :: chkTri(){
    if(side1==side2 && side2==side3 && side1==side3){
        cout<<"Equilateral Traingle";
    }
    else if(side1==side2 && side2!=side3 || side2==side3 && side3!=side1 || side3==side1 && side1!=side2){
        cout<<"Isoscles Triangle";
    }
    else{
        cout<<"Scalene Triangle";
    }
}
int main(){
    triangle t;
    t.getData();
    t.chkTri();
    return 0;
}