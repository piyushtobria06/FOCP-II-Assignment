#include<iostream>
using namespace std;
class Disc{
    private:
    int Item_num , Quantity , Unit_prc;
    float aftdisc;
    public:
    void Discount();
};
void Disc :: Discount(){
    cout<<"Enter Item Number : ";
    cin>>Item_num;
    cout<<"Enter Quantity : ";
    cin>>Quantity;
    cout<<"Enter Unit Price :";
    cin>>Unit_prc;
    cout<<"Amount Before Discount : "<<Quantity*Unit_prc<<endl;
    aftdisc= (80.0/100.0)*Quantity*Unit_prc;
    cout<<"Amount After Discount is : "<<aftdisc;
}
int main(){
    Disc d;
    d.Discount();
    return 0;
}