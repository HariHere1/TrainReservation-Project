#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to select the class of ticket
int class_op() {
    printf("\nChoose your ticket class\n");
    printf("Class 1: $200 | Class 2: $100 | Class 3: $50\n");
    int price_op;
    scanf("%d", &price_op);
    return price_op;
}

// Function to verify card number
int verify_card(char card_num[]) {
    int valid = 0;
    if (strlen(card_num) == 5) {
        for (int i = 0; i < 5; i++) {
            if (isdigit(card_num[i])) {
                valid = 1;
            } else {
                valid = 0;
                break;
            }
        }
        if (valid == 0) {
            printf("Enter a valid card number\n");
        } else {
            printf("Processing payment...\n");
        }
    } else {
        printf("Enter a valid card number\n");
        valid = 0;
    }
    return valid;
}

// Function for payment process
void payment_pro(int pay_op) {
    char card_num[6];
    int valid = 0;

    switch (pay_op) {
    case 1:
    case 2:
    case 3:
        do {
            printf("\nEnter your 5 digit card number: ");
            scanf("%s", card_num);
            valid = verify_card(card_num);
        } while (valid == 0);
        break;
    default:
        printf("Enter a valid payment option\n");
        break;
    }
}

// Main function
int main() {
    int login_id, trainNum, pay_op;

    printf("Enter your login id: ");
    scanf("%d", &login_id);

    printf("\nTRAIN NO -> 1 | New York to Boston | Departure: 08:00 AM | Arrival: 11:30 AM | Date: 12-Oct-2024");
    printf("\nTRAIN NO -> 2 | San Francisco to Los Angeles | Departure: 09:15 AM | Arrival: 02:00 PM | Date: 12-Oct-2024");
    printf("\nTRAIN NO -> 3 | Miami to Tampa | Departure: 07:00 AM | Arrival: 10:30 AM | Date: 12-Oct-2024");

    printf("\n\nEnter your train number: ");
    scanf("%d", &trainNum);

    switch (trainNum) {
    case 1:
        printf("\nNew York to Boston | Departure: 08:00 AM | Arrival: 11:30 AM | \nSeats available: 12\n");
        break;
    case 2:
        printf("\nSan Francisco to Los Angeles | Departure: 09:15 AM | Arrival: 02:00 PM | \nSeats available: 12\n");
        break;
    case 3:
        printf("\nMiami to Tampa | Departure: 07:00 AM | Arrival: 10:30 AM | \nSeats available: 12\n");
        break;
    default:
        printf("Invalid Train Number\n");
        return 0;
    }

    printf("\nPayment Methods -- 1 -> Credit Card, 2 -> Debit Card, 3 -> Net Banking");
    printf("\n\nEnter your payment option: ");
    scanf("%d", &pay_op);

    payment_pro(pay_op);

    return 0;
}
