#include<stdio.h>
float calcpercentage(int totalmarks,int maxmarks);
int main (){
    int subject,marks,total=0;
    printf("enter number of subjects:");
    scanf("%d",&subject);

    for(int i=1;i<=subject;i++ ){
        printf("enter marks:");
        scanf("%d",&marks);
        total+=marks;
    }
    float percentage =calcpercentage(total,subject*100);
    printf("percentage=%.2f%%",percentage);
    return  0;
    
}
float calcpercentage(int totalmarks,int maxmarks)
{
    return((float)totalmarks * 100 / maxmarks);
}