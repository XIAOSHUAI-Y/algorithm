#include <stdio.h>
int search(int* nums, int numsSize, int target);
int main()
{
    int nums[] = { 1,3,5,7,9,2,4,3,1,6,7,3 };
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 0;
    scanf("%d", &target);
    int index = search(nums, n, target);
    printf("The index of target %d is %d\n", target, index);
    return 0;
}

int search(int* nums, int numsSize, int target)
{
	for(int i=0;i<numsSize;i++){
        if(nums[i]==target){
            return i;
        }
    }
    return -1;
}
