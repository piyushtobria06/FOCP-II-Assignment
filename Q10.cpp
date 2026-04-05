#include<iostream>
using namespace std;
class leap{
    private:
    int year;
    public:
    void leapChk();
};
void leap :: leapChk(){
    cout<<"Enter Year : ";
    cin>>year;
    if(year%400==0 || year%4==0 && year%100!=0){
        cout<<"Leap Year - 29 Days";
    }
    else{
        cout<<"Not A Leap Year - 28 Days";
    }
}
int main(){
    leap l;
    l.leapChk();
    return 0;
}