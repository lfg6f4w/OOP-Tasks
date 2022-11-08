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
	int hours;
	int minutes;
	int seconds;
public:
	Time(int hours, int minutes, int seconds) :
		hours(hours), minutes(minutes), seconds(seconds)
		/* SetTime (hours, minutes, seconds) to Avoid code duplication*/{
	}
	void SetTime(int hours, int minutes, int seconds) {
		if (hours < 0) hours = 0;
		if (minutes < 0) minutes = 0;
		if (seconds < 0) seconds = 0;
		this->hours = hours;
		this->minutes = minutes;
		this->seconds = seconds;
	}
	int GetTotalSeconds() {
		return (hours * 60 * 60) + (minutes * 60) + seconds;
	}
	int GetTotalMinutes() {
		return (hours * 60) + minutes;
	}
	void PrintHHMMSS() {
		cout << hours << ":" << minutes << ":" << seconds << "\n";
		// ToString(":");
	}
	string ToString(string seperator = "-") {
		ostringstream oss;
		oss << hours << seperator << minutes << seperator << seconds;
		return oss.str();
	}
	int GetHours() {
		return hours;
	}
	void SetHours(int hours) {
		if (hours < 0) hours = 0;
		this->hours = hours;
	}
	Time& SetHour(int hour) {
		if (hours < 0) hours = 0;
		this->hours = hours;
		return *this;
	}
	int GetMinutes() {
		return minutes;
	}
	void SetMinutes(int minutes) {
		if (minutes < 0)
			minutes = 0;
		this->minutes = minutes;
	}
	Time& SetMinute(int minutes) {
		if (minutes < 0)
			minutes = 0;
		this->minutes = minutes;
		return *this;
	}
	int GetSeconds() {
		return seconds;
	}
	void SetSeconds(int seconds) {
		if (seconds < 0)
			seconds = 0;
		this->seconds = seconds;
	}
	Time& SetSecond(int seconds) {
		if (seconds < 0)
			seconds = 0;
		this->seconds = seconds;
		return *this;
	}
};
int main() {
	Accept();
	Time t(0, 120, 120);
	t.PrintHHMMSS();
	t.SetHour(5).SetMinute(45).SetSecond(20);
	t.PrintHHMMSS();
	return 0;
}

