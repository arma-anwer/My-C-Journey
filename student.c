#include<stdio.h>
#include<string.h>
#include<ctype.h>

typedef struct student {
char name[100];
int roll;
float cgpa;

}stu;

void printdata(struct student information[] , int n);

int main(){
    
    int n;
    printf("Enter the number of student: ");
    scanf("%d",&n);
    
    stu information[1000];

    getchar();
    for(int i = 0 ; i < n ; i++){
        int serial = i + 1;


        printf("Enter the information of student %d.\n" ,serial);

        printf("Name: ");
        fgets(information[i].name, 100 , stdin);
        
        printf("Roll: ");
        scanf("%d",&information[i].roll);

        printf("CGPA: ");
        scanf("%f",&information[i].cgpa);

        getchar();
    }
    
    printdata(information , n);
    return 0;
}

void printdata(struct student information[1000] , int n){

    printf("you are selected.\n");
    for(int i = 0; i < n ; i++){
        if(information[i].cgpa >= 3.5 & information[i].cgpa <= 4){
            
            printf("Name: %s",information[i].name);
            printf("Roll: %d\n",information[i].roll);
            printf("CGPA: %.2f\n",information[i].cgpa);
        }
    }
    printf("thanks.\n");
}