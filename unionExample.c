#include <stdio.h>
#include <string.h>
union auni
{
  char name[100];
  int pnum;
  float marks;
};

int main ()
{
  union auni uni1;
  strcpy (uni1.name, "Name");   // gets currupted
  uni1.marks = 12.12;   // gets currupted 
  uni1.pnum = 12;   // last insertion in the union is registered correctly
  printf ("Size of union is %ld\n", sizeof (uni1));
  printf ("Name : %s\nPhone Number : %d\nMarks : %.3f", uni1.name, uni1.pnum,
	  uni1.marks);
  return 0;
}
