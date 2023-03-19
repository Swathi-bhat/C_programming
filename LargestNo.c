// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,i,a[100];
    printf("Enter the total number of elements: ");
    scanf("%d",&n);
    printf("\nEnter the %d elements\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++){
        if(a[0]<a[i])
        a[0]=a[i];
    }
    printf("The largest element in the array is %d",a[0]);
    return 0;
}