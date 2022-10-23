#include<stdio.h>
#include<string.h>
struct student{
    char name[60];
    char course[60];  //array of structure using  //
};
int main()
{
    struct student std[20];   // Here we can take only 20 record of the student  //
    int choice,top=-1,i;
    while(1)
    {
    	printf("--------------------------------------\n");
    	printf("\tMINI PROJECT USING STACK ");
    	printf("\n*************************************\n");
        printf("\n||||| STUDENT MANAGEMENT SYSTEM |||||\n");
        printf("\n*************************************\n");
        printf("\n STUDENTS RECORD UPTO [MAX-SIZE-20]: ");  //ENTERING THE SIZE OF STACK
        printf("\n--------------------------------------------");
        printf("\n 1.ENTER STUDENT'S RECORD\n 2.DELETE STUDENT'S RECORD\n 3.DISPLAY STUDENT'S RECORD\n 4.EXIT");
        printf("\n--------------------------------------------");
        printf("\n Enter Your Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                if(top==20)
    			{
        			printf("\n\t STACK is over flow");
        
    			}
    			else
    			{
        			top=top+1;
					printf("\n Enter Student name : ");
					scanf("%s",&std[top].name);
					printf("\n Enter Student Course :");
					scanf("%s",&std[top].course);
        			printf("Record Inserted Sucessfully !!\n");
        			        			
    			}
                break;
            }
            case 2:
            {
                 if(top==-1)
    			{
        			printf("\n\t Stack is empty ");
    			}
    			else
    			{				
        			printf("\n\t One Student's Record deleted successfully !! \n");
        			top--;
    			}
                break;
            }
            case 3:
            {
                 if(top==-1)
    			{
        			printf("\n The STACK is empty!!\n");
    			}
    			else
    			{
        			printf("\nName\tCourse\n");
        				printf("--------------------------------------\n");
        			for(i=top;i>=0;i--){
            			printf("%s\t%s\n",std[i].name,std[i].course);
//            			printf("-----------------------------------\n");
        			}
    			}
                break;
            }
            case 4:
            {
                return 0;
            }
            default:
            {
                printf ("\n\t Invalid choice !! Go for Other Option.\n");
            }
                
        }
    }
    return 0;
}


//THE END 