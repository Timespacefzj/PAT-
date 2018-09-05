#include <stdio.h>
#define LEN 120
typedef struct Ques {
    int qscore;     // ����
    int qsnum;      // ѡ�����
    int qrnum;      // ��ȷѡ�����
    int qawr[128];  // ������ȷѡ��
}s_ques;

int main (void) {
    int snum;           // ѧ������
    int qnum;           // ��Ŀ����
    s_ques ques[LEN];   // ÿ�������Ϣ
    int wrong[LEN][128] = {0}; // ������Ϣ����
    int wmax = 0;              // ���������
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

    int len;   // ��ʼ�ǵ�1����
    int mys;   // ���ѧ��ѡ�˼���ѡ��
    char slt;  // ѡ��ѡ��
    for (i = 1; i <= snum; i++) {
        double score = 0.0;  // ÿ��ѧ���ĳ�ʼ����
        len = 1;
        // һ�� while ѭ����һλѧ�������ȫ�����
        while ((ch = getchar()) != '\n') {
            if (ch == '(') {
                int cawr[128] = {0}; // ������¼����������, ��1, ��0
                scanf("%d", &mys);
                for (j = 1; j <= mys; j++) {
                    scanf(" %c", &slt);
                    cawr[(int)(slt)] = 1;
                }

                // ѧ�����ѡ�����, ����ȷ��û��, ��Ӧ����+1
                for (k = 'a'; k <= 'e'; k++) {
                    if (cawr[k] != ques[len].qawr[k]) wrong[len][k]++;
                    if (wrong[len][k] > wmax) wmax = wrong[len][k];
                }

                if (
                    // ����ѡ��ȫ��ƥ��, Ϊ��ȫ��ȷ
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
                    // ��һ��ѧ������, ����ȷ��û����һ��, ������
                    (cawr['a'] == 1 && ques[len].qawr['a'] == 0) ||
                    (cawr['b'] == 1 && ques[len].qawr['b'] == 0) ||
                    (cawr['c'] == 1 && ques[len].qawr['c'] == 0) ||
                    (cawr['d'] == 1 && ques[len].qawr['d'] == 0) ||
                    (cawr['e'] == 1 && ques[len].qawr['e'] == 0)
                ) {
                    // ������
                    // do nothing
                } else {
                    // ������ȷ
                    score += (double)(ques[len].qscore) / 2.0;
                }
                len++; // ���뵽��һ��
            }
        }
        printf("%.1f\n", score); // ��ӡ��λͬѧ�ĵ÷�
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
