#include<iostream>
using namespace std;
class Pascals{
    int rows;
    public:
    void Pascalstri(){
        cout<<"Enter number of rows : ";
        cin>>rows;
        for(int i=0 ; i<rows ; i++){
            int a=1;
            for(int k=0 ; k<=rows-i-1 ; k++){
                cout<<" ";
            }
            for(int j=0 ; j<=i ; j++){
                cout<<a<<" ";
                a=a*(i-j)/(j+1);
            }
            cout<<endl;
        }
    }
};
int main(){
    Pascals p;
    p.Pascalstri();
    return 0;
}