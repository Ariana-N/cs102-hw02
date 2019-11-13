#include <stdio.h>
#include <stdlib.h>

typedef enum {//assigns names to integral constants
  NAME_ONLY = 0,
  MAJOR_AND_NAME = 1, 
  YEAR_AND_NAME = 2,
} Mode;

typedef struct {
  char *first_name;
  char *last_name;
  char *major;
  int year;
} Student;

void print_student(Mode m, Student s) {
  switch (m) {
    case NAME_ONLY:
      printf("%s %s\n", s.first_name, s.last_name);
      break;
    case MAJOR_AND_NAME:
      printf("%s %s %s\n", s.major, s.first_name, s.last_name);
      break;
    case YEAR_AND_NAME:
      printf("%d %s %s\n", s.year, s.first_name, s.last_name);
      break;

  }
}

int main(int argc, char **argv) {

int mode;  
mode = atoi(argv[1]);

int x=2;

while(x < argc)
{ 

  Student s;
  s.first_name = argv[x];       //argv[2]
  s.last_name = argv[x+1];      //argv[3]
  s.major = argv[x+2];          //argv[4]
  s.year = atoi(argv[x+3]);     //argv[5]
  print_student(mode, s);
  x+=4;                         //+= incriment the variable on the left by the value on the right
}
  return 0;

}