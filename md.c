//�̫�ק�G2015/08/19 
//WinRAR  ²����Ƨ��إߵ{��
//jasonty
#include <direct.h>
#include <stdlib.h>
#include <stdio.h>
#include<string.h>
int main( void )
{
char file1[12],input[4],file3[40];    //�ŧi�r�� file1[12]  file2[4]  file3[20] 
char winr[7];strcpy(winr,"WinRAR ");  //�g�J  "WinRAR" �� winr �r�� 

int i;
    system("color 0b&mode con cols=65 lines=10&title ²����Ƨ��إߵ{��");
printf("�п�J WinRAR ����(Ex:5.21)�G");
scanf("%s",&input);        //������J�g�J�r�� input

  strncpy (file1,winr,strlen(winr));        //�b file1 �g�J winr �r�� 
  strncat (file1,input,4);       //�b file1 ���[�W file2 4�r��  =>  file1 == WinRAR x.xx
  printf("%s\n", file1);         //�L�Xfile1   
  
 if(mkdir( file1 )==0) 
        puts("��Ƨ��w�إ�");
    else
        puts("��Ƨ��إߥ���");

//���U��
  strncpy(file3,file1,strlen(file1));   //WinRAR xxxx
  strcat (file3,"\\");                 //�b file3 ���[�W "\" 
  strncat(file3,file1,11);             //WinRAR 5.22
  strcat (file3," ���U�� ");           //�b file3 ���[�W " ���U�� "    =>  file3 == WinRAR x.xx ���U��
  printf("%s\n", file3);             //�L�X file3 

 if(mkdir( file3 )==0) 
        puts("��Ƨ��w�إ�");
    else
        puts("��Ƨ��إߥ���");

                           /*�ƻs�ɮ�--> */
 
char ch,file4[25];                  //�ŧi file4 
  strncpy(file4,file1,strlen(file1));   //WinRAR x.xx
  
  strcat (file4,"\\!�w�˶���.bat");

        FILE *fp1,*fp2;
   fp1 = fopen("!�w�˶���.bat","r");
   fp2 = fopen(file4,"w");
      if (fp1==NULL)
      {
       printf("�䤣��%s�ɮ�\n",fp1);           
       getch(); return 0;
      }
   while((ch=getc(fp1)) != EOF)
   putc(ch,fp2); 
   printf("%s",file4);
   printf("    �ɮפw�ƻs����\n"); 
   fclose(fp1);   fclose(fp2);  

char cp,copyi[50];                  //�ŧi copyi => WinRAR x.xx
  strncpy(copyi,file1,strlen(file1));
  strcat (copyi,"\\copy.bat");                                                  //copyi => WinRAR x.xx\\


        FILE *fp3,*fp4;
   fp3 = fopen("copy.bat","r");
   fp4 = fopen(copyi,"w");
      if (fp1==NULL)
      {
       printf("�䤣��%s�ɮ�\n",fp3);           
       getch(); return 0;
      }
   while((cp=getc(fp3)) != EOF)
   putc(cp,fp4); 
   printf("%s",file4);
   printf("    �ɮפw�ƻs����"); 
      fclose(fp3);   fclose(fp4);  

char str1[25],str2[25];
sprintf(str1,"cd /d %s\\&start /wait copy.bat",file1);
system(str1);
sprintf(str2,"cd /d %s\\&del /f /s /q copy.bat",file1);
system(str2);
getch();
}




