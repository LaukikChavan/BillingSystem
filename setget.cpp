#include <iostream>
#include<string>

using namespace std;

void inline clear(){string s;getline(cin,s);}

class item { 
private:
    int n,itemno,g;
    string name;
    float price,quantity;
    
public:
    void set() {
        setName();
        setItemNo();
        setPrice();
        setQuantity();
        setManufacture();
    }
    void get() {
        getName();
        getItemNo();
        getQuantity();
        getPrice();
        getManufacture();
    }
    void setName() {
        clear();
        cout<<"\nName of the item : ";
        getline(cin,name);
    }
    void setItemNo() {
        cout<<"\nItem no of the item : ";
        cin>>itemno;
    }
    void setPrice() {
        cout<<"\nPrice of the item : ";
        cin>>price;
    }
    void setQuantity() {
        cout<<"\nQuantity of the item : ";
        cin>>quantity;
    }
    void setManufacture() {
        cout<<"\nManufacture year the item : ";
        cin>>g;
        
    }

    void getName() {
        cout<<"\nName of the item : "<< name;
    }
    void getItemNo() {
        cout<<"\nItemno of the item : "<< itemno;
    }
    void getPrice() {
        cout<<"\nPrice of the item : "<<  price;
    }
    void getQuantity() {
        cout<<"\nQuantity of the item : "<<  quantity;
    }
    void getManufacture() {
        cout<<"\nManufacture year of the item : "<<  g << "\n";
    }

};

int main() {
    item v[10];
    int i,n;
    cout<<"Enter number of Iteams : ";
    cin>>n;
    cout<<"\n************Enter item details*********\n";
    for(i=0;i<n;i++) {
        cout << "Item No :- "<<i+1;
        v[i].set();
    }
    cout<<"\n*************Item details*************\n";
    for(i=0;i<n;i++) {
        cout << "Item No :- "<<i+1;
        v[i].get();
        cout << "\n\n";
    }
    return 0;
}
