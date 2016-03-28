//WinRAR 自動安裝工具
//輸入版本號版本
//ver:2.0
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <iostream.h>
#include<windows.h>  //需要使用到此標頭檔
void SetColor(int f=7,int b=0)  //改字體顏色函數   SetColor(0x0,0x0);
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
sprintf(ver,"title WinRAR %s Final 自動安裝程序 %s",veri,setupver);
system("cls");
system(ver);
printf("請輸入版本號(EX:5.21)： ");
gets(veri);//veri版本號 
printf("請輸入檔案碼（EX:WinRAR521->>輸入'521'）： ");
gets(filesi);//filesi檔案碼 


         //-->時間 
        time_t t = time(0);
        char tmp[64];
        strftime( tmp, sizeof(tmp), "啟動時間：%Y/%m/%d %X %a %z ",localtime(&t) );
        struct tm *localtime(const time_t *timer);

/*   ex:  5.21   521
    setupver -->    WinRAR 自動安裝工具版本號
       執行結果：   v2.0 
    cver     -->    32  64  位元  = 86  64 
    veri     -->    5.21    //版本號 
    ver      -->    sprintf(ver,"title WinRAR %s Final 自動安裝程序 -%s",veri,files);
       執行結果：   title WinRAR 5.21 Final 自動安裝程序 -WinRAR
    filesi   -->    521     //檔案碼 
    files    -->    sprintf(files,"WinRAR%s",filesi);    //files --> WinRAR+檔案碼 
       執行結果：   WinRAR521
    filei    -->    sprintf(filei,"%s_%d.exe",files,cver);    //filei --> WinRAR+檔案碼+_86.exe
       執行結果：   WinRAR521_X86.exe
       執行結果：   WinRAR521_X64.exe
    filei8   -->    sprintf(filei8,"@echo start /wait %s>>%d.bat",filei,cver);
       執行結果：   @echo start /wait WinRAR521_86.exe>>86.bat
       執行結果：   @echo start /wait WinRAR521_64.exe>>64.bat
    filec    -->    sprintf(filec,"%s_Register_X%d.exe",files,cver);    //filec => WinRAR+檔案碼+_Register_X86.exe
       執行結果：   WinRARxxx_Register_X86.exe
       執行結果：   WinRARxxx_Register_X64.exe
    filec8   -->    sprintf(filec8,"@echo start /wait %s>>%d.bat",filec,cver);
       執行結果：   @echo start /wait WinRARxxx_Register_X64.exe>>64.bat
       執行結果：   @echo start /wait WinRARxxx_Register_X86.exe>>86.bat
*/


strcpy(veri,"5.21");          //設定版本號 
strcpy(filesi,"521");         //檔案碼 
sprintf(files,"WinRAR%s",filesi);    //files --> WinRAR+檔案碼 
SetColor(); 
sprintf(ver,"title WinRAR %s Final 自動安裝程序 %s",veri,setupver);
system("echo off&mode con cols=90 lines=30");
// <--此為程式設定區
str:
system("cls");
system(ver);
    SetColor(0xc,0); 
cout<<""<<endl;
cout<<"                        ╭────────────────────────╮"<<endl;
cout<<"                        ├─";puts( tmp );
printf("                        ╰────────────────────────╯");
cout<<"                                                                               "<<endl;
    SetColor(0xf,0); 
printf("   WinRAR %s Final 自動安裝程序 %s 執行中......                                 ",veri,setupver);
cout<<"                                                                               "<<endl;
    SetColor(0xb,0);
cout<<"                                                                               "<<endl;
printf("                開始安裝 WinRAR %s Final                          \n",veri);
cout<<"                                                                               "<<endl;
        SetColor(0xa,0);

