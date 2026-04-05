#include<iostream>
using namespace std;
class Transpose{
    int matrix[3][3];
    int tmatrix[3][3];
    public:
    void getData(){
        for(int i=0 ; i<3 ; i++){
            for(int j=0 ; j<3 ; j++){
                cout<<"Enter the "<<i+1<<","<<j+1<<" element :";
                cin>>matrix[i][j];
            }
        }
    }
    void trans(){
        for(int i=0 ; i<3 ; i++){
            for(int j=0 ; j<3 ; j++){
                tmatrix[j][i]=matrix[i][j];
            }
        }
    }
    void disp(){
        cout<<"Matrix "<<endl;
        for(int i=0 ; i<3 ; i++){
            for(int j=0 ; j<3 ; j++){
                cout<<"\t"<<matrix[i][j];
            }
            cout<<"\n";
        }
        cout<<"Transpose Matrix "<<endl;
        for(int i=0 ; i<3 ; i++){
            for(int j=0 ; j<3 ; j++){
                cout<<"\t"<<tmatrix[i][j];
            }
            cout<<"\n";
        }
    }
};
int main(){
    Transpose t;
    t.getData();
    t.trans();
    t.disp();
    return 0;
}