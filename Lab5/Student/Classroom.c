#include <stdio.h>
#include <stdlib.h>

typedef struct ClassRoom
{
    Student** osztaly;
    int numberOfStudents;
} classRoom;

ClassRoom* CreateClass(int numberOfStudents)
{
    ClassRoom* classRoom=(ClassRoom*)(calloc(1,sizeof(ClassRoom)))
                         if(!classRoom)
    {
        printf("Hiba!");
        exit(1);
    }

    classRoom->osztaly=(Student**)(calloc(numberOfStudents, sizeof(Student*)))
                       if(!classRoom->osztaly)
    {
        printf("Hiba!");
        exit(1);
    }

    for(int i=0; i<numberOfStudents; ++i)
    {
        classRoom->osztaly[i]= Create(10);
    }
    classRoom->numberOfStudents=numberOfStudents;
    return classRoom;
}

void PrintClass(ClassRoom* classRoom)
{
    for(int i=0; i<classRoom->numberOfStudents; ++i)
    {
        Print(classRoom->osztaly[i]);
        printf("\n");
    }
}

ClassRoom* ReadStudentsData(const char* fileName)
{
    FILE* file=fopen(fileName,"r");
//ellenorzes
    int numberOfStudents;
    fscanf(file,"%i\n", &numberOfStudents)//olvas utána újsor
    CalssRoom* classRoom=CreateClass(numberOfStudents);
    for (int i=0; i<numberOfStudents; ++i)
    {
        fscanf(file,"%[^\n]\n",classRoom->osztaly[i]->name);//[^\n]-sor vegeig olvas
        fscanf(file, "%c%i", classRoom->osztaly[i]->classroom);
        fscanf(file,"%i", &classRoom->osztaly[i]->grade);
        fscanf(file,"%i", &classRoom->osztaly[i]->gender)
        fscanf(file,"%i", &classRoom->osztaly[i]->numberOfMarks)
        for(int j=0; j<nuberOfMarks; j++)
        {
            fscanf(file,"%i", &classRoom->osztaly[i]->marks[j])
        }
    }
}

void DestroyClass(ClassRoom* classRoom)
{
    for(int i=0; i<numberOfStudents; ++i)
    {
        free(classRoom->osztaly[i]);
    }
    free(numberOfStudents);
    free(classRoom);
}

void PrintClassToFile(const char* fileName, ClassRoom* classRoom);
{
    FILE* fin=fopen(fileName,"wt");
    if(!fin)
    {
        printf("Hiba!");
        exit(1);
    }

    for(int i=0; i<classRoom->numberOfStudents; ++i)
    {
        Print(classRoom->osztaly[i]);
        fprintf("\n");
    }
}

void GenderProportion(ClassRoom* classRoom)
{
    int N=0,F=0;
    for (int i=0; i<numberOfStudents; ++i)
    {
        if(classRoom->osztaly[i]->gender==1)
        {
            F++;
        }
        else
        {
            N++;
        }
    }
    if(F==N)
    {
        printf("Egyelő a fiúk és a lányok száma\n");
    }
    else if(F>N)
    {
        printf("Több a fiúk  mint  lányok \n");
    }
    else(F<N)
    {
        printf("Több a  lányok mint fiúk \n");
    }
}

double AvrageOfClass(ClassRoom* classRoom)
{
    double osszeg = 0.0;
    for(int i=0;i < classRoom->numberOfStudents; ++i)
    {
        printf("%s az atlag: %lf\n", classRoom->room[i]=name , AvrageOfClass(classRoom->room[i]));
        osszeg += AvrageOfClass(classRoom->room[i]);
    }
    return osszeg / classRoom->numberOfStudents
}

void GenderProportion(ClassRoom* classRoom)
{
    int numberOfGirls, numberOfBoys;
    numberOfGirls=numberOfBoys=0;
    for(int i=0;i< classRoom->numberOfStudents;++i)
    {
        (classRoom->room[i]->gender == true ? numberOfBoys++ : numberOfGirls++);
    }
    if(numberOfBoys == numberOfGirls){printf("Ugyan annyi lany, mint fiu\n");}
    else if(numberOfBoys>numberOfGirls){printf("Tobb fiu van, mint lany\n");}
    else{printf("tobb lany van, mint fiu\n");}
}

void DetailsOfSpecificStudent(ClassRoom* classRoom, char* name)
{
    for(int i=0;i<classRoom->numberOfStudents;++i)
    {
        if(strcmp(classRoom->room[i]->name, name)==0)
        {
            printf("A keresett diak:\n");
            Print(classRoom->room[i]);
            return;
        }
    }
    printf("Nincs ilyen diak az osztalyban\n");
}

void SortClassByName(ClassRoom* classRoom)
{
    qsort(classRoom->room,classRoom->numberOfStudents,sizeof(classRoom->room[0]),cmpByName);
}

void SortClassByGradeAndName(ClassRoom* classRoom)
{
    qsort(classRoom->room,classRoom->numberOfStudents,sizeof(classRoom->room[0]),cmpByGradeAndName);
}

