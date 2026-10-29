#pragma once
#include <cstdint>

enum class Side{
        buy,
        sell
    };

struct Order{
    int64_t id;
    Side side;
    int64_t price;
    int64_t qty;

};