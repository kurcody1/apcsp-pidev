#include <stdio.h>
#include <string.h>

struct student
{
  char firstname[50];
  char lastname[50];
  char age[50];
  char studentid[50];
};

void addStudent (char i[256], char j[256], char input[256])
{
  printf("Enter %s:\n",i);
    fgets (input, 256, stdin);
    sscanf (input, "%s", j);
}

void printStudent (struct student* student, int n)
{
  printf ("Student %d",n);
  printf ("First name:%s\n",student->firstname);
  printf ("Last name:%s\n",student->lastname);
  printf ("Age:%s\n",student->age);
  printf ("Student ID:%s\n",student->studentid);
}

int main(void)
{
  char buffer[256], firstname1[256], lastname1[256], age1[256], studentId1[256], firstname2[256], lastname2[256], age2[256], studentId2[256];
  int numStudents, i;
  

  //how many names to add
  printf("how many students would you like to add?(1-3)\n");
  while (1)
  {
    fgets (buffer,256,stdin);
    if (sscanf (buffer, "%d", &numStudents) == 1) break;
    printf("not a valid number");
  }
  printf("adding %d student(s).\n",numStudents);


//create student

  while (1)
  {
    printf("student 1:\n");
    //user input student features
    addStudent("first name", firstname1, buffer);
    addStudent("last name", lastname1, buffer);
    addStudent("age", age1, buffer);
    addStudent("student id", studentId1, buffer);
    //stuct the student
    struct student student1;
    strcpy(student1.firstname, firstname1);
    strcpy(student1.lastname, lastname1);
    strcpy(student1.age, age1);
    strcpy(student1.studentid, studentId1);

    //break if only 1 student is needed
    if (numStudents == 1) break;
    
    printf("student 2\n");
     //user input student features
    addStudent("first name", firstname2, buffer);
    addStudent("last name", lastname2, buffer);
    addStudent("age", age2, buffer);
    addStudent("student id", studentId2, buffer);
    //stuct the student
    struct student student2;
    strcpy(student1.firstname, firstname2);
    strcpy(student1.lastname, lastname2);
    strcpy(student1.age, age2);
    strcpy(student1.studentid, studentId2);
    if (numStudents == 2) break;
  }


  //re struct stuents and print them out 
  struct student student1;
  strcpy(student1.firstname, firstname1);
  strcpy(student1.lastname, lastname1);
  strcpy(student1.age, age1);
  strcpy(student1.studentid, studentId1);

  printStudent(&student1,1);

  if (numStudents == 2)
  {
  struct student student2;
  strcpy(student2.firstname, firstname1);
  strcpy(student2.lastname, lastname1);
  strcpy(student2.age, age1);
  strcpy(student2.studentid, studentId1);
  
  printStudent(&student2,2);
  }
}
