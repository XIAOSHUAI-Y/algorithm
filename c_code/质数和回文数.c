//#include <stdio.h>
//
//int isPrime(int x)
//{
//	int i,ret=1;
//	if(x==1||(x%2==0&&x>2)){
//		ret=0;
//	}
//	for(i=3;i<x;i+=2){
//		if(x%i==0){
//			ret=0;
//			break;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int a,b;
//	scanf("%d %d",&a,&b);
//	int digit,ret=0;
//	int i=a,m;
//	for(;i<b;i++){
//	m=i;
//		if(isPrime(i)==1){ 
//	        while(m>0){
//		        digit=m%10;
//		        ret=ret*10+digit;
//		        m/=10;
//		    }
//		    if(ret==i){
//		    	printf("%d\n",ret);
//			}
//			ret=0;
//	    }
//	   
//	}
//	return 0;
//}

#include <stdio.h>

// 0 -> ÊÇ
// 1 -> ²»ÊÇ 
char is[60384000];

int cnt;
int a, b;

void is_prime() {
	for (int i = 2; i <= b; i++) {
		if (!is[i]) {
			for (int j = 2; j * i <= b; j++) {
				int mid = j * i;
				
				if (!is[mid]) {
					is[mid] = 1;
				}
			}
		}
		
		if (!is[i] && i >= a && i <= b) {
			if (is_p(i)) {
				printf("%d\n", i);
			}
		}
	}	
}

int is_p(int t) {
	int sum = 0, tmp = t;
	
	while (tmp) {
		sum = sum * 10 + tmp % 10;
		tmp /= 10; 
//		printf("%d\n", tmp);
	}
	
	return sum == t;
}

int main() {
	scanf("%d %d", &a, &b);
	
	is_prime(a, b);
} 
 
