#include "StockItem.h"
#include <string>
#include <iostream>
int main() {
    StockItem s1(1002 ,"box" );
    std::cout << StockItem(s1).get_item_code() << std::endl;
    std::cout << StockItem(s1).get_description() << std::endl;
}