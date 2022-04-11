#include <stdio.h>
int main(){
    int row;
    int col;
    int n;
    
    

    printf("enter size of square matrix");
    scanf("%d",&n);
    row = n;
    col = n;
    int r[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("enter element %d %d\n",i,j);
            scanf("%d",&r[i][j]);
        }
    }
    for(int k=0;k<row;k++){
        printf("\n");
        for(int m = 0;m<col;m++){
            printf("%d ",r[k][m]);
        }
    }
    int count = 0;
    for(int a=0;a<row;a++){
        for(int b =0;b<=a;b++){
            count = count + r[a][b];
        }
    }
    printf("lower triangle is %d\n",count); //lower triangle

    int count1 = 0;
    for(int c=0;c<row;c++){
        for(int d=0;d<col;d++){
            if(d>=c)
            {
                count1 += r[c][d];
            }
            
        }
    
    
    }
    printf("upper triangle is %d\n",count1); //upper triangle

    //left diagonal
    int count2 = 0;
    for(int e=0;e<row;e++){
        for(int f=0;f<=n;f++){
            if(e == f){
                count2 = count2 + r[e][f];
            }
        }
    }
    printf("left diagonal is %d\n",count2);

    //right diagonal
    int count3 = 0;
    for(int g=n-1;g>=0;g--){
        for(int h=n-1;h>=0;h--){
            if(g == h){
                count3 = count3 + r[g][h];
            }
        }
    }
    printf("right diagonal is %d",count3);
    
    

}