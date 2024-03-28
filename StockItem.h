#ifndef STOCKITEM_H
#define STOCKITEM_H

#include <string>

class StockItem {
private:
    int itemCode;
    
    std::string description_;

public:
    StockItem(); // default constructor
    StockItem(int num_code, std::string description); // constructor with parameters

    std::string get_description();
    int get_item_code();
    

    ~StockItem(); // destructor
};

#endif
