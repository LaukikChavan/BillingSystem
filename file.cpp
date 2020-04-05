# include <iostream>
# include <fstream>
# include <string>
using namespace std;
class accept
{
	public:
	string s;
	int ino,my,iq;
	float tax,price,dis;
	void add()
	{
			cin>>s;
			cout<<endl;
			cin>>ino;
			cout<<endl;
			cin>>my;
			cout<<endl;
			cin>>iq;
			cout<<endl;
			cin>>tax;
			cout<<endl;
			cin>>price;
			cout<<endl;
			cin>>dis;
	}
	void file()
	{
			ofstream outfile;
			outfile.open("file.csv");
			outfile<<"ino";
			outfile<<"\t";
			outfile<<"Itemname";
			outfile<<"\t";
			outfile<<"manufacturing year";
			outfile<<"\t";
			outfile<<"Item quantity";
			outfile<<"\t";
			outfile<<"Price";
			outfile<<"\t";
			outfile<<"Discouont";
			outfile<<"\t";
			outfile<<"Tax";
			outfile<<endl;
			outfile<<"\t";
			outfile<<s;
			outfile<<"\t";
			outfile<<my;
			outfile<<"\t";
			outfile<<iq;
			outfile<<"\t";
			outfile<<price;
			outfile<<"\t";
			outfile<<dis;	
			outfile<<"\t";
			outfile<<tax;
			outfile<<endl;
			cout<<"File written";
			outfile.close();
	}
};
int main()
{
	int n;
	cout<<"Enter number of customers";
	cin>>n;
	accept acc[n];
	cout<<"Enter billing details\n 1.Itemname\t 2.Item no\t 3.Manufacturing year\t 4.Item quantity\n 5.Price\t 6.Discount\t 7.Tax";
	int i=0;
	while(i<n)
	{
		acc[i].add();
		acc[i].file();
		i++;
	}
return 0;
}
	
	
	
