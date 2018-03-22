#include<stdio.h>
#include<stdlib.h>

int compare_int(const void *a, const void *b){
    return *(int*)b - *(int*)a;
}

main(){
	
	while(1){
		
		int n,a[1002],i,gap,mingap;
		
		for(i=0;i<=1001;i++){
			a[i]=0;
		}
		
		scanf("%d",&n);
		
		if(n==0){
			break;
		}
		
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		
		qsort(a,n,sizeof(int),compare_int);
		
		mingap=a[0]-a[1];
		
		for(i=0;i<n-1;i++){
			gap=a[i]-a[i+1];
			if(mingap>gap){
				mingap=gap;
			}
		}
		
		printf("%d\n",mingap);
		
	}
	
	return 0;
	
}
