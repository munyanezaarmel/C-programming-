 
   #include<stdio.h>
   int main(){
                    int sum=0,p,i,t;
                    printf("\n Perfect numbers are: ");
                    for(i= 1; i<= 1000; i++){
                    p=1;
                    t=i/2;
                    while(p<=t){
                    if(i % p == 0)
                    sum=sum+p;
                    p++;
                    }
                    if(sum==i)
                    printf("\n %d \n",i);
                    sum=0;
                    }
                    system("pause");
                    return 0;
                    }
