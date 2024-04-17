#include <iostream>
using namespace std;


#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase() : itemName("None"), itemPrice(0), itemQuantity(0) {}

void ItemToPurchase::SetName(const string &name) {
  itemName = name;
}
void ItemToPurchase::SetPrice(int price){
  itemPrice = price;
}
void ItemToPurchase::SetQuantity(int quantity){
itemQuantity = quantity;
}
string ItemToPurchase::GetName(){
  return itemName;
}
string ItemToPurchase::GetPrice(){
  return itemPrice;
}
string ItemToPurchase::GetQuantity(){
  return itemQuantity;
}

