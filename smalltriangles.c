#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    // float area[n],s;
    double area[n],s;
    int i;
    for(int i=0;i<n;i++){
        // s=(tr[i].a+tr[i].b+tr[i].c)/2;
        s=(tr[i].a+tr[i].b+tr[i].c)/2.0;
        area[i]=sqrt(s* (s-tr[i].a)*(s-tr[i].b)*(s-tr[i].c));
    }
    /*
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (square(a[i]) > square(a[j]))
            {
                struct Triangle temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    */
    
    int j,k;
    double temp;
    struct triangle temp1;
    for(k=0;k<n;k++){
        for(j=0;j<n-k-1;j++){
            if(area[j]>area[j+1]){
                temp1=tr[j];
                tr[j]=tr[j+1];
                tr[j+1]=temp1;
            
                temp=area[j];
                area[j]=area[j+1];
                area[j+1]=temp;
                
            }
        }
    }
}
int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
