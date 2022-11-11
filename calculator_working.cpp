#include <iostream>
using namespace std;
double pow(double baseNum, double powNum){
    double result = 1;

    for(int i=0 ; i<powNum; i++){
        result = result*baseNum;
    }
    return result;
}
double factorial(double num){
    double result = 1;
    double num2 = num;
    for(int i=0 ; i<num; i++){
        result = result*num2;
        num2--;
    }
    return result;
}
 double cosine (double m) {


    double sum=0;
    for (double k=1 ; k<100 ; k++)
        {
        sum = sum + pow(m,2*k)*pow(-1,k)/factorial(2*k);
            }
            double sum1 = 1 + sum ;
            return sum1;
   }
   double sine (double m) {


    double sum=0;
    for (double k=1 ; k<100 ; k++)
        {
        sum = sum + pow(m,2*k-1)*pow(-1,k+1)/factorial(2*k-1);
            }
            return sum;
   }
   double tangent (double m){
   double result = sine(m)/cosine(m);
    return result;
   }

int main()

{
    double num1;
    double num2;
    string op;
    cout<<"Enter operator:    ( sin, cos, tan, +, -, *, /, ^)"<<endl;
    cin>> op;
    if(op == "sin" || op == "cos" || op == "tan" ){
        cout << "Enter angle in radian: ";
    cin>> num1;
    if(op == "sin"){ cout << sine(num1);}
   else if(op == "cos"){ cout << cosine(num1);}
   else{ cout << tangent(num1);}
  
 }
    else if (op== "+" ){
    cout << "Enter first number (or base number): " <<endl;
    cin >> num1;
    cout << "Enter second number ( or power): ";
    cin >> num2;
    cout << num1+num2 ;}
    else if (op== "-" ){
    cout << "Enter first number (or base number): " <<endl;
    cin >> num1;
    cout << "Enter second number ( or power): ";
    cin >> num2;
    cout << num1-num2 ;}
    else if (op== "*" ){
    cout << "Enter first number (or base number): " <<endl;
    cin >> num1;
    cout << "Enter second number ( or power): ";
    cin >> num2;
    cout << num1*num2 ;}
    else if (op== "/" ){
    cout << "Enter first number (or base number): " <<endl;
    cin >> num1;
    cout << "Enter second number ( or power): ";
    cin >> num2;
    cout << num1/num2 ;}
    else if (op== "^" ){
    cout << "Enter first number (or base number): " <<endl;
    cin >> num1;
    cout << "Enter second number ( or power): ";
    cin >> num2;
    cout << pow( num1, num2) ;}
     else {cout << "invalid operator";}


return 0;
}
