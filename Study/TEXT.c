#include<stdio.h>
int main()
{
    //数据存入
	int i,n,j,min;
	scanf("%d",&n);
	while(1>=n||n>10)
	{
		printf("你输入的范围不正确，请重新输入：");
		scanf("%d",&n);
	}
	int a[n];
    for(i=0;i<n;i++)
	{
    	scanf("%d",&a[i]); 
	}
	
	//选择排序 
	for(i = 0; i < n-1; i++)
	{
		min = i;
		for(j = i+1; j < n; j++)
		{
			if(a[j] < a[min])
				min = j;
		}
		if(min != i)
		{
			int t=a[min];
			a[min]=a[i];
			a[i]=t;
		}
	}
    for(i=0; i < n; i++)
	{
    	printf("%d ",a[i]);
	}
	
	return 0;
}
