#include<iostream>
using namespace std;
class Student{
    int sub1 , sub2 , sub3 , sub4 , sub5 , tot ;
    float percent;
    public:
    void getData(){
        cout<<"Enter marks for first subject : ";
        cin>>sub1;
        cout<<"Enter marks for second subject : ";
        cin>>sub2;
        cout<<"Enter marks for third subject : ";
        cin>>sub3;
        cout<<"Enter marks for fourth subject : ";
        cin>>sub4;
        cout<<"Enter marks for fifth subject : ";
        cin>>sub5;
    }
    void total(){
        tot = sub1 + sub2 + sub3 + sub4 + sub5;
        cout<<"The Total Amount Is : "<<tot<<"\n";
    }
    void percentage(){
        percent = (tot/5);
        cout<<"Percenatage is : "<<percent;
    }
};
int main(){
    Student s;
    s.getData();
    s.total();
    s.percentage();
    return 0;
}