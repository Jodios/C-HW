#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int sum = 0;
	int k;
	cin >> k;
	vector<int> v;
	for (int i = 1; i <= k; i++) {
		v.push_back(i);
	}
	for (int i = 0; i < v.size(); i++) {
		int temp = v.at(i);
		cout << temp << " ";
		sum += temp;

	}
	cout << "\nsum = " << sum << endl;


	return 0;
}
