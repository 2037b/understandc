#include<stdio.h>
#define M 4
#define N 3
int main()
{
    int a[M][N],b[N][M],c[M][M]={0};
    
    int i,j,k;
    
    puts("请输入第一个矩阵:"); 
    for(i = 0;i<M;i++)
        for(j = 0;j<N;j++)
            scanf("%d",&a[i][j]);
            
    puts("请输入第二个矩阵:");
    for(i = 0;i<N;i++)
        for(j = 0;j<M;j++)
            scanf("%d",&b[i][j]);
                 
    puts("第一个矩阵:");
    for(i = 0;i<M;i++){
        for(j = 0;j<N;j++)
            printf("%d\t",a[i][j]);
        putchar('\n');
    }
            
    puts("第二个矩阵:");
    for(i = 0;i<N;i++){
        for(j = 0;j<M;j++)
            printf("%d\t",b[i][j]);
        putchar('\n');
    }
    
    for(i = 0;i<M;i++)
        for(j = 0;j<M;j++)
            for(k = 0;k<N;k++)
                c[i][j] += a[i][k]*b[k][j];     //矩阵相乘的规则；
    
    puts("这两个矩阵相乘的结果为:");            
    for(i = 0;i<M;i++){
        for(j = 0;j<M;j++)
            printf("%d\t",c[i][j]);
        putchar('\n');
        }
    
    return 0;
}