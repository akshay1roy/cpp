// program to print compare the two string.

#include<iostream>
#include<string.h>
using namespace std;

void convert_uppercase(char *str)
{
    int i,l;
    l=strlen(str);
    for(i=0;i<l;i++){
        if(str[i]>=97 && str[i]<=122){
            str[i]=str[i]-32;
        }
    }
}

void convert_lowercase(char *str)
{
    int i,l;
    l=strlen(str);
    for(i=0;i<l;i++){
        if(str[i]>=65 && str[i]<=91){
            str[i]=str[i]+32;
        }
    }
}

void check_palindrome(char *str)
{
    int i,l,flag=0;
    l=strlen(str);
    for(i=0;i<l/2;i++){
        if(str[i]==str[l-1-i]){
            flag=1;
        }
    }
    if(flag==1){
        cout<<endl<<"String is palindrome ";
    }
    else{
        cout<<endl<<"String is not Palindrome";
    }
}

int  count_words(char *str)
{
    int i,l,count=0;
    l=strlen(str);
    for(int i=0;i<l;i++)
    {
        if(str[i]==' '){
            count++;
        }
    }
    return count+1;
}

int count_total_words(char *str)
{
    int i,l,count=0;
    l=strlen(str);
    //cout<<endl<<"length of string :-"<<l<<endl;
    for(i=0;i<l;i++){
        if(str[i]!=' '){
            if(str[i]=='.' || str[i]==','){
                continue;
            }
            if(str[i-1]==' ')
            {
                count++;
            }
        }
    }
    return count;
}


// void Capital_first_word(char *str)
// {
//     int i,l;
//     l=strlen(str);
//     for(i=0;i<l;i++)
//     {
//         if(str[i]!=' ')
//         {
//             if(str[i-1]==' ')
//             {
//                 str[i]=str[i]-32;
//             }
//             if(str[i]=='.'&& str[i+1]!='\0'){
//                 str[i+1]=str[i+1]-32;
//             }
//             if(str[0]>=97 && str[0]<=122){
//                 str[i]=str[i]-32;
//             }
//         }
//     }
// }

// void find_repeated_character(char *str)
// {
//     int i,count=0,l;
//     l=strlen(str);
//     for(i=0;i<l;i++){
//         ch=str[i];
//         for(j=i;j<l;j++){
//             if(ch==str[j]){
//                 count++;
//             }
//         }
//     }
// }

int main()
{
    char str[100];
    int words;
    cout<<"Enter the string:-";
    cin.getline(str,100);
    cout<<endl<<"The string is :-"<<str;
    //convert_uppercase(str);
    //cout<<endl<<"The Upperstring is :-"<<str;

    // convert_lowercase(str);
    // cout<<endl<<"The Lower string is :-"<<str;

    //check_palindrome(str);

    //words=count_words(str);       // simple ways to count the total numbers  of words in the sentence.
    //cout<<endl<<"Total number of words are :-"<<words;
    // words=count_total_words(str);
    // cout<<endl<<"Total numbers of words are :-"<<words;

    Capital_first_word(str);

    cout<<endl<<"The new string is :-"<<str;

    return 0;

}