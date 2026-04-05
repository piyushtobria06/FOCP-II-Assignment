#include<iostream>
using namespace std;
class Avg{
    private:
    int marks1 , marks2 , marks3;
    float average;
    public:
    void getData();
    void avg();
};
void Avg::getData(){
    cout<<"Enter marks1 ";
    cin>>marks1;
    cout<<"Enter marks2 ";
    cin>>marks2;
    cout<<"Enter marks3 ";
    cin>>marks3;
}
void Avg ::avg(){
    cout<<"Average of these Marks is ";
    average=(marks1+marks2+marks3)/3;
    cout<<average;
}
int main(){
    Avg a1;
    a1.getData();
    a1.avg();
    return 0;
}