cout<<"           選擇項目──安裝說明：若電腦為 32 位元 則選擇 [1]                   "<<endl;
SetColor(0xe,0);cout<<"               │";SetColor(0xa,0);
cout<<"                若電腦為 64 位元 則選擇 [2]                   "<<endl;
SetColor(0xe,0);cout<<"               │"<<endl;
cout<<"               ├";SetColor(0xa,0);
printf("0.查看電腦位元資訊\n");
SetColor(0xe,0);cout<<"               │                                                              "<<endl;
SetColor(0xe,0);cout<<"               ├";SetColor(0xa,0);
printf("1.安裝 WinRAR %s Final X86.exe   (32位元電腦  執行時為藍色\n",veri);
SetColor(0xe,0);cout<<"               │"<<endl;SetColor(0xa,0);
SetColor(0xe,0);cout<<"               ├";SetColor(0xa,0);
printf("2.安裝 WinRAR %s Final X64.exe   (64位元電腦  執行時為綠色\n",veri);
SetColor(0xe,0);cout<<"               │"<<endl;SetColor(0xa,0);
SetColor(0xe,0);cout<<"               ╰ ";SetColor(0xa,0);
cout<<"                99.作者網站  執行時為黃色                                    "<<endl;
//--------------------------
cout<<""<<endl;
SetColor(0xe,0);cout<<" ┬";
SetColor(0xa,0);cout<<"請輸入選項編號，並按『Enter』。";
SetColor(0xe,0);cout<<" ╮";
cout<<"              ";
SetColor(0xc,7);cout<<" 請以系統管理員身分執行 "<<endl;
SetColor(0xe,0);cout<<" ╰─────────────請輸入┴ ";
scanf("%d",&input);

if(input==0) goto info1;
if((input==1)||(input==32))goto i32;
if((input==2)||(input==64))goto i64;
if(input==99)goto htmrar;
if((input!=0)||(input!=1)||(input!=2)||(input!=32)||(input!=64)||(input!=99)) goto flush;
//<--- 標示+選擇 



info1:
system("");
system("@echo off&@echo IF /I '%PROCESSOR_ARCHITECTURE%'=='AMD64' (set arc=64) else set arc=32>info.bat");
system("@echo SET msg2= %UserName% 使用者 本台電腦使用 '%arc%位元' 作業系統、%NUMBER_OF_PROCESSORS% 線程CPU>>info.bat");
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
sprintf(filei,"%s_X%d.exe",files,cver);    //filei --> WinRAR+檔案碼+_86.exe
sprintf(filec,"%s_Register_X%d.exe",files,cver);    //filec => WinRAR+檔案碼+_Register_X86.exe
sprintf(filei8,"@echo start /wait %s>>%d.bat",filei,cver);
sprintf(filec8,"@echo start /wait %s>>%d.bat",filec,cver);

system("@echo @echo off>>86.bat");
system("@echo color 9b>>86.bat");
system("@echo @mode con cols=50 lines=10>>86.bat");
char showins[200];
sprintf(showins,"@echo echo WinRAR %s Final X%d 安裝作業中，請稍候......>>%d.bat",veri,cver,cver);
system(showins);
system(filei8);
system(filec8);
system("@echo exit>>86.bat");
system("@start /wait 86.bat");
system("del /f /s /q 86.bat>nul");
printf("\n安裝完成  ");
system("pause");
system("color");
//SetColor();
goto str;



i64:
cver=64;
//SetColor(0xb,9);
sprintf(filei,"%s_X%d.exe",files,cver);    //filei --> WinRAR+檔案碼+_64.exe
sprintf(filec,"%s_Register_X%d.exe",files,cver);    //filec => WinRAR+檔案碼+_Register_X64.exe
sprintf(filei8,"@echo start /wait %s>>%d.bat",filei,cver);
sprintf(filec8,"@echo start /wait %s>>%d.bat",filec,cver);

system("@echo @echo off>>64.bat");
system("@echo color 2f>>64.bat");
system("@echo @mode con cols=50 lines=10>>64.bat");
sprintf(showins,"@echo echo WinRAR %s Final X%d 安裝作業中，請稍候......>>%d.bat",veri,cver,cver);
system(showins);
system(filei8);
system(filec8);
system("@echo exit>>64.bat");
system("@start /wait 64.bat");
system("del /f /s /q 64.bat>nul");
printf("\n安裝完成  ");
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
    printf("輸入錯誤！請重新輸入..輸入錯誤！請重新輸入..輸入錯誤！請重新輸入..輸入錯誤！請重新輸入..\n\n");
    c+=1;
   }
   c=1;
    system("pause");SetColor();
    system("cls");
goto str;

}


