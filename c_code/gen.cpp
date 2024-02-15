#include <iostream>
#include <cmath>
using namespace std;
double a, b, c;
double det;
int main()
{
	scanf("%lf %lf %lf", &a, &b, &c);
	det = b * b - 4 * a * c;
	if(a == 0 && b == 0 && c == 0){
		printf("Zero Equation");
	}
	else if(a == 0 && b == 0 && c != 0){
		printf("Not An Equation");
	}
	else{
		if(a == 0){
				printf("%.2lf\n",-c/b);
		}
		else{
			if(det == 0){
				printf("%.2lf\n", -b/(2*a));
			}
			else if(det > 0){
				double x1, x2;
				x1 = (-b + sqrt(det))/(2*a);
				x2 = (-b - sqrt(det))/(2*a);
				printf("%.2lf\n%.2lf\n",x1, x2);
			}
			else{
				double m, n;
				m = (-b)/(2*a);
				n = sqrt(-det)/(2*a);
				if(b == 0){
					printf("0.00+%.2lfi\n0.00-%.2lfi\n", n, n);
				}
				else{
					printf("%.2lf+%.2lfi\n%.2lf-%.2lfi\n", m, n, m, n);
				}
			}
		}
	}
	return 0;
}
