#include <stdio.h>
#define LEN 120
typedef struct Ques {
    int qscore;     // 满分
    int qsnum;      // 选项个数
    int qrnum;      // 正确选项个数
    int qawr[128];  // 所有正确选项
}s_ques;

int main (void) {
    int snum;           // 学生人数
    int qnum;           // 题目个数
    s_ques ques[LEN];   // 每道题的信息
    int wrong[LEN][128] = {0}; // 错误信息矩阵
    int wmax = 0;              // 最大错误次数
    char ch;
    int i;
    int j;
    int k;
    //freopen("E://input.txt","r",stdin);
    scanf("%d %d", &snum, &qnum);
    for (i = 1; i <= qnum; i++) {
        ques[i].qawr['a'] = 0;
        ques[i].qawr['b'] = 0;
        ques[i].qawr['c'] = 0;
        ques[i].qawr['d'] = 0;
        ques[i].qawr['e'] = 0;
        scanf("%d %d %d", &ques[i].qscore, &ques[i].qsnum, &ques[i].qrnum);
        for (j = 1; j <= ques[i].qrnum; j++) {
            scanf(" %c", &ch);
            ques[i].qawr[(int)(ch)] = 1;
        }
    }
    getchar();

    int len;   // 初始是第1道题
    int mys;   // 这个学生选了几个选项
    char slt;  // 选中选项
    for (i = 1; i <= snum; i++) {
        double score = 0.0;  // 每个学生的初始分数
        len = 1;
        // 一个 while 循环是一位学生答题的全部情况
        while ((ch = getchar()) != '\n') {
            if (ch == '(') {
                int cawr[128] = {0}; // 用来记录该题答题情况, 有1, 无0
                scanf("%d", &mys);
                for (j = 1; j <= mys; j++) {
                    scanf(" %c", &slt);
                    cawr[(int)(slt)] = 1;
                }

                // 学生这个选项答了, 而正确答案没有, 相应错误+1
                for (k = 'a'; k <= 'e'; k++) {
                    if (cawr[k] != ques[len].qawr[k]) wrong[len][k]++;
                    if (wrong[len][k] > wmax) wmax = wrong[len][k];
                }

                if (
                    // 所有选项全部匹配, 为完全正确
                    cawr['a'] == ques[len].qawr['a'] &&
                    cawr['b'] == ques[len].qawr['b'] &&
                    cawr['c'] == ques[len].qawr['c'] &&
                    cawr['d'] == ques[len].qawr['d'] &&
                    cawr['e'] == ques[len].qawr['e']
                )
                {
                    score += (double)(ques[len].qscore);
                }
                else if
                (
                    // 这一项学生答了, 而正确答案没有这一项, 该题答错
                    (cawr['a'] == 1 && ques[len].qawr['a'] == 0) ||
                    (cawr['b'] == 1 && ques[len].qawr['b'] == 0) ||
                    (cawr['c'] == 1 && ques[len].qawr['c'] == 0) ||
                    (cawr['d'] == 1 && ques[len].qawr['d'] == 0) ||
                    (cawr['e'] == 1 && ques[len].qawr['e'] == 0)
                ) {
                    // 该题答错
                    // do nothing
                } else {
                    // 部分正确
                    score += (double)(ques[len].qscore) / 2.0;
                }
                len++; // 进入到下一题
            }
        }
        printf("%.1f\n", score); // 打印这位同学的得分
    }

    if (wmax == 0)
    {
        printf("Too simple\n");
    }
    else
    {
        for (i = 1; i <= qnum; i++) {
            for (j = 'a'; j <= 'e'; j++) {
                if (wrong[i][j] == wmax) {
                    printf("%d %d-%c\n", wrong[i][j], i, j);
                }
            }
        }
    }

    return 0;
}
