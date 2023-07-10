#include "StudList.h"


Item* Create(Student* elements)
{
     Item* item = (Item*)calloc(1,sizeof(Item));
    if(!item)
    {
        printf("Sikertele lefoglalas: Item\n");
    }
    item -> element = elements;
    item -> next = NULL;
    return item;

}

void Destroy(Item* item)
{

    DestroyStudent(item->elements);
    free(item);
    item -> next = NULL;
    item = NULL;
    printf("Listaelem felszabadìtva");
}

Item* CreateL()
{
    return NULL
}

void DestroyL(Item* item)
{

    while(item != NULL)
    {
        Item* aux = item;
        item = item -> next;
        Destroy(aux);
    }
    printf("Lista felszabaditva\n");
}


void Print(Item* item)
{

    printf("A list tartalma:\n");
    while(item != NULL)
    {
        Print(item->elements);
        item=item->next;
    }
    printf("\n");
}


Item* ReadElements(char* fileName, Item* item)
{
    FILE* file = fopen(fileName,"rt");
    if(!file){printf("Sikertelen fajlmegnyitas!\n");return 1;}
    int numberOfMarks;
    while(fscanf(file,"%s\n",&numberOfMarks)!=EOF)//fajl vege
    {
      Student* student = CreateStudent(file,numberOfMarks);
      item = InsertLast(item,student);
    }
    return item;
}

Item* InsertLast(Item* item, Student student)
{
    Item* head = item;
    Item* newItem = Create(Student);
    if(item == NULL)
    {
        return newItem;
    }
    while(item -> next != NULL)
    {
        item = item -> next;
    }
    item -> next = newItem
    return head;

void PrintListToFile(Item* item,char* fileName)
{
    FILE* fout = fopen(fileName,"wt");
    if(!fout){printf("Sikertelen fajlmegnyitas!\n");return 1;}
    fprintf(fout,"\n")
    printf("A list tartalma:\n");
    while(item != NULL)
    {
        PrintToFile(fout,item->elements);
        item=item->next;
    }
    printf("\n");
}

void SpecificFirstLetter(Item* item,char letter)
{
    int count=0;
    printf("Students with %c first letter in their name\n",letter);
    while(item != NULL)
    {
        if(leter == item->elements->name[0])
        {Print(item->elements);
        count++;}
        item=item->next;
    }
    if(count == 0){printf("Nincs olyan diak akinek ezzel a betuvel kezdodne a neve\n");}
    printf("\n");
}

double AvarageOfAge(Item* item,char classroom,int grade)
{
    double avg=0;
    int count=0;
    while(item != NULL)
    {
        if(item->elements->classroom && item->elements->grade == grade){
        avg+= item->elements->age;
        count++}
        item=item->next;
    }
    return avg/count;
}

double AvarageOfClass(Item* item
{
    double avg=0;
    int numberOfStudents=0;
    while(item != NULL)
    {
        avg+= AverageOfMarks(item->elements);
        numberOfStudents++;
        item=item->next;
    }
    return avg / numberOfStudents;
}
