

#include "StockItem.h"
#include "Store.h"
#include<string>
Store::Store() : capacity(0), count(0), stockList(nullptr) {}

Store::Store(int capacity) : capacity(capacity), count(0), stockList(nullptr) {}

int Store::get_Total_Stock_Count() {
    return capacity;
}

int Store::get_Stock_Count() {
    return count;
}

StockItem* Store::get_Stock_List() {
    return stockList;
}

bool Store::add_Stock(StockItem new_stock) {
    if (stockList == nullptr) {
        stockList = new StockItem[1];
        stockList[0] = new_stock;
        count++;
        return true;
    }
    else {
        int total_capacity = 0;
        for (int i = 0; i < count; i++) {
            total_capacity += stockList[i].get_Total_Stock_Count();
        }
        total_capacity += new_stock.get_Total_Stock_Count();
        if (total_capacity <= capacity) {
            StockItem *temp = new StockItem[count + 1];
            for (int i = 0; i < count; i++) {
                temp[i] = stockList[i];
            }
            temp[count] = new_stock;
            delete[] stockList;
            stockList = temp;
            count++;
            return true;
        }
        else {
            return false;
        }
    }
}

Store::~Store() {
    delete[] stockList;
}
