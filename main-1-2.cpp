
#include "StockItem.h"
#include "Store.h"
#include <iostream>
#include <string>
int main() {
Store Store(9);
StockItem m1(1002, "Box");
StockItem m2(2005, "Paper");
StockItem m3(1000, "Table");
if (Store.add_Stock(m1)) {
std::cout << "Added stock 1 to the store" << std::endl;
} else {
std::cout << "Could not add stock 1 to the store" << std::endl;
}
if (Store.add_Stock(m2)) {
std::cout << "Added stock 2 to the store" << std::endl;
} else {
std::cout << "Could not add stock 2 to the store" << std::endl;
}
if (Store.add_Stock(m3)) {
std::cout << "Added stock 3 to the store" << std::endl;
} else {
std::cout << "Could not add stock 3 to the store" << std::endl;
}

std::cout << "The store currently has " << Store.get_Stock_Count() << std::endl;
StockItem* stock = Store.get_Stock_List();
return 0;
}