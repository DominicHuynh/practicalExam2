#include "StockItem.h"
#include<string>
#include<iostream>


StockItem::StockItem(){
    itemCode=0;
   description_="";

}
StockItem::StockItem(int code_num, std::string description){
    itemCode=code_num;
    description_=description;
}
std::string StockItem:: get_description(){
    return description_;
}
int StockItem:: get_item_code(){
    return itemCode;
}
StockItem ::~StockItem(){};