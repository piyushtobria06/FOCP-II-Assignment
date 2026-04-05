#include<iostream>
using namespace std;
class Palindrome{
    private:
    int num , temp1 , temp2 ,temp3=0 ;
    public:
    void chkPal(){
        cout<<"Enter ID : ";
        cin>>num;
        temp1=num;
        while(temp1>0){
            temp2=temp1%10;
            temp3=temp3*10+temp2;
            temp1=temp1/10;
        }
        if(temp3==num){
            cout<<"Palindrome ID";
        }
        else{
            cout<<"Not Palindrome ID";
        }
    }
};
int main(){
    Palindrome p;
    p.chkPal();
    return 0;
}