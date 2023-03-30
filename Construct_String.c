#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int tc;
    scanf("%d",&tc);
    while(tc--){
        int n;
        scanf("%d",&n);
        char *str=(char*)malloc(n+1);
        scanf("%s",str);
        char temp[n];
        int k=0,count=1;
        char temp1=str[0];
        for(int i=1;i<n;i++){
            if(temp1 == str[i]){
                count++;
            } 
            else{
                if(count%2 == 0){ //if there is repeated value which mod equal to 2
                    temp[k++]=temp1;
                    temp[k++]=temp1;
                } 
                else{
                    temp[k++]=temp1;
                }
                temp1=str[i]; // reset temp
                count=1;
            }
        }
        if(count%2 == 0){
            temp[k++]=temp1;
            temp[k++]=temp1;
        } 
        else{
            temp[k++] = temp1;
        }
        temp[k]='\0'; // null terminate the output string
        for(int i=0;i<k;i++){
            if(temp[i]<97 || temp[i]>122){
                temp[i] = '\0';
                break;
            }
        }
        printf("%s\n",temp);
        free(str);
    }
    return 0;
}
