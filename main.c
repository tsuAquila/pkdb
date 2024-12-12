#include <stdio.h>
#include <stdlib.h>

struct Data {
  char name[20];
  int age;
  int idNum[12];
};

union Node {
  union Node *nodes[10];
  struct Data *data;
};

union Node *newNode() {
  union Node *node = (union Node *)malloc(sizeof(union Node));

  return node;
}

struct Data *newData(union Node *start) {
  struct Data *data = (struct Data *)malloc(sizeof(struct Data));

  printf("Name: ");
  gets(data->name);

  printf("Age: ");
  scanf("%d", &data->age);

  printf("Id No.: ");
  for (int i = 0; i < 12; i++) scanf("%d", &data->idNum[i]);

  return data;
}

union Node *newDataNode(struct Data *data, union Node *node) {
  node->data = data;

  return node;
}

void addNode(struct Data *data, union Node *start) {}

int main(int argc, char const *argv[]) {
  union Node *start = createNode();

  addNewNode(start);

  return 0;
}
