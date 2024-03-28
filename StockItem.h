#ifndef STOCKITEM_H
#define STOCKITEM_H

#include <string>

class StockItem {
private:
    int itemCode;
    std::string description;

public:
    StockItem(); // default constructor
    StockItem(int code_num, std::string description); // constructor with parameters

    std::string get_description();
    int get_item_code();

    ~StockItem(); // destructor
};

#endif
