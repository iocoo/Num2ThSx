#include<stdio.h>
#include<string.h>

int Num2ThSx(long num,char *des);

int main()
{
   long transseq = 1L;
   printf("input a num:");
   scanf("%ld",&transseq);
   char shortSeq[16]={0};
   Num2ThSx(transseq,shortSeq);
   printf("shortSeq=%s\n",shortSeq); 
    return 0;
}



/**********************************************
*
* function: convert a num to 32-decimal string
* author: wangzhe
* date: 2016-01-29
*
***********************************************/
int Num2ThSx(long num,char *des)
{
    int len=0;
    int i=0;
    char d=' ';
    int m=0;
    if(des==NULL)
    {
        return -1;
    }
    while(num)
    {
        m=num%36;
        if(m>9)
        {
            d='a'+m-10;
        }
        else
        {
            d='0'+m;
        }
        sprintf(des,"%s%c",des,d);
        num=num/36;
    }

        len=strlen(des);
        for(i=0;i<len/2;i++)
        {
            d=*(des+i);
            *(des+i)= *(des+len-i-1);
            *(des+len-i-1)=d;
        }
    return 0;
}

