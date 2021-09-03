#include<stdio.h>
#include<string.h>
int main()
{
    char data[100];
    char div[20];
    printf("Enter the data: \n");
    scanf("%s", data);
    printf("Enter the divisor: \n");
    scanf("%s", div);
    char code[100];
    strcpy(code, data);
    int c=strlen(data);
    int l2=strlen(div);
    int i, j;
    for(i=0;i<l2-1;i++)
        strcat(data, "0");
    int l1=strlen(data);
    char rem[l2];
    for(i=0;i<l2-1;i++)
        rem[i]=data[i];
    rem[i]='\0';
    for(i=l2-1;i<l1;i++)
    {
        rem[l2-1]=data[i];
        char ch=rem[0];
            for(j=1;j<l2;j++)
            {
                if(ch=='0')
                {
                    rem[j-1]=rem[j];
                }
                else
                {
                    if(rem[j]==div[j])
                        rem[j-1]='0';
                    else
                        rem[j-1]='1';
                }
            }

    }

    for(i=0;i<l2-1;i++)
    {
        code[c++]=rem[i];
    }
    code[c]='\0';
    printf("Generated Code: %s\n", code);
}