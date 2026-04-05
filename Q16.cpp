#include<iostream>
using namespace std;
class Prime{
    private:
    int num;
    public:
    void getData(){
        cout<<"Enter Number : ";
        cin>>num;
    }
    void chkPrime(){
        if(num<=1){
            cout<<"Not Prime";
            return;
        }
        int x=1;
        for(int i=2 ; i<num/2 ; i++){
        if(num%i==0){
            x=0;
        }
        }
        if(x==1){
            cout<<"Prime Number";
        }
        else{
            cout<<"Not Prime Number";
        }
    }
};
int main(){
    Prime p;
    p.getData();
    p.chkPrime();
    return 0;
}