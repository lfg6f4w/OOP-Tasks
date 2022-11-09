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
class MyVector {
private:
	int* arr;
	int length = 100;
public:
	MyVector(int len, int defaultValue = 0) {
		this->length = len;
		this->arr = new int[len];
		for (int i = 0;i < len;i++) {
			this->arr[i] = defaultValue + 1;
		}
	}
	MyVector(const MyVector& Vector) {
		this->length = Vector.length;
		this->arr = Vector.arr;
	}
	~MyVector() {
		delete[] this->arr;
	}
	void setValues(int Value) {
		for (int i = 0;i < length;i++) {
			this->arr[i] = Value + i;
		}
	}
	int getLen() {
		return this->length;
	}
	int& getLength() {
		return this->length;
	}
	const int getPos(int pos) {
		if (pos <0 || pos > length) {
			return -1;
		}
		return this->arr[pos - 1];
	}
};
int main() {
	Accept();
	MyVector v1(5, 3);
	MyVector v2(v1);
	cout << v2.getLen() << ed;
	cout << v2.getPos(5) << ed;
	v1.setValues(10);
	cout << v1.getLen() << ed;
	cout << v1.getPos(5) << ed;
	int& len = v1.getLength();
	len = 3;
	cout << v1.getPos(5) << ed;
	return 0;
}
