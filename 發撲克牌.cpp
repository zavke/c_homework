#include <stdio.h> //for printf()
#include <stdlib.h> //for system()
#include <time.h>

int player[4][13][2]={0};//全域變數player[4位玩家][13張牌][0:數字1:花色]

void out_flower()
{
    int temp[13][4]={0};
    int i,out_number,out_flower;
    srand(time(0));
    for(i=0;i<52;i++)
    {
      out_number=rand()%13;
      out_flower=rand()%4;
      /*判斷是否有重複出牌*/
      if(temp[out_number][out_flower]==0)
      {
       temp[out_number][out_flower]=1;
       player[i/13][i%13][0]=out_number;
       player[i/13][i%13][1]=out_flower;
      }
      else
      {
       i--;
      }
//-------------------------------------

    }
    return;
}
int main(void)
{
    char flower[4][9]={"@","$","#","%"};
    char number[13][4]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
    int i,j;
    out_flower();
  
    for(i=1;i<53;i++)
    {
       if(i==1)printf("PLAY1:"); 
       printf(" %s%s ",flower[player[i/13][i%13][1]],number[player[i/13][i%13][0]]);
       if(i%13==0)printf("\n");
       if(i==13)printf("PLAY2:");
       if(i==26)printf("PLAY3:");
       if(i==39)printf("PLAY4:");
    }
    system("pause");
 return 0;
}
