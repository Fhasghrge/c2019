#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    FILE *fp = NULL;
    char buff[9999];
    printf("��ѡ�������\n1.��ʾ����б�\n2.����\n3.���\n4.�ر��ļ�");
    while(1){
    printf("\n");
    scanf("%d",&a);
    switch (a){
    case 1:
         fp = fopen("D:/a1.txt","r");
         int i = 1;
         while(fgets(buff, 25, (FILE*)fp)){
            printf("%d: %s",i++,buff );
         }
         fclose(fp);
         break;
    case 2:
        printf("ѡ����Ҫɾ��������:\n");
        int h;
        scanf("%d",&h);
        fp = fopen("D:/a1.txt","r");
        int p = 1;
         while(fgets(buff, 25, (FILE*)fp)){
            if(p == h){
                printf("*\n");
                p++;
            }
            else
            printf("%d: %s",p++,buff );
         }
         fclose(fp);
         break;

    case 3:
        fp = fopen("D:/a1.txt", "a+");
        //fprintf(fp, "This is testing for fprintf...\n");
        char str[500];
        scanf("%s",str);
        fputs("\n",fp);
        fputs(str,fp);
        fclose(fp);
        break;
    case 4:
        fclose(fp);
        break;
        default :break;
    }
    }
    return 0;
}
