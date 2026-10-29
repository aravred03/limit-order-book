#include <iostream>
#include "order.hpp"

using namespace std;


int main(){
	Order order1{
		1,
		Side::buy,
		1555000,
		5
	};
	cout<<order1.qty<<"\n";
	if(order1.side==Side::buy){
		cout<<"Buy order"<<"\n";
	}
	else{
		cout<<"Sell order"<<"\n";
	}
	cout<<order1.price<<"\n";
	cout<<order1.id<<"\n";
}
