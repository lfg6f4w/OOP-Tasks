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
void print1(string& s) {
	cout << s << ed;
}
void print2(const string& s) {
}
string msg1() {
	string x = "aa";
	return x;
}
const string& msg2() {
	return "aa";
}
const string& msg3() {
	string x = "aa";
	return x;
}
int main() {
	Accept();
	string hello("Hello");
	print1(hello);
	// compilation error 
	// مفش مكان فى الذاكره عشان اباصيه
	//print1(string("World")); 
	//print1("!");

	// As parameter is const & for param: any style can be used
	print2(hello);
	print2(string("World")); // because const it will be run 
	print2("!");

	string a1 = msg1();

	// msg1 return reference
	//string& a2 = msg1();

	//is const & for param: any style can be used
	const string& a3 = msg1();

	//Run time error. Above function send reference to local variable that will be destroyed ???????
	string a = msg2();
	string b = msg2();

	
	return 0;
}


/*
	 * Mostafa Saad Tips not form my :-
	 *
	 * 
	 * Here is a general guideline
	 * 1) Using no reference (in parameter, function return or receiving variable in the caller)
	 * 	A) No compile or run time error
	 * 	B) If the object is heavy: takes more time and memory
	 *
	 * 	2) Using & saves time and memory BUT
	 * 	A) As a function parameter: if used & without const: you can't send temporary object => Compile error
	 * 	B) As a return: Never return & (or const &) for a local variable as it will be destroyed. This will cause RTE. The is the most dangerous case, as others cause compile error.
	 * 	C) You can return & to data member as it won't be destroyed before the receiving variable. But better use const & to follow OO concepts as possible
	 * 	D) As a receiving variable: You can't receive & for temporary object. Compile error
	 * 	E)   As a receiving variable: You can always receive const &, even for temporary object. No problem.
	 */
