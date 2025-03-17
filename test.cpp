#include <iostream>
using namespace std;
#define taxRate 0.15

int main(){
    //1 program's purpose
    cout<<"This program's purpose is to analyze product sales and inventor for sales. And it is built using C++ language which is a compiled language."<<endl; 
    //2 declaring
    string productName; 
    int productCategory;
    int initialInventory;
    float price;
    int itemSold;
    //3 calculated variables
    int newInventory; 
    float totalSales;
    string inventoryStatus;
    //4 demonstrate differnt Initialization methods
    int var = 3;
    string val = "random variable";
    char plus; 
    plus = '+'; 
    int a{10};
    auto y = var;
    decltype(plus) another_char = ' ';
    //5 helping variables
    auto copyTotalSales = totalSales; 
    decltype(initialInventory) helperVar = 25;
    //6 tax rate constant
    const float tax_rate = 0.15;
    //7 prompts
    cout<<"Product's name: ";
    cin>>productName;
    cout<<"Product category: ";
    cin>>productCategory;
    cout<<"Initial inventory quantity: ";
    cin>>initialInventory;
    cout<<"Product's price: ";
    cin>>price;
    cout<<"Number of item sold: ";
    cin>>itemSold;
    if(itemSold>initialInventory){
        cout<<"NOT valid input for items sold.\n";
        exit(1);
    }
    //8 calculated values
    newInventory = initialInventory - itemSold;
    totalSales = itemSold * price;
    //9 inventory status
    inventoryStatus = (newInventory<10) ? "Low inventory": "Sufficient Inventory";
    //10 category of item
    if(productCategory >= 1 && productCategory <= 5){
        switch (productCategory)
        {
        case 1:
            cout<<"Category 1: Electronics"<< endl;
            break;
        case 2:
            cout<<"Category 2: Groceries"<< endl;
            break;
        case 3:
            cout<<"Category 3: Clothing"<< endl;
            break;
        case 4:
            cout<<"Category 4: Stationery"<< endl;
            break;
        case 5:
            cout<<"Category 5: Miscellaneous"<< endl;
            break;
        }
        for(int i=1;i<=itemSold;i++){
            cout<<"Item: "<<productName<<endl;
            cout<<"price: "<<"$"<<price<<endl;
        }
        //11 detailed summary
        cout<<"Tax rate: "<<taxRate<<endl;
        cout<<"Tax rate: "<<tax_rate<<endl;
        cout<<"The product's name is "<< productName <<" which is Category "<<productCategory<< ". Your inital inventory is "<<initialInventory<<" with each costing $"<<price<<". The number of items sold is "<<itemSold<<"."<<endl;
        cout<<"The new inventory remaining is "<<newInventory<<". And your total sales is $"<< totalSales<<". Your inventory status is "<<inventoryStatus<<"."<<endl;
        cout<<"These are the values of helper variables that we used: 'copyTotalSales': "<< copyTotalSales<<" and 'helperVar': "<<helperVar<<"."<<endl;
    }else{
        cout<<"NOT valid category input. please try again."<< endl;
    }
    
}

