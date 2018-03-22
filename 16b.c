#include<stdio.h>
#include<stdlib.h>

int compare_int(const void *a, const void *b){
    return *(int*)b - *(int*)a;
}

main(){
	
	while(1){
		
		int n,v[26],i,j,va[26],pt,k,l,win;
		char c[101];
		
		pt=0;
		
		for(i=0;i<=25;i++){
			v[i]=0;
			va[i]=0;
		}
		
		scanf("%d",&n);
		
		if(n==0){
			break;
		}
		
		for(i=1;i<=n;i++){
			scanf("%s",&c[i]);
			k=c[i]-65;
			v[k]++;
			for(j=0;j<=25;j++){
				va[j]=v[j];
			}
			qsort(va,26,sizeof(int),compare_int);
			if(va[0]-va[1]>n-i && pt==0){
				for(l=0;l<=25;l++){
					if(v[l]==va[0]){
						win=l;
					}
				}
				printf("%c %d\n",win+65,i);
				pt=1;
			}
			
		}
		
		if(pt==0){
			printf("TIE\n");
		}
		
	}
	
	return 0;
	
}

