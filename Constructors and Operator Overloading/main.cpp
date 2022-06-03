#include <iostream>
#include <string>
using namespace std;

class complex{
    public:
    int real, img;
    complex(){
        real=0;
        img=0;
    }
    complex(int r, int i){
        real = r;
        img = i;
    }
    complex operator +(complex c){
        complex temp;
        temp.real = real +c.real;
        temp.img = img + c.img;
        return temp;    
    }
    void print(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    friend ostream &operator << (ostream &output,complex &x);
    friend istream &operator >> (istream &input, complex &y);

};

ostream &operator << (ostream &output, complex &x){
    output << x.real << " + " << x.img<< "i"<< endl;
    return output;

}

istream &operator >>(istream &input, complex &y){
    input >> y.real>> y.img;
    return input;

}

int main(){
    complex c1(4, 2);
    complex c2(4, 8);
    complex c3;
    c3=c1+c2;
    c3.print();
    complex c4;
    cin >> c4;
    cout << c4;
}
