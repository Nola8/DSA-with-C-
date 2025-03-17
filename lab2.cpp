#include <iostream>
using namespace std;
/*void duplicate (int& a, int& b, int& c){
    a *= 2;
    b *= 2;
    c *= 2;
}*/
void duplicate(int a , int b, int c){
    a *= 2;
    b *= 2;
    c *= 2;
}
void odd(int x);
void even(int x);
string concatenate(const string& a, const string& b){
    return a+b;
}
int x;

int main(){
    /*int x  =1 , y=3, z=7;
    duplicate(x,y,z);
    cout<<"x="<< x<<", y="<<y<<", z="<<z;
    return 0;
    int i;
    do{
        cout<<"please, enter number (0 to exit): ";
        cin>>i;
        odd(i);
    }while(i!=0);
    return 0;
}
void odd (int x){
    if(x%2 != 0) cout<<"It is odd.\n";
    else even(x);
}
void even(int x){
    if (x%2 == 0) cout<<"It is even.\n";
    else odd(x);
    string string1 = "hi ";
    string string2 = "hil ";
    cout<<concatenate(string1, string2)<<endl;*/
    int x, fact = 1;
    cout<<"input a number: ";
    cin>>x;
    if(x<0) {
        cout<<"not valid input";
        return 0;
    }
    for(int i = x; i >0; i--){
        fact *= i;
    }
    cout<<"factorial of "<<x<<" is "<<fact<<endl;
    /*struct number
    {
        int num;
        int index;
    };
    number num1;
    num1.num = 20;
    num1.index = 0;*/
    
}
