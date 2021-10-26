#include<stdio.h>

int main()
{
    char ch;
    int num=0;
    int Price1 = 35, Price2 = 40, Price3 = 45;

    printf("Select your order:\n");
    printf("a) Burger  35Php\n");
    printf("b) Pancake 40Php\n");
    printf("c) Fries 45Php\n");
    printf("Choice:");
    scanf("%c", &ch);

    switch (ch)
    {
        case 'a':
           
         
             printf("Input Payment: \n");
            scanf("%d",&num);
          if (num>35)
            {printf("You have purchased Burger\n");
            printf("Change:%d\n",num - Price1);
           }
          else 
          { printf("Insuffiecent balance");
          }
            break;
          

        case 'b':
                printf("Input Payment: \n");
            scanf("%d",&num);
          if (num>40)
            {printf("You have purchased Pancake\n");
            printf("Change:%d\n",num - Price2);
           }
          else 
          { printf("Insuffiecent balance");
          }
            break;
          
        case 'c':
                printf("Input Payment: \n");
            scanf("%d",&num);
          if (num>45)
            {printf("You have purchased Fries\n");
            printf("Change:%d\n",num - Price3);
           }
          else 
          { printf("Insuffiecent balance");
          }
            break;
          
          default:
            printf("Invalid choice\n");
            break; 

          }
    
    

  return 0;
}