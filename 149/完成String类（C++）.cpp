#include "CString.h"

bool String::IsSubstring(const char *str){
    int l = strlen(str);
    if(l>len){
        return false;
    }
    for(int i = 0;i<len;i++){
        if(mystr[i]==str[0]){
            int is = 1;
            for(int j = 0;j<l;j++){
                if(mystr[i+j]!=str[j]){
                    is = 0;
                    break;
                }
            }
            if(is){
                return true;
            }
        }
    }
    return false;
}

bool String::IsSubstring(const String &str){
    int l = str.len;
    if(l>len){
        return false;
    }
    for(int i = 0;i<len;i++){
        if(mystr[i]==str.mystr[0]){
            int is = 1;
            for(int j = 0;j<l;j++){
                if(mystr[i+j]!=str.mystr[j]){
                    is = 0;
                    break;
                }
            }
            if(is){
                return true;
            }
        }
    }
    return false;
}

int String::str2num(){
    int a = 0;
    for(int i = 0;i<len;i++){
        if(mystr[i]>47&&mystr[i]<58){
            a *= 10;
            a += mystr[i]-48;
        }
    }
    return a;
}

void String::toUppercase(){
    for(int i = 0;i<len;i++){
        if(mystr[i]>96&&mystr[i]<123){
            mystr[i]-=32;
        }
    }
}

int main(){
    String a("j32sd35f45sd6");
    String b("crlnedgs11");
    b.toUppercase();
    b.ShowStr();
    system("pause");
}