#include <stdio.h>
int main()
{
    freopen("E://input.txt","r",stdin);
    char c, symbols[3][10][5] = {0};
    int count[3];
    for(int symbol = 0; symbol < 3; symbol++)
    {
        int index;
        for(index = 0; (c = getchar()) != '\n'; )
        {
            if(c == '[') scanf("%[^]]", symbols[symbol][index++]);
        }
        count[symbol]=index;
    }
    int N, m[5];
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        for(int i = 0; i < 5; i++)  scanf("%d", m + i);
        if(m[0] > 0 && m[0] <= count[0]
        && m[1] > 0 && m[1] <= count[1]
        && m[2] > 0 && m[2] <= count[2]
        && m[3] > 0 && m[3] <= count[1]
        && m[4] > 0 && m[4] <= count[0])
            printf("%s(%s%s%s)%s\n", symbols[0][--m[0]], symbols[1][--m[1]],
                   symbols[2][--m[2]], symbols[1][--m[3]], symbols[0][--m[4]]);
        else puts("Are you kidding me? @\\/@");
    }

    return 0;
}

