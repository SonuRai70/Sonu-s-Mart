#include<bits/stdc++.h>
#include <iomanip>
using namespace std;
    
    vector<string>product_Name = {"BREAD", "BISCUIT", "EGGS", "MILK(1kg)", "RICE(1kg)", "WHEAT FLOUR(1kg)", "BUTTER", "COOKING OIL(1kg)", "COFFEE", "CHANA DAL(1kg)", "TURMERIC POWDER(100g)", "SALT(1kg)", "RED CHILLI POWDER"};
    vector<int>product_price = {42, 40, 220, 56, 60, 68, 40, 120, 110, 160, 40, 22, 40};
    vector<int>product_stock = {50, 200, 40, 30, 100, 120, 50, 80, 100, 50, 100, 100, 100};
    
    vector<string>cart_summary_product_Name;
    vector<int>cart_summary_quantity;
    vector<int>cart_summary_price;
    
    vector<int>cart_summary_total;
    
    vector<int>cart_total_Amount;
    

    void Product_In_Store(){
        for(int i = 0; i < product_Name.size(); i++) cout<< left << setw(20) <<i+1 << setw(25) <<product_Name[i] <<setw(20) <<product_price[i] <<product_stock[i]<<endl;
    }
    int main(){
        
        cout<<endl<<endl<<"-   -   -   -   Welcome To Sonu's Shopping Grocery Store  -   -   -   -"<<endl<<endl;
        cout<<"-----------------------------------------------------------------------"<<endl;
        cout<<"ID             ||   PRODUCT NAME        ||   PRICE        ||   IN STOCK"<<endl;;
        cout<<"-----------------------------------------------------------------------"<<endl;
        Product_In_Store();
        cout<<"-----------------------------------------------------------------------"<<endl<<endl;
        int id , how_much, i = 0, check = 1, count = 0;
        while(check > 0){
            cout<<"Enter the product Id to add to cart (0 to checkout) : ";
            cin>>id;
            count++;
            if(id == 0) break;
            cout<<"Enter Quantity : ";
            cin>>how_much;
            string store_Name = product_Name[id-1];
            cart_summary_quantity.push_back(how_much);
            cout<<how_much<<" "<<product_Name[id-1]<<" are added to cart."<<endl<<endl; 
            cart_summary_product_Name.push_back(store_Name);
            int store_price = product_price[id-1];
            cart_summary_price.push_back(store_price);
            i++;
        }
        cout<<endl;
        cout<<"                 Your Cart Summary" <<endl;
        cout<<"--------------------------------------------------------------"<<endl;
        cout<<" PRODUCT NAME    ||   Quantity       ||   PRICE    ||   TOTAL"<<endl;;
        cout<<"--------------------------------------------------------------"<<endl;
        
        int sum = 0;
        for(int j = 0; j <= cart_summary_quantity.size()-1; j++){
            int total_summary = cart_summary_quantity[j] * cart_summary_price[j];
            cart_summary_total.push_back(total_summary);
            sum += total_summary;
            cart_total_Amount.push_back(total_summary);
        }
        
        //to show the table of cart product.
        for(int k = 0; k < cart_summary_product_Name.size(); k++){
            cout<< setw(20) <<cart_summary_product_Name[k] << setw(20) <<cart_summary_quantity[k]<< setw(15) << cart_summary_price[k]<< setw(10) << cart_summary_total[k]<<endl;
        }
        cout<<"--------------------------------------------------------------"<<endl;
        cout<<"Your Total Amount : "<<sum<<endl<<endl;
        cout<<"Thanks for shopping at Sonu's Mart; We Hope your shopping went Good. "<<endl<<endl;
        
        return 0;
    }