对给定的一个字符串，找出有重复的字符，并给出其位置，如：
输入：abcaaAB12ab12
输出：a，1；a，4；a，5；a，10
b，2；b，11
1，8；1，12
2，9；2，13

解法：

#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    while(scanf("%s",&s)!=EOF){
        int len=strlen(s),i,j,flag;
        for(i=0;i<len;i++){
            flag=1;
            for(j=i+1;j<len;j++){
                if((s[j]==s[i])&&(s[j]!='*')){
                    if(flag==1){
                        printf("\n");
                        printf("%c,%d",s[i],i+1);
                        flag=0;
                    }
                    printf(";%c,%d",s[i],j+1);
                    s[j]='*';
                }
            }
        }
        printf("\n");
    }
    return 0;
}
