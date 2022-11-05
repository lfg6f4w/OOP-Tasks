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
class BathRoom {
private:
	int width;
	int length;
public:
	void setWidth(int width);
	void setLength(int length);
	int getWidth();
	int getLength();
};
class room {
private:
	int width;
	int length;
	string color;
	BathRoom bathroom;
public:
	void setWidth(int width);
	void setLength(int length);
	void setColor(string color);
	void setBathRoom(const BathRoom& bathroom);
	int getWidth();
	int getLength();
	int getColor();
	BathRoom getBathRoom(const BathRoom& bathroom);
};
class Elevator {
private:
	int maxWidth;
	int speed;
public:
	void setMaxWidth(int maxWidth);
	void setSpeed(int speed);
	int getMaxWidth();
	int getSpeed();
};
class building {
private:
	room Room;
	Elevator elevator;
public:
	void setRoom(room & r1);
	void setElevator(Elevator & e1);
	room setRoom(const room& r1);
	Elevator setElevator(const Elevator& e1);	
};
int main() {
	Accept();
	building build1;
	return 0;
}
