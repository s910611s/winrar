//WinRAR �۰ʦw�ˤu��
//��J����������
//ver:2.0
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <iostream.h>
#include<windows.h>  //�ݭn�ϥΨ즹���Y��
void SetColor(int f=7,int b=0)  //��r���C����   SetColor(0x0,0x0);
{
    unsigned short ForeColor=f+16*b;
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon,ForeColor);
}

int main()
{
char setupver[20];strcpy(setupver,"v2.0");
int cver=0;
int input;
char ver[200],veri[5];
char files[30],filesi[4];

char filei[30];
char filec[30];
char filei8[100];
char filec8[100];
char msga[10];


SetColor(0xf,9); 
system("mode con cols=50 lines=5");
sprintf(ver,"title WinRAR %s Final �۰ʦw�˵{�� %s",veri,setupver);
system("cls");
system(ver);
printf("�п�J������(EX:5.21)�G ");
gets(veri);//veri������ 
printf("�п�J�ɮ׽X�]EX:WinRAR521->>��J'521'�^�G ");
gets(filesi);//filesi�ɮ׽X 


         //-->�ɶ� 
        time_t t = time(0);
        char tmp[64];
        strftime( tmp, sizeof(tmp), "�Ұʮɶ��G%Y/%m/%d %X %a %z ",localtime(&t) );
        struct tm *localtime(const time_t *timer);

/*   ex:  5.21   521
    setupver -->    WinRAR �۰ʦw�ˤu�㪩����
       ���浲�G�G   v2.0 
    cver     -->    32  64  �줸  = 86  64 
    veri     -->    5.21    //������ 
    ver      -->    sprintf(ver,"title WinRAR %s Final �۰ʦw�˵{�� -%s",veri,files);
       ���浲�G�G   title WinRAR 5.21 Final �۰ʦw�˵{�� -WinRAR
    filesi   -->    521     //�ɮ׽X 
    files    -->    sprintf(files,"WinRAR%s",filesi);    //files --> WinRAR+�ɮ׽X 
       ���浲�G�G   WinRAR521
    filei    -->    sprintf(filei,"%s_%d.exe",files,cver);    //filei --> WinRAR+�ɮ׽X+_86.exe
       ���浲�G�G   WinRAR521_X86.exe
       ���浲�G�G   WinRAR521_X64.exe
    filei8   -->    sprintf(filei8,"@echo start /wait %s>>%d.bat",filei,cver);
       ���浲�G�G   @echo start /wait WinRAR521_86.exe>>86.bat
       ���浲�G�G   @echo start /wait WinRAR521_64.exe>>64.bat
    filec    -->    sprintf(filec,"%s_Register_X%d.exe",files,cver);    //filec => WinRAR+�ɮ׽X+_Register_X86.exe
       ���浲�G�G   WinRARxxx_Register_X86.exe
       ���浲�G�G   WinRARxxx_Register_X64.exe
    filec8   -->    sprintf(filec8,"@echo start /wait %s>>%d.bat",filec,cver);
       ���浲�G�G   @echo start /wait WinRARxxx_Register_X64.exe>>64.bat
       ���浲�G�G   @echo start /wait WinRARxxx_Register_X86.exe>>86.bat
*/


strcpy(veri,"5.21");          //�]�w������ 
strcpy(filesi,"521");         //�ɮ׽X 
sprintf(files,"WinRAR%s",filesi);    //files --> WinRAR+�ɮ׽X 
SetColor(); 
sprintf(ver,"title WinRAR %s Final �۰ʦw�˵{�� %s",veri,setupver);
system("echo off&mode con cols=90 lines=30");
// <--�����{���]�w��
str:
system("cls");
system(ver);
    SetColor(0xc,0); 
cout<<""<<endl;
cout<<"                        �~�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w��"<<endl;
cout<<"                        �u�w";puts( tmp );
printf("                        ���w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w��");
cout<<"                                                                               "<<endl;
    SetColor(0xf,0); 
printf("   WinRAR %s Final �۰ʦw�˵{�� %s ���椤......                                 ",veri,setupver);
cout<<"                                                                               "<<endl;
    SetColor(0xb,0);
cout<<"                                                                               "<<endl;
printf("                �}�l�w�� WinRAR %s Final                          \n",veri);
cout<<"                                                                               "<<endl;
        SetColor(0xa,0);

cout<<"           ��ܶ��آw�w�w�˻����G�Y�q���� 32 �줸 �h��� [1]                   "<<endl;
SetColor(0xe,0);cout<<"               �x";SetColor(0xa,0);
cout<<"                �Y�q���� 64 �줸 �h��� [2]                   "<<endl;
SetColor(0xe,0);cout<<"               �x"<<endl;
cout<<"               �u";SetColor(0xa,0);
printf("0.�d�ݹq���줸��T\n");
SetColor(0xe,0);cout<<"               �x                                                              "<<endl;
SetColor(0xe,0);cout<<"               �u";SetColor(0xa,0);
printf("1.�w�� WinRAR %s Final X86.exe   (32�줸�q��  ����ɬ��Ŧ�\n",veri);
SetColor(0xe,0);cout<<"               �x"<<endl;SetColor(0xa,0);
SetColor(0xe,0);cout<<"               �u";SetColor(0xa,0);
printf("2.�w�� WinRAR %s Final X64.exe   (64�줸�q��  ����ɬ����\n",veri);
SetColor(0xe,0);cout<<"               �x"<<endl;SetColor(0xa,0);
SetColor(0xe,0);cout<<"               �� ";SetColor(0xa,0);
cout<<"                99.�@�̺���  ����ɬ�����                                    "<<endl;
//--------------------------
cout<<""<<endl;
SetColor(0xe,0);cout<<" �s";
SetColor(0xa,0);cout<<"�п�J�ﶵ�s���A�ë��yEnter�z�C";
SetColor(0xe,0);cout<<" ��";
cout<<"              ";
SetColor(0xc,7);cout<<" �ХH�t�κ޲z���������� "<<endl;
SetColor(0xe,0);cout<<" ���w�w�w�w�w�w�w�w�w�w�w�w�w�п�J�r ";
scanf("%d",&input);

if(input==0) goto info1;
if((input==1)||(input==32))goto i32;
if((input==2)||(input==64))goto i64;
if(input==99)goto htmrar;
if((input!=0)||(input!=1)||(input!=2)||(input!=32)||(input!=64)||(input!=99)) goto flush;
//<--- �Х�+��� 



info1:
system("");
system("@echo off&@echo IF /I '%PROCESSOR_ARCHITECTURE%'=='AMD64' (set arc=64) else set arc=32>info.bat");
system("@echo SET msg2= %UserName% �ϥΪ� ���x�q���ϥ� '%arc%�줸' �@�~�t�ΡB%NUMBER_OF_PROCESSORS% �u�{CPU>>info.bat");
system("@echo @color 0e>>info.bat");
system("@echo mode con cols=80 lines=10>>info.bat");
system("@echo cls>>info.bat");
system("@echo @echo.>>info.bat");
system("@echo @echo.>>info.bat");
system("@echo @echo %msg2%>>info.bat");
system("@echo pause>>info.bat");
system("@echo exit>>info.bat");
system("@start /wait info.bat");
system("del /f /s /q info.bat>nul");
goto str;

i32:
cver=86;
//SetColor(0xb,9);
sprintf(filei,"%s_X%d.exe",files,cver);    //filei --> WinRAR+�ɮ׽X+_86.exe
sprintf(filec,"%s_Register_X%d.exe",files,cver);    //filec => WinRAR+�ɮ׽X+_Register_X86.exe
sprintf(filei8,"@echo start /wait %s>>%d.bat",filei,cver);
sprintf(filec8,"@echo start /wait %s>>%d.bat",filec,cver);

system("@echo @echo off>>86.bat");
system("@echo color 9b>>86.bat");
system("@echo @mode con cols=50 lines=10>>86.bat");
char showins[200];
sprintf(showins,"@echo echo WinRAR %s Final X%d �w�˧@�~���A�еy��......>>%d.bat",veri,cver,cver);
system(showins);
system(filei8);
system(filec8);
system("@echo exit>>86.bat");
system("@start /wait 86.bat");
system("del /f /s /q 86.bat>nul");
printf("\n�w�˧���  ");
system("pause");
system("color");
//SetColor();
goto str;



i64:
cver=64;
//SetColor(0xb,9);
sprintf(filei,"%s_X%d.exe",files,cver);    //filei --> WinRAR+�ɮ׽X+_64.exe
sprintf(filec,"%s_Register_X%d.exe",files,cver);    //filec => WinRAR+�ɮ׽X+_Register_X64.exe
sprintf(filei8,"@echo start /wait %s>>%d.bat",filei,cver);
sprintf(filec8,"@echo start /wait %s>>%d.bat",filec,cver);

system("@echo @echo off>>64.bat");
system("@echo color 2f>>64.bat");
system("@echo @mode con cols=50 lines=10>>64.bat");
sprintf(showins,"@echo echo WinRAR %s Final X%d �w�˧@�~���A�еy��......>>%d.bat",veri,cver,cver);
system(showins);
system(filei8);
system(filec8);
system("@echo exit>>64.bat");
system("@start /wait 64.bat");
system("del /f /s /q 64.bat>nul");
printf("\n�w�˧���  ");
system("pause");
system("color");
//SetColor();
goto str;


htmrar:
/*       char web[200];
       sprintf(web,"@echo start http://www.rar.com.tw/>>rarweb.bat");
       system("@rarweb.bat");
       system("del /f /s /q rarweb.bat");
       system(web);
goto str;
*/
         return 0;
flush:
      int c;
system("color 5e&cls");
   for(c=1;c<=25;c++)
   {
    printf("��J���~�I�Э��s��J..��J���~�I�Э��s��J..��J���~�I�Э��s��J..��J���~�I�Э��s��J..\n\n");
    c+=1;
   }
   c=1;
    system("pause");SetColor();
    system("cls");
goto str;

}


