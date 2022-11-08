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
class Time {
private:
	int totalSecond;
public:
	Time(int hours, int minutes, int seconds){
		SetTime(hours, minutes, seconds);
	}
	void SetTime(int hours, int minutes, int seconds) {
		totalSecond = 0;
		// Dooooooon't duplication yooooouerself
		SetHours(hours);
		SetMinutes(minutes);
		SetSeconds(seconds);
	}
	int GetTotalSeconds() {
		return totalSecond;
	}
	int GetTotalMinutes() {
		return GetHours() * 60 + (totalSecond - GetHours());
	}
	void PrintHHMMSS() {
		ToString(":");
	}
	string ToString(string seperator = "-") {
		ostringstream oss;
		oss << GetHours() << seperator << GetMinutes() << seperator << GetSeconds();
		return oss.str();
	}
	int GetHours() {
		return totalSecond / 3600 ;
	}
	void SetHours(int hours) {
		if (hours < GetHours()) hours = 0;
		totalSecond += (hours - GetHours()) * 3600;
	}
	int GetMinutes() {
		return GetHours() * 60 + (totalSecond - GetHours() * 3600) / 60 ;
	}
	void SetMinutes(int minutes) {
		totalSecond += minutes  * 60;
	}
	int GetSeconds() {
		return totalSecond - GetHours() * 3600 - GetMinutes() * 60;
	}
	void SetSeconds(int seconds) {
		totalSecond += seconds;
	}
};
int main() {
	Accept();
	Time t(0, 0, 0);
	t.SetMinutes(1);
	t.SetSeconds(60);
	t.SetHours(2);
	cout << t.GetTotalSeconds();
	return 0;
}
