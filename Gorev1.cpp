#include <iostream>
using namespace std;
#define G 9.80665
#define DIST(g,t) 0.5*(g)*(t)*(t)

int main() {
	float t,x;
	cout << "Type the time:";
	cin >> t;
	x = DIST(G, t);
	cout << "Here is the distance:" << x;
}
