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

fprintf(file,"Diak neve:%s\n",student->name);
fprintf(file,"%t%t%i. %c osztaly\n",student->grade,student->classroom);
fprintf(file,"%t%tNeme: %s\n",(student->gender == true ? "fiú":"lány" ))
fprintf(file, "%t%t Jegyek: ");
for(int i=0;i< student -> numberOfMarks ;++i)
{
    fprintf(file,"%.2lf,",student->marks[i])
}
fprintf(file,"\n\n")
}

}

void* Destroy(Student *student){

printf("%s diak felszabaditva\n",student->name);
free(student->marks);
free(student->name);
free(student);
}


double AverageOfMarks(Student* student)
{
    double osszeg= 0.0;
    for(int i=0;i< student -> numberOfMarks ;++i){
        osszeg+=student->marks[i];
    }
    return osszeg / student->numberOfMarks;
}

int cmpByName(const void* s1,const void* s2)
{
    Student* student1 = *(Student**)s1;
    Student* student2 = *(Student**)s2;

    return strcmp(student1->name,student2->name);
}

int cmpByGradeAndName(const void* s1,const void* s2)
{
    Student* student1 = *(Student**)s1;
    Student* student2 = *(Student**)s2;
    int result = student1->grade - student2-> grade;
    if(result == 0)
        return strcmp(student1->name , student2->name);
    else
        return result;
    }
