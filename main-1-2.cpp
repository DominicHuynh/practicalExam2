#include <iostream>
#include "Store.h"

int main() {
    // Create a store with a capacity of 5
    Store store(5);

    // Add some stock items
    StockItem item1(101, "Widget");
    StockItem item2(102, "Hammer");
    StockItem item3(101, "Widget");

    // Add items to the store
    store.add_Stock(item1);
    store.add_Stock(item2);
    store.add_Stock(item3);

    // Test the methods
    std::cout << "Total Stock Count: " << store.get_Total_Stock_Count() << std::endl;
    std::cout << "Stock Count for Widget (item code 101): " << store.get_Stock_Count(101) << std::endl;

    return 0;
}
