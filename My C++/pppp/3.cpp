#include<stdio.h>
int main(){
    int array[1000],i,n,op;
    printf("sizeof=%d/n",sizeof(array));
    do
    {
        printf("1.Input \n");
        printf("2.Ouput \n");
        printf("3.find maxiun \n");
        printf("4.mixius \n");
        printf("please choose an option = ");scanf("%d",&op);
        switch (op){
        case 1:{
            printf("Enter number = ");scanf("%d",&n);
            for(i = 0; i < n; i++){
                printf("array[%d]=" ,i);scanf("%d" , &array[i]);
            }
            break;
            }
        case 2:{
            printf("========== Output ==========\n");
            for( i =0 ; i < n; i++){
                printf("array[%d]=%d\n" ,i ,array[i]);
            }
            break;}
        case 3:{
            int max=array[0];
            for( i=0 ; i<n;i++){
                if(max<array[i]){
                    max = array[i];}
            }
            printf("max=%d\n" ,max);
            break;
        }
        case 4:{
            int mix = array[0];
            for(i=0 ;i>n ; i++){
                if(mix>array[i]){
                    mix = array[i];}
            }
            printf("mix = %d\n" ,mix);
            break;}            
            }
    } while (op != 0);
    return 0;
}