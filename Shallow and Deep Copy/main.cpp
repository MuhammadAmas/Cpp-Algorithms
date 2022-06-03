#include <iostream>
using namespace std;
class demo{
    public:
    int a,*b;
    demo(){
        a = 0;
        b = new int(0);
        b = 0;
    }
    demo(int x, int y){
        a=x;
        b= new int();
        *b = y;
    }
    
    // for deep copy
    demo (demo &obj){
        a = obj.a;
        b = new int();
        *b = *(obj.b);

    }
    void show(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<*b<<endl;
    }

    void update(){
        a = a+1;
        *b = *b+1;
    }
};

int main(){
    demo d1(10,20);
    demo d2(d1);

    d1.show();
    d2.show();
    d1.update();
    d2.show();
    
    //For deep copy
    // d1.show();
    // d2.show();
    // d1.update();
    // d2.show();
}