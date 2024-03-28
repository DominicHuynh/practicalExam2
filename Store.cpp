#include "Store.h"
#include<string>

Store::Store() {
    capacity = 0;
}

Store::Store(int capacity) {
    this->capacity = capacity;
}

int Store::get_Total_Stock_Count() {
    return stockList.size();
}

int Store::get_Stock_Count(int item_code) {
    int count = 0;
    for (const StockItem& item : stockList) {
        if (item.get_item_code() == item_code) {
            count++;
        }
    }
    return count;
}

StockItem* Store::get_Stock_List() {
    return stockList.data();
}

bool Store::add_Stock(StockItem new_stock) {
    if (stockList.size() < capacity) {
        stockList.push_back(new_stock);
        return true;
    }
    return false;
}

Store::~Store() {
    // Destructor code if needed
}
