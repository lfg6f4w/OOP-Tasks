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
class ConfigurationManger {
private:
	string configuration_path;
	vector<string> servers_ips;
	string aws_service_url;
	// Other heavy data
	ConfigurationManger(string configuration_path) :
			configuration_path(configuration_path) {
	}
	bool is_loaded = false;
	static ConfigurationManger* manager;
public:
	static ConfigurationManger* GetManager(const string& value) {
		if (manager == nullptr) {
			cout << "Creating a new ConfigurationManger\n";
			manager = new ConfigurationManger(value);
		}
		return manager;
	}
	void Load() {
		// cout << is_loaded << ed;
		if (is_loaded)
			return;
		// some heavy load
		cout << "Lazy loading\n";
		servers_ips.push_back("10.20.30.40");
		servers_ips.push_back("10.20.30.41");
		servers_ips.push_back("10.20.30.42");
		aws_service_url = "https://dynamodb.us-west-2.amazonaws.com";
		is_loaded = true;
	}
	string GetAwsServiceUrl() {	
		Load();
		return aws_service_url;
	}
	static void DeleteManager() {
		if (manager != nullptr) {
			cout << "Delete Manager\n";
			delete manager;
			manager = nullptr;
		}
		else cout << "Already Manager is empty\n";
	}
	~ConfigurationManger() {
		
	}
};
ConfigurationManger* ConfigurationManger::manager = nullptr;
void f1() {
	ConfigurationManger* mgr = ConfigurationManger::GetManager("/home/moustafa/conf_info.txt");
	cout<<mgr->GetAwsServiceUrl()<<"\n";
}

void f2() {
	ConfigurationManger* mgr = ConfigurationManger::GetManager("/home/moustafa/conf_info.txt");
	cout<<mgr->GetAwsServiceUrl()<<"\n";
}

int main() {
	Accept();
	f1();
	f2();
	ConfigurationManger::DeleteManager();
	return 0;
}
/*
Output : 
  Creating a new ConfigurationManger
  Lazy loading
  https://dynamodb.us-west-2.amazonaws.com
  https://dynamodb.us-west-2.amazonaws.com
  Delete Manager

*/

