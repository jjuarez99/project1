#include <iostream>
#include <cmath>
using namespace std;

int main (){
    double a,b,c;
    cout<< "a=";
    cin>>a;
    cout<< "b=";
    cin>>b;
    cout<< "c=";
    cin>>c;
    
    if(a==0){
        cout<< "a cannot be zero";
        return 0;
    }
    
    double d=b*b-4*a*c;
    double root1;
    double root2;
    double real;
    double imaginary;
    
    if (d>0){
        
        cout<<"two real solutions" << endl;
        root1 = (-b + sqrt(d))/(2*a);
        root2 = (-b - sqrt(d))/(2*a);
        
        cout<< "root1= " << root1 << endl;
        cout<< "root2= " << root2 << endl;
        
        return 0;
    }
    
    if(d==0){
        cout<<"one real solution" << endl;
        root1 = (-b)/(2*a);
        cout<< "root1= " << root1 << endl;
        return 0;
    }
    if(d<0){
        cout<<"two imaginary solutions" << endl;
        real = (-b)/(2*a);
        imaginary = sqrt(-d)/(2*a);
        cout<< "root1= " << real << "+" << imaginary << "i" << endl;
        cout<< "root2= " << real << "-" << imaginary << "i" << endl;
        return 0;
    }
}
    
    
