#ifndef STORE_H
#define STORE_H

#include <vector>
#include "StockItem.h"

class Store {
private:
    int capacity;
    std::vector<StockItem> stockList;

public:
    Store(); // default constructor
    Store(int capacity); // constructor with capacity parameter

    int get_Total_Stock_Count();
    int get_Stock_Count(int item_code);
    StockItem* get_Stock_List();
    bool add_Stock(StockItem new_stock);

    ~Store(); // destructor
};

#endif
