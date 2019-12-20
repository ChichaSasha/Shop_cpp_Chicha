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

#include "../src/Shop.cpp"
#include "../src/Seller.cpp"
#include "../src/Customer.cpp"
#include "../src/Product.cpp"
#include <vector>


//-------------------------Testing Human class-------------------------------------------------------------------------

void testGetNameHuman(){
    cout << "testGetNameHuman : " << endl;
    Human _human("Sasha", 18);
    _human.show();
    cout << "Human name is " << _human.getName() <<endl;
}

void testGetAgeHuman(){
    cout << "testGetAgeHuman : " << endl;
    Human _human("Sasha", 18);
    _human.show();
    cout << "Human age is " << _human.getAge() <<endl;
}

void testSetNameHuman(){
    cout << "testSetNameHuman : " << endl;
    Human _human("Sasha", 18);
    _human.show();
    _human.setName("Pasha");
    cout << "after setting name on Pasha" << endl;
    _human.show();
}

void testSetAgeHuman(){
    cout << "testSetAgeHuman : " << endl;
    Human _human("Sasha", 18);
    _human.show();
    _human.setAge(20);
    cout << "after setting age on 20" << endl;
    _human.show();
}

//----------------------------------------------------------------------------------------------------------------------

//------------------------------------- Test Customer ------------------------------------------------------------------

void testSetMoneyCustomer(){
    cout << "testSetMoneyCustomer" << endl;
    Customer _customer("Sasha", 19, 1000, 100, 30);
    _customer.show();
    _customer.setMoney(2000);
    cout << "after setting money on 2000" << endl;
    _customer.show();
}

void testSetSpentMoneyCustomer(){
    cout << "testSetSpentMoneyCustomer : " << endl;
    Customer _customer("Sasha", 19, 1000, 100, 30);
    _customer.show();
    _customer.setSpentMoney(500);
    cout << "after setting spentMoney on 500" << endl;
    _customer.show();
}

void testSetSelfSaleCustomer(){
    cout << "testSetSelfSaleCustomer : " << endl;
    Customer _customer("Sasha", 19, 1000, 100, 30);
    _customer.show();
    _customer.setSelfSale(50);
    cout << "after setting selfSale on 50" << endl;
    _customer.show();
}

void testGetMoneyCustomer(){
    cout << "testGetMoneyCustomer : " << endl;
    Customer _customer("Sasha", 19, 1000, 100, 30);
    _customer.show();
    cout << "Customer's money : "<< _customer.getMoney() << endl;
}

void testGetSpentMoneyCustomer(){
    cout << "testGetSpentMoneyCustomer : " << endl;
    Customer _customer("Sasha", 19, 1000, 100, 30);
    _customer.show();
    cout << "Customer's SpentMoney : "<< _customer.getSpentMoney() << endl;
}

void testGetSelfSaleCustomer(){
    cout << "testGetSelfSaleCustomer" << endl;
    Customer _customer("Sasha", 19, 1000, 100, 30);
    _customer.show();
    cout << "Customer's SelfSale : "<< _customer.getSelfSale() << endl;
}

//------------------------------ Test Seller --------------------------------------------------------------------------

void testSetSalarySeller(){
    cout << "testSetSalarySeller" << endl;
    Seller _seller("Sasha", 19, 10000);
    _seller.show();
    _seller.setSalary(20000);
    cout << "after setting salary on 20000" << endl;
    _seller.show();
}

void testGetSalarySeller(){
    cout << "testGetSalarySeller" << endl;
    Seller _seller("Sasha", 19, 10000);
    _seller.show();
    cout << "Seller's salary : " << _seller.getSalary() << endl;
}

//----------------------------------------------------------------------------------------------------------------------

//---------------------------------------- Test Product-----------------------------------------------------------------

void testGetNameProduct(){
    cout << "testGetNameProduct :" << endl;
    Product _product("testProduct", 100, 20, 90);
    _product.show();
    cout << "Product's name : "<< _product.getName() << endl;
}

void testGetPriceProduct(){
    cout << "testGetPriceProduct : " << endl;
    Product _product("testProduct", 100, 20, 90);
    _product.show();
    cout << "Product's price : "<< _product.getPrice() << endl;
}

