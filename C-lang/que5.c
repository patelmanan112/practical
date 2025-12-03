#include <stdio.h>
// declaration of structure
struct student
{
  int id;
  char *name;
  float marks;
};
int main()
{
  struct student s1, s2, s3;
  // input the details of 3 student
  s1.id = 41;
  s1.name = "Manan";
  s1.marks = 91.76;
  s2.id = 42;
  s2.name = "Hitarth";
  s2.marks = 60.1;
  s3.id = 43;
  s3.name = "Het";
  s3.marks = 70.32;

  // printing detail of s1 student
  printf("%d\n", s1.id);
  printf("%s\n", s1.name);
  printf("%.2f\n", s1.marks);

  return 0;
}