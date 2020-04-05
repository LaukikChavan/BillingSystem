#include <iostream>
#include <fstream>
#include<string>

#define MAX_NO 100
using namespace std;

void inline clear(){string s;getline(cin,s);}

class Date{
public :
    int dd,mm,yyyy;
    void setDate(){
            cin >> dd >> mm >> yyyy;
    }
    string getDate(){
            string s = {to_string(dd) + "/" + to_string(mm) + "/" + to_string(yyyy)};
            return s;
    }
    int inline getDD(){return dd;}
    int inline getMM(){return mm;}
    int inline getYY(){return yyyy;}
};

class item { 
private:
    int itemno,quantity;
    string name;
    float price;
    Date manuDate, expDate;
    
public:
    void set() {
        setName();
        setItemNo();
        setPrice();
        setQuantity();
        setManufacture();
        setExpiry();
    }
    void get() {
        getNameP();
        getItemNoP();
        getQuantityP();
        getPriceP();
        getManufactureP();
        getExpiryP();
    }
    void setName() {
        clear();
        cout<<"Enter Name of the item : ";
        getline(cin,name);
    }
    void setItemNo() {
        cout<<"Enter Item no of the item : ";
        cin>>itemno;
    }
    void setPrice() {
        cout<<"Enter Price of the item : ";
        cin>>price;
    }
    void setQuantity() {
        cout<<"Enter Quantity of the item : ";
        cin>>quantity;
    }
    void setManufacture() {
        cout<<"Enter Manufacture date of item in dd mm yyyy format : ";
        manuDate.setDate();
        
    }
    void setExpiry() {
        cout<<"Enter Expiry date of item in dd mm yyyy format : ";
        expDate.setDate();
        
    }

    void getNameP() {
        cout<<"Name of the item : "<< name << "\n";
    }
    void getItemNoP() {
        cout<<"Itemno of the item : "<< itemno << "\n";
    }
    void getPriceP() {
        cout<<"Price of the item : "<<  price << "\n";
    }
    void getQuantityP() {
        cout<<"Quantity of the item : "<<  quantity << "\n";
    }
    void getManufactureP() {
        cout<<"Manufacture year of the item : "<< manuDate.getDate()  << "\n";
    }
    void getExpiryP() {
        cout<<"Expiry year of the item : "<< expDate.getDate()  << "\n";
    }
    
    string getName() {
        return name;
    }
    int getItemNo() {
        return itemno;
    }
    float getPrice() {
        return price;
    }
    int getQuantity() {
        return quantity;
    }
    string getManufacture() {
        return manuDate.getDate();
    }
    string getExpiry() {
        return expDate.getDate();
    }
};

class FileDatabase{
    ofstream outfile;
    ifstream infile;
    string fileName;
public:
    
    Database() {
        infile.open("Database.csv");
        if(infile.peek() == ifstream::traits_type::eof()){
                createNew();
        }
        else{
                printFile();
        }
    }
    
    void createNew(){
        outfile << "Iteam No ";
        outfile << "\t";
        outfile << "Item Name";
        outfile << "\t";
        outfile << "Item quantity";
        outfile << "\t";
        outfile << "Price";
        outfile << "\t";
        outfile << "Manufacturing date";
        outfile << "\t";
        outfile << "Expiry date";
        outfile << endl;
    }
    
    void create(item a){
        outfile << a.getItemNo();
        outfile << "\t";
        outfile << a.getName();
        outfile << "\t";
        outfile << a.getQuantity();
        outfile << "\t";
        outfile << a.getPrice();
        outfile << "\t";
        outfile << a.getManufacture();	
        outfile << "\t";
        outfile << a.getExpiry();
        outfile<<endl;
    }
    
    void printFile(){
            cout << "\n";
            
    }
    
    ~FileDatabase(){
        infile.close();
        outfile.close();   
    }
};

class Database{
    int i,n;
    Database db;
    item v[MAX_NO];
};

int main() {
    int i,n;
    Database db;
    item v[MAX_NO];
    cout<<"Enter number of Iteams : ";
    cin>>n;
    cout<<"\n************Enter item details*********\n";
    for(i=0;i<n;i++) {
        cout << "Item No :- "<<i+1 ;
        v[i].set();
        db.create(v[i]);
        cout << "\n";
    }
    cout<<"\n*************Item details*************\n";
    for(i=0;i<n;i++) {
        cout << "Item No :- "<<i+1;
        v[i].get();
        cout << "\n\n";
    }
    cout << "\n\nDatabase is created !!! \n\n";
    return 0;
}