void testGetOptPriceProduct(){
    cout << "testGetOptPriceProduct :" << endl;
    Product _product("testProduct", 100, 20, 90);
    _product.show();
    cout << "Product's optPrice : "<< _product.getOptPrice() << endl;
}

void testGetSaleProduct(){
    cout << "testGetSaleProduct : " << endl;
    Product _product("testProduct", 100, 20, 90);
    _product.show();
    cout << "Product's sale : "<< _product.getSale() << endl;
}

void testSetNameProduct(){
    cout << "testSetNameProduct :" << endl;
    Product _product("testProduct", 100, 20, 90);
    _product.show();
    _product.setName("testProduct1");
    cout << "after setting name on testProduct1" << endl;
    _product.show();
}

void testSetPriceProduct(){
    cout << "testSetPriceProduct :" << endl;
    Product _product("testProduct", 100, 20, 90);
    _product.show();
    _product.setPrice(2000);
    cout << "after setting price on 2000" << endl;
    _product.show();
}

void testSetOptPriceProduct(){
    cout << "testSetOptPriceProduct :" << endl;
    Product _product("testProduct", 100, 20, 90);
    _product.show();
    _product.setOptPrice(95);
    cout << "after setting optPrice on 95" << endl;
    _product.show();
}

void testSetSaleProduct(){
    cout << "testSetSaleProduct :" << endl;
    Product _product("testProduct", 100, 20, 90);
    _product.show();
    _product.setSale(30);
    cout << "after setting sale on 30" << endl;
    _product.show();
}

//---------------------------------------- Test Shop -------------------------------------------------------------------

void testSetNameShop(){
    cout << "testSetNameShop :" << endl;
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
    cout << "testSetProfitShop :" << endl;
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
    cout << "testAddSellerShop :" << endl;
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
    cout << "testAddCustomerShop :" << endl;
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
    cout << "testAddProductShop :" << endl;
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
    cout << "testRandomSellerShop :" << endl;
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

void testGetSellersShop(){
    cout << "testGetSellersShop :" << endl;
    vector<Product*> _products;
    vector<Seller*> _sellers;
    vector<Customer*> _customers;
    Shop _shop("TestName" ,_sellers, _products, _customers, 10);
    _shop.addSeller(new Seller("Sasha", 19, 10000));
    _shop.addSeller(new Seller("Bogdan", 19, 9000));
    _shop.show();
    vector<Seller*> _sellers1 = _shop.getSellers();
    for (int i = 0;i<_sellers1.size();i++){
        _sellers1[i]->show();
    }
}

void testGetProductsShop(){
    cout << "testGetProductsShop :" << endl;
    vector<Product*> _products;
    vector<Seller*> _sellers;
    vector<Customer*> _customers;
    Shop _shop("TestName" ,_sellers, _products, _customers, 10);
    _shop.addProduct(new Product("Meat", 1000, 100, 50));
    _shop.addProduct(new Product("Milk", 300, 50, 50));
    _shop.show();
    vector<Product*> _products1 = _shop.getProducts();
    for (int i = 0;i<_products1.size();i++){
        _products1[i]->show();
    }
}

void testGetCustomersShop(){
    cout << "testGetCustomersShop :" << endl;
    vector<Product*> _products;
    vector<Seller*> _sellers;
    vector<Customer*> _customers;
    Shop _shop("TestName" ,_sellers, _products, _customers, 10);
    _shop.addCustomer(new Customer("Sasha", 19, 1000, 100, 30));
    _shop.addCustomer(new Customer("Bogdan", 19, 2000, 90, 20));
    _shop.show();
    vector<Customer*> _customers1 = _shop.getCustomers();
    for (int i = 0;i<_customers1.size();i++){
        _customers1[i]->show();
    }
}

void testSellProductShop(){
    cout << "testSellProductShop :" << endl;
    vector<Product*> _products;
    vector<Seller*> _sellers;
    vector<Customer*> _customers;
    Shop _shop("TestName" ,_sellers, _products, _customers, 10);
    _shop.addCustomer(new Customer("Sasha", 19, 1000, 100, 30));
    _shop.addProduct(new Product("Milk", 300, 50, 50));
    _shop.addSeller(new Seller("Bogdan", 19, 9000));
    _shop.show();
    _shop.sellProduct( _shop.getProducts()[0],(_shop.getCustomers())[0]);
    _shop.show();
}