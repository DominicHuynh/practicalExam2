#include "StockItem.h"
#include<string>
#include<iostream>


StockItem::StockItem(){
    code_num_=0;
   description_="";

}
StockItem::StockItem(int code_num, std::string get_description){
    code_num_=code_num;
    description_=get_description;
}
std::string StockItem:: get_description(){
    return description_;
}
int StockItem:: get_item_code(){
    return code_num_;
}
StockItem ::~StockItem(){};