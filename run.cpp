#include <iostream>
#include <limits>
#include <vector>

using namespace std;

class Big {
	public:
		Big() : v(10000, 5.555) {}
	private:
		vector<double> v;
};
	
int main()
{
	cout << "Start of main" << endl;
	vector<Big> bigs;
	cout << "How many loops? ";
	
	long long num;
	cin >> num;

	for (long long i = 0; i < num; ++i) {
		if (i % 100 == 0)
			cout << "pushing big" << endl;
		bigs.push_back(Big());
	}
	return 0;
}
