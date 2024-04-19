// Having issues, with importing the code, from clion


#include <iostream>
using namespace std;
#include "ItemToPurchase.h"

int main(){
  string name;
  int price, quantity;

  ItemToPurchase item1, item2;

  cout << "Enter the name of item 1: " << endl;
  getline(cin, name);
  item1.SetName(name);
  cout << "Enter the price of item 1: " << endl;
  cin >> price;
  item1.SetPrice(price);
  cout << "Enter the quantity of item 1: " << endl;
  cin >> quantity;
  item1.SetQuantity(quantity);
  cout << endl;
  cin.ignore();

    cout << "Enter the name of item 2: " << endl;
    getline(cin, name);
    item2.SetName(name);
    cout << "Enter the price of item 2: " << endl;
    cin >> price;
    item2.SetPrice(price);
    cout << "Enter the quantity of item 2: " << endl;
    cin >> quantity;
    item2.SetQuantity(quantity);
    cout << endl;


    cout << "TOTAL COST: " << endl;
    cout << item1.GetName() << " " << item1.GetQuantity() << " " << "@" << " $" << item1.GetPrice() << " = $" << (item1.GetQuantity() * item1.GetPrice()) <<endl;

    cout << endl;
    cout << item2.GetName() << " " << item2.GetQuantity() << " " << "@" << " $" << item2.GetPrice() << " = $" << (item2.GetQuantity() * item2.GetPrice()) <<endl;

  return 0;
}
