#include                             <bits/stdc++.h>
#define     ll                       long long
#define     ld                       long double
#define     ft                       first
#define     sd                       second
#define     ed                       '\n'
#define     sz(x)                    x.size()
#define     all(x)                   x.begin(), x.end()
#define     rall(x)                  x.rbegin(), x.rend()
#define     fixed(x)                 fixed<<setprecision(x)
#define     mod                      1'000'000'007
#define     OO                       2'000'000'000
#define     EPS                      1e-7
#define     pi                       acos(-1)
#define     Good_Bay                 return
using namespace std;

template < typename T = int > istream& operator >> (istream &in, vector < T > &v) {
    for (auto &x: v) in >> x;
    return in;
}

template < typename T = int > ostream& operator << (ostream &out, const vector < T > &v) {
    for (const T &x: v) out << x << ' ';
    return out;
}
void Accept(){
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
}
class invoice {
private:
	string name;
	int item_number;
	int price;
	int quantity;
public:
	invoice(string, int, int, int);
	void setName(string);
	void setItemNumber(int);
	void setPrice(int);
	void setQuantity(int);
	string getName();
	int getItemNumber();
	int getPrice();
	int getQuantity();
	int getTotalPrice();
	void print();
	string toString();
};
invoice::invoice(string name = "", int item_number = 0, int price = 0 , int quantity = 0) {
	this->name = name;
	this->item_number = item_number;
	this->price = price;
	this->quantity = quantity;
}
void invoice::setName(string name) {
	this->name = name;
}
void invoice::setItemNumber(int item_Number) {
	this->item_number = item_Number;
}
void invoice::setPrice(int price) {
	this->price = price;
}
void invoice::setQuantity(int quantity) {
	this->quantity = quantity;
}
string invoice::getName() {
	return name;
}
int invoice::getItemNumber() {
	return item_number;
}
int invoice::getPrice() {
	return price;
}
int invoice::getQuantity() {
	return quantity;
}
int invoice::getTotalPrice() {
	return (price * quantity);
}
void invoice::print() {
	cout << "The Name : " << name << ed;
	cout << "The Item Number : " << item_number << ed;
	cout << "The Price : " << price << ed;
	cout << "The Quantity : " << quantity << ed;
	cout << "The Total Price : " << getTotalPrice() << ed;
}
string invoice::toString() {
	stringstream ob1;
	ob1 << "The Name : " << name << ", The Item Number : " << item_number << ", The Price : " << price
		<< ", The Quantity : " << quantity;
	return ob1.str();
}
int main() {
	Accept();
	invoice v1;
	v1.setName("Mobile");
	v1.setItemNumber(106578);
	v1.setPrice(5000);
	v1.setQuantity(5);
	v1.print();
	cout << v1.getTotalPrice() << ed;
	cout << v1.toString();
	return 0;
}
