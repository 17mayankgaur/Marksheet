#include <stdio.h>
struct student
    {
     char name[25];
     int hindi,english,math,science,total;
     float per;
    };

int main()
{   struct student stud[10];
    int n;

    printf("Enter no. of Student = ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        {
            printf("Enter Name of Student =");
            scanf("%s",stud[i].name);

            printf("Enter Marks of Hindi =");
            scanf("%d",&stud[i].hindi);

             printf("Enter Marks of English =");
            scanf("%d",&stud[i].english);

             printf("Enter Marks of Math =");
            scanf("%d",&stud[i].math);

             printf("Enter Marks of Science =");
            scanf("%d",&stud[i].science);

            stud[i].total=stud[i].hindi+stud[i].english+stud[i].math+stud[i].science;
            stud[i].per=stud[i].total/5;
        }

    for(int i=0;i<n;i++)
        {

            printf("*******************************************************\n");
            printf("Result of  : %s \n",stud[i].name);
            printf("Hindi : %d \n",stud[i].hindi);
            printf("English : %d \n",stud[i].english);
            printf("Math : %d \n",stud[i].math);
            printf("Science : %d \n",stud[i].science);
            printf("Total : %d \n",stud[i].total);
            printf("percentage : %d \n",stud[i].per);
        }



    return 0;
}
