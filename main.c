#include <stdio.h>
#include <string.h>
#include <ctype.h>

int class_op(){
    printf("Choose your ticket class");
    printf("Class 1 : $200 | Class 2 : $100 | Class 3 : $50");
    int price_op;
    scanf("%d",&price_op);
    
}

int payment_pro(){
    printf("Requesting payment for ");
}

int main(){

    printf("Enter your login id : ");
    int login_id;
    scanf("%d",&login_id);
    printf("\nTRAIN NO -> 1 | New York to Boston | Departure: 08:00 AM | Arrival: 11:30 AM | Date: 12-Oct-2024");
    printf("\n\nTRAIN NO -> 2 | San Francisco to Los Angeles | Departure: 09:15 AM | Arrival: 02:00 PM | Date: 12-Oct-2024");
    printf("\n\nTRAIN NO -> 3 | Miami to Tampa | Departure: 07:00 AM | Arrival: 10:30 AM | Date: 12-Oct-2024");
    
    printf("\n\nEnter your train number : ");
    int trainNum; /*Getting train num*/
    scanf("%d",&trainNum);

    int pay_op;
    char card_num[5];
    int valid = 0;
    int i;

    switch(trainNum) /*First switch*/
    {
    case 1:
        printf("\nNew York to Boston | Departure: 08:00 AM | Arrival: 11:30 AM | \nSeats available : 12");
        printf("\n\nPayment Methods -- 1 -> Credit Card, 2 -> Debit Card, 3 -> Net Banking");
        printf("\n\nEnter your payment option : ");
        scanf("%d", &pay_op);
        switch (pay_op) /*Nested sswitch 1*/
        {
        case 1 :
           do{ printf("\nEnter your 5 digit credit card number : ");
            scanf("%s", &card_num);
            if (strlen(card_num)==5){
                for ( i = 0; i < 5; i++)
            {
                if(isdigit(card_num[i])){
                    valid = 1;
                }

                else {
                    valid = 0;
                }
            }
            if(valid == 0) {            
                 printf("Enter a valid card number");
            }
             else {
                printf("\n Working on it....");
             }
            }
            else {
                printf("Enter a valid card number");
            }}while(valid==0);
            break;
        
        case 2 :
            printf("Enter your 5  debit card number : ");
            scanf("%s", &card_num);
             do{ printf("\nEnter your 5 digit credit card number : ");
            scanf("%s", &card_num);
            if (strlen(card_num)==5){
                for ( i = 0; i < 5; i++)
            {
                if(isdigit(card_num[i])){
                    valid = 1;
                }

                else {
                    valid = 0;
                }
            }
            if(valid == 0) {            
                 printf("Enter a valid card number");
            }
             else {
                printf("\n Working on it....");
             }
            }
            else {
                printf("Enter a valid card number");
            }}while(valid==0);
            break;
            
        case 3 :
            printf("Enter your UPI id : ");
            scanf("%s", &card_num);
            do{ 
                printf("\nEnter your 5 digit credit card number : ");
                scanf("%s", &card_num);
            if(strlen(card_num)==5){
                for ( i = 0; i < 5; i++)
            {
                if(isdigit(card_num[i])){
                    valid = 1;
                }

                else {
                    valid = 0;
                }
            }
            if(valid == 0) {            
                 printf("Enter a valid card number");
            }
             else {
                printf("\n Working on it....");
             }
            }
            else {
                printf("Enter a valid card number");
            }}while(valid==0);
            break;

        default:
            printf("Enter a valid payment option : ");
            break;
        }
        break;

    case 2:
        printf("\nSan Francisco to Los Angeles | Departure: 09:15 AM | Arrival: 02:00 PM | Date: 12-Oct-2024\nSeats available : 12 ");
        printf("\n\nPayment Methods - 1 -> Credit Card, 2 -> Debit Card, 3 -> Net Banking");
        printf("\n\nEnter your payment option : ");
        scanf("%d", &pay_op);
          switch (pay_op) /*Nested sswitch 1*/
        {
        case 1 :
             do{ printf("\nEnter your 5 digit credit card number : ");
            scanf("%s", &card_num);
            if (strlen(card_num)==5){
                for ( i = 0; i < 5; i++)
            {
                if(isdigit(card_num[i])){
                    valid = 1;
                }

                else {
                    valid = 0;
                }
            }
            if(valid == 0) {            
                 printf("Enter a valid card number");
            }
             else {
                printf("\n Working on it....");
             }
            }
            else {
                printf("Enter a valid card number");
            }}while(valid==0);
            break;
        
        case 2 :
             do{ printf("\nEnter your 5 digit credit card number : ");
            scanf("%s", &card_num);
            if (strlen(card_num)==5){
                for ( i = 0; i < 5; i++)
            {
                if(isdigit(card_num[i])){
                    valid = 1;
                }

                else {
                    valid = 0;
                }
            }
            if(valid == 0) {            
                 printf("Enter a valid card number");
            }
             else {
                printf("\n Working on it....");
             }
            }
            else {
                printf("Enter a valid card number");
            }}while(valid==0);
            
        case 3 :
             do{ printf("\nEnter your 5 digit credit card number : ");
            scanf("%s", &card_num);
            if (strlen(card_num)==5){
                for ( i = 0; i < 5; i++)
            {
                if(isdigit(card_num[i])){
                    valid = 1;
                }

                else {
                    valid = 0;
                }
            }
            if(valid == 0) {            
                 printf("Enter a valid card number");
            }
             else {
                printf("\n Working on it....");
             }
            }
            else {
                printf("Enter a valid card number");
            }}while(valid==0);

        default:
            printf("Enter a valid payment option : ");
            break;
        }
        break;

    case 3:
        printf("\nMiami to Tampa | Departure: 07:00 AM | Arrival: 10:30 AM | Date: 12-Oct-2024 \nSeats available : 12");
        printf("\n\nPayment Methods - 1 -> Credit Card, 2 -> Debit Card, 3 -> Net Banking");
        printf("\n\nEnter your payment option : ");
        scanf("%d", &pay_op);
        switch (pay_op) /*Nested sswitch 1*/
        {
        case 1 :
             do{ printf("\nEnter your 5 digit credit card number : ");
            scanf("%s", &card_num);
            if (strlen(card_num)==5){
                for ( i = 0; i < 5; i++)
            {
                if(isdigit(card_num[i])){
                    valid = 1;
                }

                else {
                    valid = 0;
                }
            }
            if(valid == 0) {            
                 printf("Enter a valid card number");
            }
             else {
                printf("\n Working on it....");
             }
            }
            else {
                printf("Enter a valid card number");
            }}while(valid==0);
            break;
        
        case 2 :
             do{ printf("\nEnter your 5 digit credit card number : ");
            scanf("%s", &card_num);
            if (strlen(card_num)==5){
                for ( i = 0; i < 5; i++)
            {
                if(isdigit(card_num[i])){
                    valid = 1;
                }

                else {
                    valid = 0;
                }
            }
            if(valid == 0) {            
                 printf("Enter a valid card number");
            }
             else {
                printf("\n Working on it....");
             }
            }
            else {
                printf("Enter a valid card number");
            }}while(valid==0);
            break;
            
        case 3 :
             do{ printf("\nEnter your 5 digit credit card number : ");
            scanf("%s", &card_num);
            if (strlen(card_num)==5){
                for ( i = 0; i < 5; i++)
            {
                if(isdigit(card_num[i])){
                    valid = 1;
                }

                else {
                    valid = 0;
                }
            }
            if(valid == 0) {            
                 printf("Enter a valid card number");
            }
             else {
                printf("\n Working on it....");
             }
            }
            else {
                printf("Enter a valid card number");
            }}while(valid==0);
            break;

        default:
            printf("Enter a valid payment option : ");
            break;
        }
        break;

    case 4 :
        printf("Exiting");
        break;
    default:
        printf("Invalid Train Number");
        break;
    }
return 0;

}