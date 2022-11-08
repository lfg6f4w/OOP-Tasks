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
class A {
public:
	static int numOfClass;
	A() {
		numOfClass++;
		cout << "Number of class A in Constructor is : " << numOfClass << ed;
	}
	~A() {
		cout << "Number of class A in Destructor is : " << numOfClass << ed;
		numOfClass--;
	}
};
class B {
public:
	static int numOfClass;
	B() {
		numOfClass++;
		cout << "Number of  class B in Constructor is : " << numOfClass << ed;
	}
	~B() {
		cout << "Number of  class B in Destructor is : " << numOfClass << ed;
		numOfClass--;
	}
};
int A::numOfClass = 0;
int B::numOfClass = 0;
int main() {
	Accept();
	A a1, a2, a3;
	B b1, b2, b3;
	return 0;
}
