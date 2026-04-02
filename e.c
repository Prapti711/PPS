#include <stdio.h>
int main()
{
    int n;
    printf("Enter a size of array:");
    scanf("%d",&n);

    int a[n];
    int i;
    

    for (int i = 0; i < n; i++) 
    {
        printf("a[%d] enter karo: ", i + 1);  
        scanf("%d", &a[i]);            
    }

    int position;

    printf("Insert Position (1 thi %d): ", n);
    scanf("%d", &position);


    printf("Insert : a[%d] = %d\n", position, a[position - 1]);

    printf("\nArray: ");
    for (int i = 0; i < n; i++) {
        printf("a[%d]=%d  ", i + 1, a[i]);
    }
    printf("\n");

    
    printf("Which position do you want to upadate(1 thi %d): ", n);
    scanf("%d", &position);

    int value;
    printf("a[%d] ni navi kimat: ", position);
    scanf("%d", &value);
    a[position - 1] = value; 

    printf("\nUpdated Array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("a[%d]=%d  ", i + 1, a[i]);
    }
    printf("\n");

    int del;
    printf("Kayu array delete karvu che (1 thi %d): ", n);
    scanf("%d", &del);


    for (int i = del - 1; i < n - 1; i++)
    {
       a[i] = a[i + 1];
    }
    n--;  


    printf("\nArray after delete: ");
    for (int i = 0; i < n; i++) 
    {
     printf("arr[%d]=%d  ", i + 1, a[i]);
    }
    printf("\n");

}

