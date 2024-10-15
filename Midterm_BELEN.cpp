#include <iostream>

using namespace std;

int main ()
{
	float sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
    float sugarQty, riceQty, sardinesQty, coffeeQty, milkQty ;
    float usdToPhp, poundToPhp;
	
	cout << "Enter sugar Quantity" ;
	cin >> sugarQty;
	cout << "Enter Rice Quantity:";
	cin >> riceQty;
	cout << "Enter Sardines Quantity:";
	cin >> sardinesQty;
	cout << "Enter Coffee Quantity:";
	cin >> coffeeQty;
	cout << "Enter Milk Quantity:";
	cin >> milkQty;
	cout << "Enter price of sugar in PHP" ;
	cin >> sugarPriceUSD ;
	cout << "Enter price of rice in PHP" ;
	cin >> ricePricePound ;
	cout << "Enter price of sardines in PHP" ;
	cin >> sardinesPricePound ;
	cout << "Enter price of coffee in PHP";
	cin >>  coffeePriceUSD ;
	cout << "Enter price of Milk in PHP" ;
	cin >> milkPriceUSD ;
	cout << "totalCostPHP = sugarCostPHP + riceCostPHP + sardinesCostPHP + coffeeCostPHP + milkCostPHP" ;
	
    return 0;
}
