#include <stdio.h>
#define LEN 120
struct Ques {
    int qscore;     // ����
    int qsnum;      // ѡ�����
    int qrnum;      // ��ȷѡ�����
    int qawr[128];  // ������ȷѡ��
}ques[LEN];

int main (void)
{
    freopen("E://input.txt","r",stdin);
    int snum;           // ѧ������
    int qnum;           // ��Ŀ����
    int wrong[LEN]= {0}; // ������Ϣ����
    int wmax = 0;              // ���������
    char ch;
    int i;
    int j;
    int k;
    scanf("%d %d", &snum, &qnum);
    for (i = 1; i <= qnum; i++)
    {
        ques[i].qawr['a'] = 0;
        ques[i].qawr['b'] = 0;
        ques[i].qawr['c'] = 0;
        ques[i].qawr['d'] = 0;
        ques[i].qawr['e'] = 0;
        scanf("%d %d %d", &ques[i].qscore, &ques[i].qsnum, &ques[i].qrnum);
        for (j = 1; j <= ques[i].qrnum; j++)
        {
            scanf(" %c", &ch);
            ques[i].qawr[(int)(ch)] = 1;
        }
    }
    getchar();

    int len;   // ��ʼ�ǵ�1����
    int mys;   // ���ѧ��ѡ�˼���ѡ��
    char slt;  // ѡ��ѡ��
    for (i = 1; i <= snum; i++)
    {
        int score = 0;  // ÿ��ѧ���ĳ�ʼ����
        len = 1;
        // һ�� while ѭ����һλѧ�������ȫ�����
        while ((ch = getchar()) != '\n')
        {
            if (ch == '(')
            {
                int cawr[128] = {0}; // ������¼����������, ��1, ��0
                int flag=0;
                scanf("%d", &mys);
                for (j = 1; j <= mys; j++)
                {
                    scanf(" %c", &slt);
                    cawr[(int)(slt)] = 1;
                }
                for (k = 'a'; k <= 'e'; k++) {
                    if (cawr[k] != ques[len].qawr[k])
                    {
                        wrong[len]++;
                        if (wrong[len] > wmax) wmax = wrong[len];
                        flag=1;
                        break;
                    }
                }
                if(flag==0) score += ques[len].qscore;
                len++; // ���뵽��һ��
            }
        }
        printf("%d\n", score); // ��ӡ��λͬѧ�ĵ÷�
    }
    if (wmax == 0)
    {
        printf("Too simple\n");
    }
    else
    {
        printf("%d",wmax);
        for (i = 1; i <= qnum; i++)
        {
            if (wrong[i] == wmax) printf(" %d",i);
        }
    }

    return 0;
}

