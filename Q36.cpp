#include<iostream>
using namespace std;
class Multi{
    private:
    int mat1[3][3];
    int mat2[3][3];
    int mat3[3][3];
    public:
    void Matrix(){
        cout<<"Matrix 1"<<endl;
        for(int i=0 ; i<3 ; i++){
            for(int j=0 ; j<3 ; j++){
                cout<<"Enter the "<<i+1<<","<<j+1<<" Element : ";
                cin>>mat1[i][j];
            }
        }
        cout<<"Matrix 2"<<endl;
        for(int i=0 ; i<3 ; i++){
            for(int j=0 ; j<3 ; j++){
                cout<<"Enter the "<<i+1<<","<<j+1<<" Element : ";
                cin>>mat2[i][j];
            }
        }
    }
    void Matmulti(){
        for(int i=0 ; i<3 ; i++){
            for(int j=0 ; j<3 ; j++){
                mat3[i][j]=0;
                for(int k=0 ; k<3 ; k++){
                    mat3[i][j]+=mat1[i][k]*mat2[k][j];
                }
            }
        }
    }
    void disp(){
        cout<<"Matrix 1"<<endl;
        for(int i=0 ; i<3 ; i++){
            for(int j=0 ; j<3 ; j++){
                cout<<"\t"<<mat1[i][j];
            }
            cout<<endl;
        }
        cout<<"Matrix 2"<<endl;
        for(int i=0 ; i<3 ; i++){
            for(int j=0 ; j<3 ; j++){
                cout<<"\t"<<mat2[i][j];
            }
            cout<<endl;
        }
        cout<<"Matrix 3"<<endl;
        for(int i=0 ; i<3 ; i++){
            for(int j=0 ; j<3 ; j++){
                cout<<"\t"<<mat3[i][j];
            }
            cout<<endl;
        }
    }
};
int main(){
    Multi m;
    m.Matrix();
    m.Matmulti();
    m.disp();
    return 0;
}