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
class ClassA {
public:
	ClassA() {
		cout<<"ClassA Constructor\n";
	}
};

class ClassB {
private:
	ClassA aa;
	int x;
public:
	ClassB(int x) {
		this->aa = ClassA();
		this->x = x;
	}
};

class ClassC {
private:
	int &y;
	ClassB bb;

public:
	ClassC(int& y, const ClassB& bb) : y(y) , bb(bb) {
		// Answer
	}
};
int main() {
	Accept();
	int hello = 10;
	ClassB b(5);
	ClassC cc(hello, b);
	// Answer
	// class A call 2 in class B
	return 0;
}

