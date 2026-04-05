#include<iostream>
using namespace std;
class HollowPatt{
    public:
    void printpatt(){
        for(int i=1 ; i<= 5 ; i++){
            for(int j=4 ; j>=i ; j--){
                cout<<" ";
            }
            for(int k=1 ; k<=2*i-1 ; k++){
                if(k==1 || k==2*i-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<"\n";
        }
        for(int i=4 ; i>=1 ; i--){
            for(int j=4 ; j>=i ; j--){
                cout<<" ";
            }
            for(int k=1 ; k<=2*i-1 ; k++){
                if(k==1 || k==2*i-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<"\n";
        }
    }
};
int main(){
    HollowPatt hp;
    hp.printpatt();
    return 0;
}