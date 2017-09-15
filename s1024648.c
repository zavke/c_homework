#include<stdio.h> 
#include<stdlib.h>
#include<string.h>

int main(void)
{

  char getcrod[] = "0000000000000";
  //getcrod[13] = getcrod[];
  /*char crod1 = '0';
    char crod2 = '0'; 
    char crod3 = '0';
    char crod4 = '0';i
    char crod5 = '0';
    char crod6 = '0';
    char crod7 = '0';
    char crod8 = '0';
    char crod9 = '0';
    char crod10 = '0';
    char crod11 = '0';
    char crod12 = '0';
    char crod13 = '0';
    printf("%c", crod6);
    //int length = sizeof(getcrod)/sizeof(getcrod[0]);
    */
  int i,j,k,flag = 0,numflag =0;
  //getcrod[] = crod;
  //printf("輸入的%c", strlen(getcrod));
  printf("請輸入電力座標—");
  scanf("%s",getcrod);
  int len = strlen(getcrod);
  printf("%d\n",len);
  do{
    flag = 0;
    printf("輸入的1%c\n", getcrod[1]);
    printf("11 %c\n", getcrod[11]);
    printf("8 %c\n", getcrod[5]);
    printf("10 %c\n", getcrod[10]);
    printf("9 %c\n", getcrod[9]);

    if(strlen(getcrod)<8||strlen(getcrod)>11||strlen(getcrod)==10)
      {
        printf("輸入資料不正確1\n");
        printf("請重新輸入電力座標—");
        scanf("%s",getcrod);
        flag = 1;
        //i--;
      }
    else{

      for(i=0;i<len;i++){
        if(i == 0 || i == 5 ||i == 6){
          if(!((getcrod[i] >= 'a' && getcrod[i] <= 'z') || (getcrod[i] >= 'A' && getcrod[i] <= 'Z'))){
            flag = 1;
          }else{
            if (!flag)flag = 0;
          }
        }
        else{
          if (getcrod[i]<'0' || getcrod[i] > '9'){
            flag = 1;
          }else{
            if(!flag) flag = 0;
          }
        }
      }
      if(!flag){
        printf("correct\n");
      }
    }
  }while(flag);

}


