// Do not modify starter code
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

void commonChars(char arr[][MAX_LEN], int n) {
  int common[26];
  for (int i = 0; i < 26; i++) {
    common[i] = true;
  }
  char letters[26]="abcdefghijklmnopqrstuvwxyz";
  bool found;
  for (int i = 0; i < n; i++) {
    for(int c=0;letters[c]!='\0';c++){
      found=false;  
      for(int j=0; arr[i][j]!= '\0'; j++){
          if(arr[i][j]==letters[c]){
            found=true;
            break;
          }
        }
        if(!found){
          common[c]=false;
        }
    }
    // fill code here
  }
  printf("Common characters: ");
  bool any = false;
  for(int i=0;i<letters[i]!='\0';i++){
    if(common[i]){
      printf("%c ",letters[i]);
      any = true;
    }
  }
  if(!any){           
    printf("None");
}
printf("\n");
}


int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("Usage: %s string1 string2 ...\n", argv[0]);
    return 1;
  }

  int n = argc - 1;
  char arr[n][MAX_LEN];

  for (int i = 0; i < n; i++) {
    strcpy(arr[i], argv[i + 1]);
  }

  commonChars(arr, n);

  return 0;
}
