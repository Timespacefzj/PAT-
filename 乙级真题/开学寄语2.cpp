#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,M;
    scanf("%d%d",&N,&M);
    int A[M];
    for(int i=0;i<M;++i)
        scanf("%d",&A[i]);
    sort(A,A+M);//�Դ洢��Ҫ��ɵ���Ʒ��ŵ������������
    int n1=0,n2=0;//ѧ�����������ͱ������Ʒ������
    while(N--){
        char name[5];
        int K;
        scanf("\n%s %d",name,&K);
        bool output=false;//�Ƿ��Ѿ����������
        while(K--){
            int k;
            scanf("%d",&k);
            if(binary_search(A,A+M,k)){//������A�н��ж��ֲ���
                if(!output)//û�����
                    printf("%s:",name);//�������
                printf(" %04d",k);//�����Ʒ���
                output=true;
                ++n2;
            }
        }
        if(output){
            ++n1;
            printf("\n");
        }
    }
    printf("%d %d",n1,n2);//���ѧ�����������ͱ������Ʒ������
    return 0;
}
