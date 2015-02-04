////////////////////////
// Basem Alhobaish
// Lab assignment 3
// 2/3/2015
///////////////////////

#include <iostream>
#include <assert.h>
#include <math.h>
#include <stdio.h>
using namespace std;

class Math{
public:
    Math();
    float divide (float, float);
    float multiply (float, float);
    float sqroot ( float );
    
private:
    float x;
    float y;
  
};

Math::Math(){
   
}

float Math::divide(float x, float y) { 
    return x/y; 
}

float Math::multiply(float x, float y) { 
    return x*y; 
}

float Math::sqroot(float x) { 
    return sqrt (x); 
}

int main(){
    Math test;
    //first test 
    assert( test.divide(12, 6) == 2 );
    assert( test.multiply(2, 3) == 6);
    assert( test.sqroot(9) == 3);
    //second test
    assert( test.divide(20, 2) == 10);
    assert( test.multiply(20, 2) == 40);
    assert( test.sqroot(4) == 2);
    
    int a, b;
    cout << "Please enter two integers that you want to compute:" << endl;
    cin >> a >> b;
    cout << ">>>> result of division = " << test.divide(a, b) << endl;
    cout << ">>>> result of multiplication = " << test.multiply(a, b) << endl;
    cout << "Please enter a number to compute the square root:" << endl;
    cin >> a;
    cout << ">>>>> result of square root = " << test.sqroot(a) << endl;

}

