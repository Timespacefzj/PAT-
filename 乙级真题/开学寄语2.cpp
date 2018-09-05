#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,M;
    scanf("%d%d",&N,&M);
    int A[M];
    for(int i=0;i<M;++i)
        scanf("%d",&A[i]);
    sort(A,A+M);//对存储需要查缴的物品编号的数组进行排序
    int n1=0,n2=0;//学生的总人数和被查缴物品的总数
    while(N--){
        char name[5];
        int K;
        scanf("\n%s %d",name,&K);
        bool output=false;//是否已经进行了输出
        while(K--){
            int k;
            scanf("%d",&k);
            if(binary_search(A,A+M,k)){//在数组A中进行二分查找
                if(!output)//没输出过
                    printf("%s:",name);//输出名字
                printf(" %04d",k);//输出物品编号
                output=true;
                ++n2;
            }
        }
        if(output){
            ++n1;
            printf("\n");
        }
    }
    printf("%d %d",n1,n2);//输出学生的总人数和被查缴物品的总数
    return 0;
}
