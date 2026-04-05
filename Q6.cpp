#include<iostream>
using namespace std;
class Office{
    private:
    int Totalemp , Basicsal , salaftbon;
    public:
    void Salaftbonus();
};
void Office :: Salaftbonus(){
    cout<<"Enter Total Employee's : ";
    cin>>Totalemp;
    cout<<"Enter Basic Salary : ";
    cin>>Basicsal;
    cout<<"Bonus Is : "<<Basicsal*(12.0/100.0)<<endl;
    salaftbon=Basicsal+Basicsal*(12.0/100.0);
    cout<<"Salary After Bonus : "<<salaftbon<<endl;
    cout<<"Net Salary : "<<salaftbon*Totalemp;
}
int main(){
    Office o;
    o.Salaftbonus();
    return 0;
}