#include<iostream>
using namespace std;
class Sub{
    int marks[3][5];
    public:
    void mark(){
        for(int i=0 ; i<3 ; i++){
            for(int j=0 ; j<5 ; j++){
                cout<<"Enter the marks of Student "<<i+1<<" in "<<j+1<<" Subject : ";
                cin>>marks[i][j];
            }
        }
        cout<<"The Marks of 1st Student in 3rd subject is : "<<marks[0][2]<<endl;
        cout<<"The Marks of 3rd Student in 5th subject is : "<<marks[2][4]<<endl;
    }
};
int main(){
    Sub s;
    s.mark();
    return 0;
}