#include <stdio.h>

int main()
{
	int w,x,h,q,sum=0;
	scanf("%d %d %d\n%d",&w,&x,&h,&q);
	int a[w+10][x+10][h+10];
	for(int e=0;e<=w;e++){
		for(int f=0;f<=x;f++){
			for(int g=0;g<=h;g++){
				a[e][f][g]=0;
			}
		}
	}
	int x1,y1,z1,x2,y2,z2;
	for(int m=0;m<q;m++){
		scanf("%d %d %d %d %d %d",&x1,&y1,&z1,&x2,&y2,&z2);
		if(x1<=x2&&y1<=y2&&z1<=z2){
			for(int i=x1;i<=x2;i++){
				for(int j=1;j<=y2;j++){
					for(int k=1;k<=z2;k++){
						a[i][j][k]=1;
					}
				}
			}
		}
    }
	for(int e=1;e<=w;e++){
		for(int f=1;f<=x;f++){
			for(int g=1;g<=h;g++){
				if(a[e][f][g]==0){
					sum++;
				}
			}
		}
	}
	printf("%d",sum);
	return 0;
}
