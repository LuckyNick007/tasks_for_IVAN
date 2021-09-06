#import <stdio.h>
#import <stdlib.h>
#import <string.h>


struct Group{
  char class[3];
  int students;
  struct Group *next;
};

struct Group *getNewGroup(const char name[3], const int stcount)
{

  struct Group *newGroup = NULL;
  newGroup = malloc(sizeof(struct Group));
  strcpy(newGroup->class, name);
  newGroup->students = stcount;
  return newGroup;
}

void PrintGroup(const struct Group *group) {
    if (group == NULL){
        printf("is NULL\n");
    } else {
      if (group->students == 1234){
        printf("%s : %s",
               group -> class,
               "None, ");
      } else {
        printf("%s: %d, ",
               group -> class,
               group -> students);
      }

    }
  }

void PrintList(const struct Group *list) {
      const struct Group *t;
      t = list;
      if (t == NULL) {
          printf("list is empty\n");
      }
      else {
          while(t){
              PrintGroup(t);
              t = t -> next;
          }
      }
  }

const int empty = 1234;

int main(){
  struct Group *first = NULL;
  struct Group *added = NULL;
  const char group[9][3] = {
                              {'1', 'A', '\0'},
                              {'1', 'B', '\0'},
                              {'1', 'C', '\0'},
                              {'2', 'A', '\0'},
                              {'2', 'B', '\0'},
                              {'2', 'C', '\0'},
                              {'3', 'A', '\0'},
                              {'3', 'B', '\0'},
                              {'3', 'C', '\0'}
                            };
  int chldrcount = 0;
  int count = 0;
  int num;

  scanf("%d", &chldrcount);

  while (chldrcount > 1){
    scanf("%d", &num);
    if (first == NULL){
        first = getNewGroup(group[count], num);
        count += 1;
        if (first != NULL) {
            added = first;
        }
    }
    else {
        added -> next = getNewGroup(group[count], num);
        count += 1;
        if(added -> next != NULL) {
            added = added -> next;
        }


    chldrcount -= 1;

    if (chldrcount == 1){
      while (count < 9) {
        added -> next = getNewGroup(group[count], empty);
        if(added -> next != NULL) {
            added = added -> next;
        }
        count += 1;
        }
      }
    }
  }
  printf("{ ");
  PrintList(first);
  printf("}");
  return 0;
}
