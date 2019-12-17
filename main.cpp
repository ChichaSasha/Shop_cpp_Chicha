//#include "src/Shop.cpp"
//#include "src/Seller.cpp"
//#include "src/Customer.cpp"
//#include "src/Product.cpp"
#include "src/Shop.cpp"
#include<ctime>
int main() {
	srand(time(nullptr));

	vector<Seller*> sellers;
	vector<Customer*> customers;
	vector<Product*> products;

	auto *seller_1 = new Seller("Andrii", 18, 1200);
	auto *seller_2 = new Seller("Sasha", 18, 1200);
	auto *seller_3 = new Seller("Bohdan", 19, 800);

	auto *product_1 = new Product("Computer", 1400, 140, 480);
	auto *product_2 = new Product("Notebook", 1100, 10, 290);
	auto *product_3 = new Product("Smartphone", 900, 20, 300);

	auto *customer_1 = new Customer("Vaper", 18, 1500, 100, 10);
	auto *customer_2 = new Customer("Adolf", 19, 1900, 250, 20);


	auto *shop = new Shop("ITShop", sellers, products, customers, 0);

	shop->addSeller(seller_1);
	shop->addSeller(seller_2);
	shop->addSeller(seller_3);

	shop->addProduct(product_1);
	shop->addProduct(product_2);

	shop->addCustomer(customer_1);
	shop->addCustomer(customer_2);

	cout << customer_1->getMoney() << endl;
	shop->sellProduct(product_3, customer_1);
	cout << customer_1->getMoney() << endl;


	auto someSeller = shop->randomSeller();
	cout << someSeller->getName();
	return 0;
}