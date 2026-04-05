#include<iostream>
using namespace std;
class NLoop{
    private:
    int rows=3 , columns=5 ;
    public :
    void nestedLoop(){
        for(int i=1 ; i <=rows ; i++){
            for(int j=1 ; j<=columns ; j++){
                cout<<j;
            }
            cout<<"\n";
        }
    }
};
int main(){
    NLoop nl;
    nl.nestedLoop();
    return 0;
}