#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
main()
{
int i,j,num=0,count=0;//i,j�u�O�ΨӶ]�^��Fcount�Ψӭp���J�X�Ӧr�� 

struct eng//���ceng 
 {
  char s[10];//�r��A�ΨӦs���J���r�� 
 }*str;//�����ܼƫ��Veng���c 

struct eng tmp;//���c�ܼơA�᭱�|�ΨӰ���w�ƧǪk���Ȧs 
str=(struct eng*)malloc(10*sizeof(struct eng));//�t�m�ʺA�O����A�t�m10�� 

for(i=0;;i++)//��J�r�� 
 {
  printf("�п�J�r��\n");
  gets((str+i)->s);    
  if((str+i)->s[0]=='s'&&(str+i)->s[1]=='t'&&(str+i)->s[2]=='o'&&(str+i)->s[3]=='p')//���J��stop�ɵ{��break
   {
    strset((str+i)->s,'~');//�Nstop�M�� 
    break;
   } 
  count++;//�p���J���� 
 }
//�Ĥ@����w�ƧǪk--------------------------------------------------------- 
for(i=0;i<count;i++) 
 for(j=0;j<(count-i);j++)
   if((str+j)->s[num]>(str+j+1)->s[num])//�̦r�������ǰ��Ƨ� 
    {
    tmp=*(str+j);
    *(str+j)=*(str+j+1);
    *(str+(j+1))=tmp;
    }
//��23456....������w�ƧǪk�Anum�N��r�ꪺ��N�Ӧr��-------------------------   
 for(num=1;num<=10;num++) 
 {   
  for(i=0;i<count;i++)
   for(j=0;j<(count-i);j++)   
    if((str+j)->s[num]>(str+j+1)->s[num] && strncmp((str+j)->s,(str+j+1)->s,num)==0)//���(num-1)�Ӧr���ۦP�ɡA�~�����w�ƧǪk(&&�᭱���� 
     {
       tmp=*(str+j);
       *(str+j)=*(str+j+1);
       *(str+(j+1))=tmp;
      }
  }       
 //��w�ƧǪk�즹����^^-------------------------------------------
printf("�A��J���r�꦳%d��\n",count);//��X
printf("�r���q�p��j�ƧǬ�\n");
for(i=0;i<count;i++)  
printf("%s\n",(str+i)->s);
system("pause");
}
//������G�u���J10�Ӧr��(��9��ССССХi�H�令�t�m1000�Ӣ��
//�ѦҡG�ҥ�14-6�A���strset�Astrncmp�b�ҥ�C-11 
