#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_odds(const char *s){
  int count = 0;
  for(int i = 0; s[i]!='\0';i++){
    if((s[i]-'0')%2 != 0)
      count++;
  }
  return count;
}

int odd_compare(const void *a, const void *b){
  char *sa = *(char **)a; 
  char *sb = *(char **)b;
  int ca = count_odds(sa);
  int cb = count_odds(sb);
  if(ca<cb)
    return -1;
  if(ca>cb)
    return 1;
  return strcmp(sa, sb);
}

void print_elements(char **elems, int count) {
  for (int i = 0; i < count; i++) {
    printf("%s\n", elems[i]);
  }
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    perror("Usage : ./place <strings>");
    exit(1);
  }

  qsort(&argv[1], argc - 1, sizeof(char*), odd_compare);
  print_elements(&argv[1], argc - 1);

  return 0;
}
