//No mask
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void encode()
{
    //درست کردن 50 خانه ارایه 
    char text[50];
    printf("\nenter text:");
    //ورودی گرفتن به عنوان متن و ریختن در ارایه
    scanf("%s",text);
    //ایجاد حلقه به اندازه طول ارایه
    for (int i = 0;i<=strlen(text)-1;i++)
    {
        int chnge_char_acci,chnge_char2;
        char chnges;
        //تبدیل ارایه یا کارکتر به کد اسکی  
        chnge_char_acci=(int)text[i];
        chnge_char2=chnge_char_acci-2;
        //تبدیل کد اسکی به کارکتر
        chnges=(char)chnge_char2;
        //خروجی
        printf("%c",chnges);
    }
    

}


void dcode()
{
    char text[50];
    printf("enter text:");

    scanf("%s",text);

    for (int i = 0;i<=strlen(text)-1;i++)
    {
        int chnge_char_acci,chnge_char2;
        char chnges;
        chnge_char_acci=(int)text[i];
        chnge_char2=chnge_char_acci+2;

        chnges=(char)chnge_char2;

        printf("%c",chnges);
       
    
    }
    
    

}




int main()
{   
    
    system("color 1");

    printf("[0]:encoding\n[1]:decoding\nEnter :>>>");

    int choice;

    scanf("%d",&choice);

    if(choice==0)

    {
         encode();

    }

    else if(choice==1)

    {
        dcode();

    }
    printf("\n-------------\n");
    system("pause");
  
    return 0;
}