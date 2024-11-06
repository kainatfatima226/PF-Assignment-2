#include<iostream>
using namespace std;
int main(){
double priceA = 50.0; 
double priceB = 30.0; 
double priceC = 20.0; 
 int quantityA, quantityB, quantityC;

cout << "Enter the quantity of Product A: ";
cin >> quantityA;
cout << "Enter the quantity of Product B: ";
cin >> quantityB;
cout << "Enter the quantity of Product C: ";
cin >> quantityC;
    double total = (priceA * quantityA) + (priceB  *quantityB) + (priceC * quantityC);
cout << "Total cost: $" << total << endl;

    return 0;
}




