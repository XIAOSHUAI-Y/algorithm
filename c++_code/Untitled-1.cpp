#include <cstdio>
#include <algorithm>
using namespace std;

int main (void) {
	int a[5] = {1, 2, 3, 4, 5};
	fill (a+1, a+4, 233);
	for (auto i : a) {
		printf ("%d ", i);
	}	// 输出：1 233 233 233 5 
    return 0;