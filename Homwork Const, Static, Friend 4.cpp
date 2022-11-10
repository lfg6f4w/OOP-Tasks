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

class StudentGradesInfo {
private:
	string student_id;
	vector<double> grades;
	vector<string> courses_names;
	static int statistics_total_prints;
	double AdjustGrade(const double& grade) {
		if ( grade > 100 | grade < 0)
			return -1;
		return grade;
	}
public:
	// ??????????????
	// It seems developer wants to prevent users from using empty constructor
	// Just asserting will break the program
	// Removing this constructor will disallow the default constructor!
	//StudentGradesInfo() {
	//	assert(false);
	//}
	
	StudentGradesInfo(string student_id_) {
		student_id = student_id_;
	}
	
	bool AddGrade(double grade, string course_name) {
		grade = AdjustGrade(grade);
		if (grade == -1) {
			cout << "Error\n";
			return false;
		}
		for (int i = 0; i < (int)courses_names.size(); ++i)
			if(course_name == courses_names[i])
				return false;	// already added
		grades.push_back(grade);
		courses_names.push_back(course_name);
		return true;
	}
	void PrintAllCourses() {
		++statistics_total_prints;
		cout << "Grades for student: " << GetStudentId() << "\n"; // student_id => don't repeat yourself
		for (int i = 0; i < (int) grades.size(); ++i)
			cout << "\t" << courses_names[i] << " = " << grades[i] << "\n";
	}
	pair<string, double> GetCourseGradeInfo(int pos) {
		if (pos < 1 || pos > (int) grades.size())
			return make_pair("", -1);
		return make_pair(courses_names[pos - 1], grades[pos - 1]);
	}
	string GetStudentId() {
		return student_id;
	}
	int GetTotalCoursesCount() {
		return grades.size();
	}
	// Use GetTotalCoursesCount for naming consistency
	pair<double, double> get_total_gradesSum() {
		double sum = 0, total = 0;
		for (int i = 0; i < (int) grades.size(); ++i)
			sum += grades[i], total += 100;
		return make_pair(sum, total);
	}
};
int StudentGradesInfo::statistics_total_prints = 0;
int main() {
	Accept();
	StudentGradesInfo st1("S000123");
	st1.AddGrade(70, "Math");
	st1.AddGrade(70, "programming 1");
	st1.AddGrade(85, "programming 2");
	st1.PrintAllCourses();
	pair<double, double> p = st1.get_total_gradesSum();
	cout<<p.first<<"/"<<p.second<<"\n";
	cout<<"Bye\n";
	return 0;
}
