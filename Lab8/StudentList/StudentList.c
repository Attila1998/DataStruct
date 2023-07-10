#include <stdio.h>
#include <stdbool.h>

typedef struct Student {
char* name;
char classroom;
int grade;
bool gender;
double* marks;
int numberOfMarks;
}Student;

Student* Create(int maxNumberOfMarks)
{
    Student *student=(Student*)malloc(1*(sizeof(Student)));
    if(!student){printf("Hiba!");exit(1);}

    student->marks=(double*)calloc(maxNumberOfMarks,(sizeof(double)));
    if(!student->marks){printf("Hiba2!");exit(1);}

    student->name=(char*)calloc(25,sizeof(char));
    if(!student->name){printf("Hiba3!");exit(1);}

    student->numberOfMarks=maxNumberOfMarks;
    student->classroom='A';
    student->gender= 1;
    srtcpy(student->name,"Nagy Tibor");//másol valamit valamibe;
    for(int i=0;i<maxNumberOfMarks;++i)
    {
      student->marks[i]=i+1;
    }
    student->grade=10;
    return student;
}

void Print(Student* student)
{
    printf("Diank neve: %s\n",student->name);
    printf("\t\t%i. %c osztaly\n", student->grade,student->classroom);
    printf("\t\tNeme: %s\n",((student->gender==1)?("fiú"):("lány")));
    printf("\t\tJegyek Szama: %i\n",student->numberOfMarks);
    for(int i=0;i< student -> numberOfMarks ;++i)
    {
    printf("%lf",student->marks[i]);
    }
    printf("\n");
}

void PrintToFile(FILE *file, Student* student){

    FILE* fin=fopen(fileName,"wt");
    if(!fin){printf("Hiba!");exit(1);}

    fprintf("Diank neve: %s\n",student->name);
    fprintf("\t\t%i. %c osztaly\n", student->grade,student->classroom);
    fprintf("\t\tNeme: %s\n",((student->gender==1)?("fiú"):("lány")));
    fprintf("\t\tJegyek Szama: %i\n",student->numberOfMarks);
    for(int i=0;i< student -> numberOfMarks ;++i)
    {
    fprintf("%lf",student->marks[i]);
    }
    fprintf("\n");

}

void* Destroy(Student *student){

free(student->name);
free(student->classroom);
free(student->grade);
free(student->gender);
for(int i=0;i<maxNumberOfMarks;++i)
    {
    free(student->marks[i]);
}
free(student->numberOfMarks);
free(student);

}
