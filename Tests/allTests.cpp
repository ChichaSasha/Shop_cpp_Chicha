/***
 *
 * Project name: Shop
 * File: allTests.cpp
 * Project was created by Chicha Olexandr on 20.12.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: sashachicha13@gmail.com
 * phone number: +380957519417
 *
***/

#include "src/Shop.cpp"
#include "src/Seller.cpp"
#include "src/Customer.cpp"
#include "src/Product.cpp"
#include "src/parcingFunc.cpp"
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <vector>


//-------------------------Testing Human class-------------------------------------------------------------------------

void testGetNameHuman(){
    Human _human("Sasha", 18);
    _human.show();
    cout << "Human name is" << _human.getName() <<endl;
}

void testGetAgeHuman(){
    Human _human("Sasha", 18);
    _human.show();
    cout << "Human age is" << _human.getAge() <<endl;
}

void testSetNameHuman(){
    Human _human("Sasha", 18);
    _human.show();
    _human.setName("Pasha");
    cout << "after setting name on Pasha" << endl;
    _human.show();
}

void testSetAgeHuman(){
    Human _human("Sasha", 18);
    _human.show();
    _human.setAge(20);
    cout << "after setting age on 20" << endl;
    _human.show();
}

//----------------------------------------------------------------------------------------------------------------------

//------------------------------------- Test Customer ------------------------------------------------------------------

void testSetMoneyCustomer(){
    Customer _customer("Sasha", 19, 1000, 100, 30);
    _customer.show();
    _customer.setMoney(2000);
    cout << "after setting money on 2000" << endl;
    _customer.show();
}

void testSetSpentMoneyCustomer(){
    Customer _customer("Sasha", 19, 1000, 100, 30);
    _customer.show();
    _customer.setSpentMoney(500);
    cout << "after setting spentMoney on 500" << endl;
    _customer.show();
}

void testSetSelfSaleCustomer(){
    Customer _customer("Sasha", 19, 1000, 100, 30);
    _customer.show();
    _customer.setSelfSale(50);
    cout << "after setting selfSale on 50" << endl;
    _customer.show();
}

void testGetMoneyCustomer(){
    Customer _customer("Sasha", 19, 1000, 100, 30);
    _customer.show();
    cout << "Customer's money : "<< _customer.getMoney() << endl;
}

void testGetSpentMoneyCustomer(){
    Customer _customer("Sasha", 19, 1000, 100, 30);
    _customer.show();
    cout << "Customer's SpentMoney : "<< _customer.getSpentMoney() << endl;
}

void testGetSelfSaleCustomer(){
    Customer _customer("Sasha", 19, 1000, 100, 30);
    _customer.show();
    cout << "Customer's SelfSale : "<< _customer.getSelfSale() << endl;
}

//------------------------------ Test Seller --------------------------------------------------------------------------

void testSetSalarySeller(){
    Seller _seller("Sasha", 19, 10000);
    _seller.show();
    _seller.setSalary(20000);
    cout << "after setting salary on 20000" << endl;
    _seller.show();
}

void testGetSalarySeller(){
    Seller _seller("Sasha", 19, 10000);
    _seller.show();
    cout << "Seller's salary : " << _seller.getSalary() << endl;
}

//----------------------------------------------------------------------------------------------------------------------

//---------------------------------------- Test Shop -------------------------------------------------------------------

void testSetNameShop(){
    vector<Product*> _products;
    vector<Seller*> _sellers;
    vector<Customer*> _customers;
    Shop _shop("TestName" ,_sellers, _products, _customers, 0);
    _shop.show();
    _shop.setName("testName1");
    cout << "Shop after setting name on TestName1" << endl;
    _shop.show();
}

void testSetProfitShop(){
    vector<Product*> _products;
    vector<Seller*> _sellers;
    vector<Customer*> _customers;
    Shop _shop("TestName" ,_sellers, _products, _customers, 10);
    _shop.show();
    _shop.setProfit(20);
    cout << "Shop after setting profit on 10" << endl;
    _shop.show();
}

void testAddSellerShop(){
    vector<Product*> _products;
    vector<Seller*> _sellers;
    vector<Customer*> _customers;
    Shop _shop("TestName" ,_sellers, _products, _customers, 10);
    _shop.show();
    _shop.addSeller(new Seller("Sasha", 19, 10000));
    cout << "Shop after adding seller 'Sasha' " << endl;
    _shop.show();
}

void testAddCustomerShop(){
    vector<Product*> _products;
    vector<Seller*> _sellers;
    vector<Customer*> _customers;
    Shop _shop("TestName" ,_sellers, _products, _customers, 10);
    _shop.show();
    _shop.addCustomer(new Customer("Sasha", 19, 1000, 100, 30));
    cout << "Shop after adding customer 'Sasha' " << endl;
    _shop.show();
}

void testAddProductShop(){
    vector<Product*> _products;
    vector<Seller*> _sellers;
    vector<Customer*> _customers;
    Shop _shop("TestName" ,_sellers, _products, _customers, 10);
    _shop.show();
    _shop.addProduct(new Product("Meat", 1000, 100, 30));
    cout << "Shop after adding product 'Meat' " << endl;
    _shop.show();
}


void testRandomSellerShop(){
    vector<Product*> _products;
    vector<Seller*> _sellers;
    vector<Customer*> _customers;
    Shop _shop("TestName" ,_sellers, _products, _customers, 10);
    _shop.addSeller(new Seller("Sasha", 19, 10000));
    _shop.addSeller(new Seller("Bogdan", 19, 9000));
    _shop.show();
    cout << "Random seller " << endl;
    (_shop.randomSeller())->show();
}