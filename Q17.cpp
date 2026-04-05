#include<iostream>
#include<cmath>
using namespace std;
class Number{
    private:
    int num1 , num2 = 0;  
    public:
    void getData(){
        cout<<"Enter Number : ";
        cin>>num1;
    }
    void chkPerfect(){
        for(int i=1 ; i<num1 ; i++){
            if(num1%i==0){
                num2=num2+i;
            }
            else{
                continue;
            }
        }
        if(num1==num2){
            cout<<"Perfect Number "<<endl;
        }
        else{
            cout<<"Not Perfect Number "<<endl;
        }
    }
    void chkArmstrong(){
        int num3 =0 ,numcount=0 ,temp=0 , var;
        num3=num1;
        while(num3>0){
            num3=num3/10;
            numcount+=1;
        }
        num3=num1;
        while(num3>0){
            var=num3%10;
            temp=temp+pow(var,numcount);
            num3=num3/10;
        }
        if(temp==num1){
            cout<<"Armstrong Number"<<endl;
        }
        else{
            cout<<"Not Armstrong Number"<<endl;
        }

    }
};
int main(){
    Number n;
    n.getData();
    n.chkPerfect();
    n.chkArmstrong();
    return 0;
}