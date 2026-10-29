#include <iostream>
#include "order.hpp"

using namespace std;


int main(){
	Order order1{1,Order::order_type::buy,11500,3};
	std::cout<<order1.price;
	return 0;
}
