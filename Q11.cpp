#include<iostream>
using namespace std;
class Discount{
    private:
    int numItems , costItems;
    float totalCost;
    public:
    void getData();
    void CostaftDisc();
};
void Discount :: getData(){
    cout<<"Enter Number Of Items : ";
    cin>>numItems;
    cout<<"Enter Cost Of Item : ";
    cin>>costItems;
    totalCost=numItems*costItems;
}
void Discount :: CostaftDisc(){
    if(numItems>1000){
        cout<<"Total Amount After Discount : "<<0.9*totalCost;
    }
    else{
        cout<<"Total Amount : "<<totalCost;
    }
}
int main(){
    Discount d;
    d.getData();
    d.CostaftDisc();
    return 0;
}