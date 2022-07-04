
#include<stdio.h>
inline void swap(float& x, float&y){
	float t=x;
	x=y;
	y=t;
}
int main(void) {
	int n, v;
	float a[100], b[100], c[100];
    
	scanf("%d %d", &n, &v);

	for (int i = 0; i < n; i++) {

		scanf("%f %f", &a[i], &b[i]);
		c[i] = b[i] / a[i];
	}
	//Bubble sort
	for(int i=n-1;i>0;i--){
		for(int j=0;j<i;j++){
			if(c[j]<c[j+1]){
				swap(c[j],c[j+1]);
				swap(b[j],b[j+1]);
				swap(a[j],a[j+1]);
			}
		}
	}	

	float maxv=b[0];
	float maxw=a[0];
	for(int j=0;j<n;j++){
		if(a[j]<v){
			if(a[j]+a[j+1]<=v){
				if(maxv<b[j]+b[j+1]){
					maxv=b[j]+b[j+1];
				}
			}
			else if(a[j]+a[j+1]>v){
				if(maxv<b[j]){
					maxv=b[j];
				}
			}
		}
	}
	printf("%f \n",maxv);
}	
