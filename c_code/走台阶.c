 #include<stdio.h>

int jumpFloor(int target);

int main()
{
   int target = 0;
   scanf("%d", &target);
   int ret = jumpFloor(target);
   printf("%d\n", ret);
   return 0;
}

int jumpFloor(int n)
{
	if(n==1){
		return 1;
	}
	if(n==2){
		return 2;
	}
	else{
		return jumpFloor(n-1)+jumpFloor(n-2);
	}
}
