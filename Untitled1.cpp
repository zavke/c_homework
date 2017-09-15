#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
main()
{
int i,j,num=0,count=0;//i,j只是用來跑回圈；count用來計算輸入幾個字串 

struct eng//結構eng 
 {
  char s[10];//字串，用來存放輸入的字串 
 }*str;//指標變數指向eng結構 

struct eng tmp;//結構變數，後面會用來做氣泡排序法的暫存 
str=(struct eng*)malloc(10*sizeof(struct eng));//配置動態記憶體，配置10個 

for(i=0;;i++)//輸入字串 
 {
  printf("請輸入字串\n");
  gets((str+i)->s);    
  if((str+i)->s[0]=='s'&&(str+i)->s[1]=='t'&&(str+i)->s[2]=='o'&&(str+i)->s[3]=='p')//當輸入為stop時程式break
   {
    strset((str+i)->s,'~');//將stop清空 
    break;
   } 
  count++;//計算輸入次數 
 }
//第一次氣泡排序法--------------------------------------------------------- 
for(i=0;i<count;i++) 
 for(j=0;j<(count-i);j++)
   if((str+j)->s[num]>(str+j+1)->s[num])//依字母的順序做排序 
    {
    tmp=*(str+j);
    *(str+j)=*(str+j+1);
    *(str+(j+1))=tmp;
    }
//第23456....次的氣泡排序法，num代表字串的第N個字母-------------------------   
 for(num=1;num<=10;num++) 
 {   
  for(i=0;i<count;i++)
   for(j=0;j<(count-i);j++)   
    if((str+j)->s[num]>(str+j+1)->s[num] && strncmp((str+j)->s,(str+j+1)->s,num)==0)//當第(num-1)個字母相同時，才執行氣泡排序法(&&後面部分 
     {
       tmp=*(str+j);
       *(str+j)=*(str+j+1);
       *(str+(j+1))=tmp;
      }
  }       
 //氣泡排序法到此結束^^-------------------------------------------
printf("你輸入的字串有%d個\n",count);//輸出
printf("字母從小到大排序為\n");
for(i=0;i<count;i++)  
printf("%s\n",(str+i)->s);
system("pause");
}
//不完整：只能輸入10個字串(第9行－－－－－可以改成配置1000個ＸＤ
//參考：課本14-6，函數strset，strncmp在課本C-11 
