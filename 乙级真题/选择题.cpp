#include <stdio.h>
#define LEN 120
struct Ques {
    int qscore;     // 满分
    int qsnum;      // 选项个数
    int qrnum;      // 正确选项个数
    int qawr[128];  // 所有正确选项
}ques[LEN];

int main (void)
{
    freopen("E://input.txt","r",stdin);
    int snum;           // 学生人数
    int qnum;           // 题目个数
    int wrong[LEN]= {0}; // 错误信息矩阵
    int wmax = 0;              // 最大错误次数
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

    int len;   // 初始是第1道题
    int mys;   // 这个学生选了几个选项
    char slt;  // 选中选项
    for (i = 1; i <= snum; i++)
    {
        int score = 0;  // 每个学生的初始分数
        len = 1;
        // 一个 while 循环是一位学生答题的全部情况
        while ((ch = getchar()) != '\n')
        {
            if (ch == '(')
            {
                int cawr[128] = {0}; // 用来记录该题答题情况, 有1, 无0
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
                len++; // 进入到下一题
            }
        }
        printf("%d\n", score); // 打印这位同学的得分
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

