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
class Date {
private:
	int year;
	int month;
	int day;
public:
	Date() {
		year = 1978;
		month = 1;
		day = 1;
	}
	Date(int year, int month, int day) {
		this->year = year;
		this->month = month;
		this->day = day;
	}
	void setYear(int year) {
		this->year = year;
	}
	void setMonth(int month) {
		this->month = month;
	}
	void setDay(int day) {
		this->day = day;
	}
	int getYear() {
		return year;
	}
	int getMonth() {
		return month;
	}
	int getDay() {
		return day;
	}
	void displayAll() {
		cout << year << '-' << month << '-' << day << ed;
	}
	void displayYearMonth() {
		cout << year << '-' << month << ed;
	}
	void displayMonthDay() {
		cout << month << '-' << day << ed;
	}
};
class Time {
private:
	int hour;
	int minutes;
	int second;
public:
	Time() {
		hour = 0;
		minutes = 0;
		second = 0;
	}
	Time(int hour,int minutes,int second) {
		this->hour = hour;
		this->minutes = minutes;
		this->second = second;
	}
	void setHour(int hour) {
		this->hour = hour;
	}
	void setMinutes(int minutes) {
		this->minutes = minutes;
	}
	void setSecond(int second) {
		this->second = second;
	}
	int getHour() {
		return hour;
	}
	int getMinutes() {
		return minutes;
	}
	int getSecond() {
		return second;
	}
	void display() {
		cout << hour << ':' << minutes << ':' << second << ed;
	}
};
class DateAndTime {
private:
	Date date;
	Time time;
public:
	void setDateAndTime(const Time& time, const Date& date) {
		this->date = date;
		this->time = time;
	}
	void displayDateAndTime() {
		date.displayAll();
		time.display();
	}
};
int main() {
	Accept();
	Date d1(2003, 5, 12),d2;
	Time t1(12, 5, 12), t2;
	DateAndTime dt;
	dt.setDateAndTime(t1, d1);
	dt.displayDateAndTime();
	return 0;
}
