#include <stdio.h>

void move (int n,char from,char to)
{
    printf("�ѵ�%d���Ӵ�%c�Ƶ�%c\n",n,from,to);
}

void hanoi(int n,char from,char by,char to)
{
    if(n == 1)move(1,from,to);
    else
    {
    hanoi(n - 1,from,to,by);
    move (n,from,to);
    hanoi(n-1,by,from,to);
    }
}


int main()
{
    int n;
    printf("����һ����������:");
    scanf("%d",&n);
    char from,by,to;
    from = 'A';
    by = 'B';
    to = 'C';
    hanoi(n,from,by,to);
    return 0;
}
