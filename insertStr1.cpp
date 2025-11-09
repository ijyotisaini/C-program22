#include<iostream>
#include<cstring>

using namespace std;

void str_ins(char str1[20],char str2[20],int pos){

    char str3[30];
    int i,j,l2;

    strcpy(str3,str1,pos);
    l2=strlen(str2);

    for(i=pos,j=0;i<pos+l2;i++,j++){
        str3[i]=str2[j];
    }

    for(i=pos+l2,j=pos;str1[j]!='\0';i++,j++){
        str3[i]=str1[j];
    }
    str3[i]='\0';
    cout<<"String:"<<str3;

}

int main(){
    char str1[20],str2[20];
    int pos;

    cout<<"Enter the firsts string:";
    getline(cin,str1[20]);

    cout<<"Enter the second string:";
    getline(cin,str2[20]);

    cout<<"Enter the position:";
    cin>>pos;

    str_ins(str1,str2,pos);
    
}