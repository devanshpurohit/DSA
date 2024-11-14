#include<bits/stdc++.h>
using namespace std;
class area{
    private:
    double length;
    double breadth;
    public:
    void setdim(double l,double b){
length = l;
breadth=b;
    }
double getarea(){
    return length*breadth;
}    
};
int main(){
    area rectangle;
    double length;
    double breadth;
    cout<<"enter the value of length"<<endl;
    cin>>length;
    cout<<"enter the value of breadth"<<endl;
    cin>>breadth;
    rectangle.setdim(length,breadth);
    double area=rectangle.getarea();
    cout<<"area of rectangle is"<< area <<endl;

return 0;
}
