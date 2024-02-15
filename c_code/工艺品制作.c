#include <stdio.h> 

int main()
{
	int w,x,h,q,sum=0;
	scanf("%d %d %d\n%d",&w,&x,&h,&q);
	int a[w+10][x+10][h+10];
	for(int x4=0;x4<=w;x4++){
			for(int y4=0;y4<=x;y4++){
				for(int z4=0;z4<=h;z4++){
					a[x4][y4][z4]=0;
				}
			}
		}
	int x1,y1,z1,x2,y2,z2;
	
	for(int i=0;i<q;i++){
		
		scanf("%d %d %d %d %d %d",&x1,&y1,&z1,&x2,&y2,&z2);
		if(x1<=x2&&y1<=y2&&z1<=z2){
		
		    for(int x3=x1;x3<=x2;x3++){
			    for(int y3=y1;y3<=y2;y3++){
				    for(int z3=z1;z3<=z2;z3++){
					    a[x3][y3][z3]=1;
					}
				}
			}
		}
	}
		for(int x4=1;x4<=w;x4++){
			for(int y4=1;y4<=x;y4++){
				for(int z4=1;z4<=h;z4++){
					if(a[x4][y4][z4]==0){
						sum++;
					}
				}
			}
		}
	printf("%d",sum);
	return 0;
}
