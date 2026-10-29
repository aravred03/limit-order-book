#pragma once
#include <cstdint>

class Order{
    public:
    uint64_t id;
    enum order_type{
        buy,
        sell
    };
    order_type ordertype;
    int64_t price;
    int64_t qty;

};