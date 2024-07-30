#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[100];
    printf("Enter A String : ");
    scanf("%s",str);

    for(int i = 0;i<strlen(str)/2;i++){
        char x = str[i];
        str[i] = str[strlen(str) - i - 1];
        str[strlen(str) -i - 1] = x;
    }

    printf("Reversed String is : %s",str);

    return 0;

}
