#include<iostream>
using namespace std;

void max(int a, int b, int c){
    if(a > b && a > c){
        cout << "biggest num : " << a << endl;
    }
    else if(b > a && b > c){
        cout << "biggest num : " << b << endl;
    }
    else{
        cout << "biggest num : " << c <<endl;
    }
}

int main(){
    int num1, num2, num3;
    cout<<"Enter value of num1 : ";
    cin >> num1;

    cout<<"Enter value of num2 : ";
    cin >> num2;

    cout<<"Enter value of num3 : ";
    cin >> num3;

    max(num1, num2, num3);
}