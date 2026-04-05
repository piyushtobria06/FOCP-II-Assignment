#include<iostream>
using namespace std;
class Sum{
    int m1[3][3] , m2[3][3] , count = 0;
    public:
    void matrices(){
        cout<<"Matrix 1"<<endl;
        for(int i=0 ; i<3 ; i++){
            for(int j=0 ; j<3 ; j++){
                cout<<"Enter the "<<i+1<<","<<j+1<<"element : ";
                cin>>m1[i][j];
            }
        }
        cout<<"Matrix 2"<<endl;
        for(int i=0 ; i<3 ; i++){
            for(int j=0 ; j<3 ; j++){
                cout<<"Enter the "<<i+1<<","<<j+1<<"element : ";
                cin>>m2[i][j];
            }
        }
        for(int i=0 ; i<3 ; i++){
            for(int j=0 ; j<3 ; j++){
                count =count+m1[i][j];
            }
        }
        for(int i=0 ; i<3 ; i++){
            for(int j=0 ; j<3 ; j++){
                count=count+m2[i][j];
            }
        }
        cout<<"The sum of All the elements of both matrices is "<<count;
    }
};
int main(){
    Sum s;
    s.matrices();
    return 0;
}