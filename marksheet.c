#include<stdio.h>
int main()
{
    float Maths,PPS,FAI,BEE,EGD,total;
    float per;

    printf("Enter marks of Maths,PPS,FAI,BEE,EGD: ");
    scanf("%f,%f,%f,%f,%f",&Maths,&PPS,&FAI,&BEE,&EGD);

    total = Maths+PPS+FAI+BEE+EGD;
    per = total*100/500;

    printf("Total marks;%f   per=%f\n",total,per);
    
    if(per>=90)
    {
        printf("Grade is : A");
    }
    else if(per>=75)
    {
        printf("Grade is : B");
    }
    else if(per>=60)
    {
        printf("Grade is : C");
    }
    else if(per>=40)
    {
        printf("Grade is : D");
    }
    else if(per<40)
    {
        printf("Fail");
    }
}