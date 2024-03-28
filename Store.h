#ifndef STORE_H
#define STORE_H
#include "StockItem.h"

class Store {


public:
    Store(); // default constructor
    Store(int capacity); // constructor with capacity parameter

    int get_Total_Stock_Count();
    int get_Stock_Count();
    StockItem* get_Stock_List();
    bool add_Stock(StockItem new_stock);

    ~Store(); // destructor
    private:
    int capacity;
    int count;
    StockItem* stockList;
};

#endif
