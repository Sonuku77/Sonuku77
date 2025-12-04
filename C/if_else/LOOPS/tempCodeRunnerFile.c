
    printf("enter a number ");
    scanf("%d",&x);
    int sum=0;
    int LD=0;
        while(x!=0){
       LD=x%10;
        if(LD%1==0){
       sum=sum+LD;