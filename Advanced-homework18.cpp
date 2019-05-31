/* 計算機概論實務-進階練習作業-作業18*/
/* 製作人：郭柏鋒 */
/* 完成時間：2019/05/24 10:00 */
#include <stdio.h>  //函示庫 
#include <stdlib.h> //函示庫

int main(void)
{
	printf("計算機概論實務-進階練習作業-作業18\n");
    printf("製作人：郭柏鋒\n");
	printf("完成時間：2019/05/24 10:00\n");
	printf("-----------------------------------\n");
    char a1, a2;   //定義 
    double d1, d2; //定義
    int i1,i2;     //定義 
    printf("a1=%p, a2=%p\n", &a1, &a2); //顯示 
    printf("d1=%p, d2=%p\n", &d1, &d2); //顯示  
    printf("i1=%p, i2=%p\n", &i1, &i2); //顯示   
    system("pause");//暫停視窗 
    return 0;//回傳值 0 
}
