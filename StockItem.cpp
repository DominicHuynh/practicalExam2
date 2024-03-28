#include "StockItem.h"
#include<string>

StockItem::StockItem() {
    itemCode = 0;
    description = "";
}

StockItem::StockItem(int code_num, std::string description) {
    itemCode = code_num;
    this->description = description;
}

std::string StockItem::get_description() {
    return description;
}

int StockItem::get_item_code() {
    return itemCode;
}

StockItem::~StockItem() {
    // Destructor code if needed
}
