#include <stdio.h>
#include <stdlib.h>

typedef struct building {
  int index;
  struct building *neighbor;
} BuildingSet;

void addToSet(BuildingSet **b, int v) {
  BuildingSet *newNode = malloc(sizeof(BuildingSet));
  newNode->index = v;
  newNode->neighbor = *b;
  *b = newNode;
}

int removeFromSet(BuildingSet **b) {
  if (*b == NULL)
    return -1;
  BuildingSet *head = *b;
  int v = head->index;
  free(head);
  return v;

}

int isSetEmpty(BuildingSet *b) {
  if(b==NULL)
    return 1;
  return 0;
}

int topOfTheSet(BuildingSet *b) {
  return b->index;
}

void printSet(BuildingSet *b) {
  if (isSetEmpty(b)) {
    printf("Empty\n");
    return;
  }
  while (b != NULL) {
    printf("%d ", b->index);
    b = b->neighbor;
  }
  printf("\n");
}

void freeSet(BuildingSet **b) {
  while (!isSetEmpty(*b)){
    removeFromSet(b);
  }
}

BuildingSet *checkViews(int *input, int count, int position) {
  return 0; //no time :(
}

int main(int argc, char *argv[]) {
  int position = atoi(argv[1]);
  int count = argc - 2;
  int *input = malloc(count * sizeof(int));

  for (int i = 0; i < count; i++) {
    input[i] = atoi(argv[i + 2]);
  }

  BuildingSet *b = checkViews(input, count, position);
  printSet(b);

  return 0;
}
