//Sri lankan rupees convert to most traded currencies in the world and most traded currencies convert to Sri Lankan Rupees."
#include<stdio.h>
int main()
{
    float amount;
    float usd_dollor,euro,yen,pound,australian_dollor,canadian_dollor,won,indian_rupees,lkr;
    int choice;
    char answer[10];

    printf("Do you want to Sri Lankan Rupees convert to another currency?(YES= y/NO= n)\n");
    scanf("%s",answer[10]);

    if(answer=='yes'){

       printf("\nEnter the sri lankan rupees amount you want to convert\n");
       scanf("%f",&amount);

       printf("\nChoice convert currency:-\n");
       printf("\nEnter 1: US dollor");
       printf("\nEnter 2: Euro ");
       printf("\nEnter 3:Jananese Yen");
       printf("\nEnter 4:Pound");
       printf("\nEnter 5:Australian Dollor");
       printf("\nEnter 6:Canadian Dollor");
       printf("\nEnter 7:Won");
       printf("\nEnter 8:Indian Rupees");


       printf("\n\nEnter your choice:\n");
       scanf("%d", &choice);

      switch(choice){
        case 1://USD Dollar conversion
           usd_dollor=amount*0.0030;
           printf("\n%.2f amount =  %.2f usd dollar\n", amount, usd_dollor);
           break;

        case 2://Euro conversion
           euro=amount*0.0027;
           printf("\n%.2f amount =  %.2f euro\n", amount, euro);
           break;

        case 3://Yen conversion
           yen=amount*0.43;
           printf("\n%.2f amount =  %.2f Japanese Yen\n", amount, yen);
           break;

        case 4://Pound conversion
           pound=amount*0.0027;
           printf("\n%.2f amount =  %.2f Pound\n", amount, pound);
           break;

        case 5://Australian Dollar conversion
           australian_dollor=amount*0.0045;
           printf("\n%.2f amount =  %.2f australian_dollor\n", amount, australian_dollor);
           break;

        case 6://Canadian Dollar conversion
          canadian_dollor=amount*0.0040;
          printf("\n%.2f amount =  %.2f\n ", amount, canadian_dollor);
          break;

        case 7://Won conversion
          won=amount*3.90;
          printf("\n%.2f amount =  %.2f won\n", amount, won);
          break;

        case 8://Indian rupees conversion
          indian_rupees=amount*0.25;
          printf("\n%.2f amount = %.2f Indian Rupees\n", amount, indian_rupees);
          break;



        //Default case
        default:
          printf("\nInvalid Input");
   }

}else if(answer=='no'){
        printf("\nDo you want to another currency convert to Sri Lankan Rupees?\n");
        scanf("%s",&answer);

        if(answer=='yes'){
             printf("\nChoice currency convert to Sri Lankan rupees:-\n");
             printf("\nEnter 1: US dollor");
             printf("\nEnter 2: Euro ");
             printf("\nEnter 3:Jananese Yen");
             printf("\nEnter 4:Pound");
             printf("\nEnter 5:Australian Dollor");
             printf("\nEnter 6:Canadian Dollor");
             printf("\nEnter 7:Won");
             printf("\nEnter 8:Indian Rupees");

             printf("\n\nEnter your choice:\n");
             scanf("%d", &choice);


             switch(choice){
                case 1://USD Dollar  convert lkr
                   printf("\nEnter the USD dollar amount:\n");
                   scanf("%f",&amount);
                   lkr=amount*328.21;
                   printf("\n%.2f USD Dollar =  %.2f LKR \n", amount, lkr);
                   break;

                case 2://Euro convet lkr
                  printf("\nEnter the Euro amount:\n");
                  scanf("%f",&amount);
                  lkr=amount*365.58;
                  printf("\n%.2f Euro =  %.2f LKR\n", amount,lkr);
                  break;

               case 3://Yen convert lkr
                  printf("\nEnter the Yen amount:\n");
                  scanf("%f",&amount);
                  lkr=amount*2.34;
                  printf("\n%.2f Japanese Yen =  %.2f LKR\n", amount, lkr);
                  break;

              case 4://Pound convert lkr
                  printf("\nEnter the Pound amount:\n");
                  scanf("%f",&amount);
                  lkr=amount*423.08;
                  printf("\n%.2f Pound =  %.2f LKR\n", amount, lkr);
                  break;

              case 5://Australian Dollar convert lkr
                 printf("\nEnter the Australian dollor amount:\n");
                 scanf("%f",&amount);
                 lkr=amount*222.31;
                 printf("\n%.2f Australian dollor=  %.2f LKR \n", amount, lkr);
                 break;

              case 6://Canadian Dollar conversion
                 printf("\nEnter the Canadian dollar amount:\n");
                 scanf("%f",&amount);
                 lkr=amount*249.10;
                 printf("\n%.2f Canadian dollor =  %.2f LKR\n ", amount,lkr );
                 break;

             case 7://Won conversion
                 printf("\nEnter the Won amount:\n");
                 scanf("%f",&amount);
                 lkr=amount*0.26;
                 printf("\n%.2f Won =  %.2f LKR\n", amount, lkr);
                 break;

             case 8://Indian rupees conversion
                printf("\nEnter the Indian rupees amount:\n");
                scanf("%f",&amount);
                lkr=amount*4.00;
                printf("\n%.2f Indian Rupees = %.2f LKR \n", amount, lkr);
                break;



           //Default case
            default:
              printf("\nInvalid Input");
   }
        }else{

             printf("\nInvalid Input");
        }

}


}








