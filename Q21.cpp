#include<iostream>
using namespace std;
class Hollowpatt{
    private:
    int a = 8 , b = 8;
    public:
    void printPattern(){
        for(int i=1 ; i<=a ; i++){
            for(int j = 1 ; j<=b ; j++ ){
                if(i==1 || j==1 || i==a || j==b){
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
    Hollowpatt hp;
    hp.printPattern();
    return 0;
}