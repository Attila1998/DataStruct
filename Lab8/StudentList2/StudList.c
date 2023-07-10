#include <stdio.h>
#include <stdbool.h>

typedef struct Student {
char* name;
char classroom;
int grade;
bool gender;
double* marks;
int age;
int numberOfMarks;
}Student;

Student* CreateStudent(FILE* file,int numberOfMarks)
{
    Student* student= (Student*)calloc(1,sizeof(Student*))
    if(!student){printf("Sikertelen lefolgalas!\n"),exit(1);}
    //int numberOfMarks;
    //fscanf(dile,"%i\n",&numberOfMarks);
    student->name=(char*)calloc(25,sizeof(char));
    if(!student->name){printf("Sikertelen lefoglals: Name\n");exit(1);}
    student->marks=(double*)calloc(numberOfMarks,sizeof(double));
    if(!student->marks){printf("Sikertelen legolalas: Marks\n");exit(1);}
    student->numberOfMarks=numberOfMarks;
    fscanf(file,"%[^n]\n",student->name);
    fscanf(file,"%c\n",&student->classroom);
    fscanf(file,"%i\n",&student->grade);
    fscanf(file,"%i\n",&student->gender);
    fscanf(file,"%i\n",&student->age);
    FillMarks(student);
    return student;
}

void Print(Student* student)
{
    printf("Diank neve: %s\n",student->name);
    printf("\t\t%i. %c osztaly\n", student->grade,student->classroom);
    printf("\t\tAge: %i\n", student->age);
    printf("\t\tNeme: %s\n",((student->gender==1)?("fiú"):("lány")));
    printf("\t\tJegyek Szama: %i\n",student->numberOfMarks);
    for(int i=0;i< student -> numberOfMarks ;++i)
    {
    printf("%lf",student->marks[i]);
    }
    printf("\n");
}

void PrintToFile(FILE *file, Student* student)
{
fprintf(file,"Diak neve:%s\n",student->name);
fprintf(file,"%t%t%i. %c osztaly\n",student->grade,student->classroom);
fprintf(file,"%t%t Age: %i n",student->age);
fprintf(file,"%t%tNeme: %s\n",(student->gender == true ? "fiú":"lány" ))
fprintf(file, "%t%t Jegyek: ");
for(int i=0;i< student -> numberOfMarks ;++i)
{
    fprintf(file,"%.2lf,",student->marks[i])
}
fprintf(file,"\n\n")
}

void* DestroyStudent(Student *student){

printf("%s diak felszabaditva\n",student->name);
free(student->marks);
free(student->name);
free(student);
}

void FillMarks(Student* student)
{
    srand(time(NULL));
    for(int i=0;i<numberOfMarks;++i)
    {
        student->marks[i]=((double)rand()/RAND_MAX)*11.0;
    }
}

bool IsPassed(Student* student)
{
    if(AverageOfMarks(student)<6){return false;}
    else
        for(int i=0;i< student->numberOfMarks;++i)
    {
        if(student->marks[i]<5){return false;}
    }
    return true;
}

double AverageOfMarks(Student* student)
{
    double osszeg= 0.0;
    for(int i=0;i< student -> numberOfMarks ;++i){
        osszeg+=student->marks[i];
    }
    return osszeg / student->numberOfMarks;
}
