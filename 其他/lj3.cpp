#include <stdio.h>
int main()
{
 
    enum color { red=1, green, blue };
 
    enum  color favorite_color;
 
    /* �û�����������ѡ����ɫ */
    printf("��������ϲ������ɫ: (1. red, 2. green, 3. blue): ");
    scanf("%d", &favorite_color);
 printf("c%",favorite_color);
    return 0;
}
