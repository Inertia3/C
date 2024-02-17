#include <stdio.h>
int len(char len[]){
    // to find length of string
    int count = 0;
    for(int i=0;len[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverse(char rev[]){
    // to reverse the string
    int leng = len(rev);
    int i=0,j=leng-1;
    char temp;
    while(i<j){
        temp = rev[i];
        rev[i] = rev[j];
        rev[j] = temp;
        i++,j--; 
    }
    puts(rev);
}
void concat(char str[]){
    // to concat two strings
    char s2[100];
    printf("Enter 2nd string to concat:");
    gets(s2);
    int l1 = len(str);
    int l2 = len(s2);
    for(int j=0;j<=l2;j++){
        str[l1] = s2[j];
        l1++;
    }
    // str[l1]='\0';
    printf("Concatenated string is:");
    puts(str);
}
int cmp(char s1[],char s2[]){
    // to compare 2 strings
    // char s2[100];
    // printf("Enter the string to compare:");
    // gets(s2);
    
    for(int i=0;s1[i]!='\0'||s2[i]!='\0';i++){
        if(s1[i]!=s2[i]){
            return 1; 
        }
    }
    return 0;
}
void copy(char str[]){
    // to copy one string into another
    int i;
    char s2[100];
    printf("Enter 2nd string to copy in 1st string:");
    gets(s2);

    for(i=0;str[i]!='\0'||s2[i]!='\0';i++){
        str[i] = s2[i];
    }
    str[i] = '\0';
    printf("Copy of 2nd string in first string is:%s\n",str);
}
int palindrome(char str[]){
    // to check whether string is palindrome or not
    printf("To check for palindrome\n");
    char temp[100];
    int lt = len(str);
    for(int i=lt-1,j=0;i>=0,j<lt;i--,j++){
        temp[j] = str[i];
    }
    temp[lt] = '\0';

    if(cmp(temp,str))
    return 1;
    else
    return 0;
}
void upp_case(){
    // to change string to uppercase
    printf("To change string to uppercase\n");
    char s2[100];
    printf("Enter the string:");
    gets(s2);
    for(int i=0;s2[i]!='\0';i++){
        if(s2[i]>='a'&&s2[i]<='z'){
            s2[i] = s2[i] - 32;
        }
    }
    printf("String in upper case is:%s\n",s2);
}
void lwr_case(){
    char s1[100];
    // to change string to lowercase
    printf("To change string to lowercase\n");
    printf("Enter the string:");
    gets(s1);
    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]>='A'&&s1[i]<='Z'){
            s1[i] = s1[i] + 32;
        }
    }
    printf("String in lower case is:%s\n",s1);
}
int main(){
    char s1[100],s2[100];
    printf("Enter the 1st string:");
    gets(s1);

    int length = len(s1);       
    printf("Length of string '%s' is:%d\n",s1,length);

    printf("Enter the 2nd string to compare:");
    gets(s2);
    if(cmp(s1,s2))
    printf("Both strings are not same.\n");
    else
    printf("Both strings are same.\n");

    if(palindrome(s1))
    printf("Input string '%s' is not palindrome.\n",s1);
    else
    printf("Input string '%s' is palindrome.\n",s1);

    copy(s1);          

    concat(s1);
    printf("Reverse of concatenated string is:");
    reverse(s1);  

    upp_case();
    lwr_case();              

    return 0;
}