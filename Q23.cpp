#include<iostream>
using namespace std;
class Butterfly{
    public:
    void pattPrnt(){
        for(int i=1 ; i<=5 ; i++){
            for(int j=1 ; j<=i ; j++){
                cout<<"*";
            }
            for(int k=4 ; k>=i ; k--){
                cout<<" ";
            }
            for(int l=4 ; l>=i ; l--){
                cout<<" ";
            }
            for(int p=1 ; p<=i ; p++){
                cout<<"*";
            }
            cout<<"\n";
        }
        for(int i=1 ;  i<=4 ; i++){
            for(int j=4 ; j>=i ; j--){
                cout<<"*";
            }
            for(int k=1 ;k<=i ; k++ ){
                cout<<" ";
            }
            for(int l=1 ; l<=i ; l++){
                cout<<" ";
            }
            for(int p=4 ; p>=i ; p--){
                cout<<"*";
            }
            cout<<"\n";
        }
    }
};
int main(){
    Butterfly b;
    b.pattPrnt();
    return 0;
}