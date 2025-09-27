#include <stdio.h>

void main() {
    char first_choice;
    char second_choice;

    printf("----------Library Management System----------\n");
    printf("Do you want to manange a book or a magazine?(Enter B for book and M for magazine): ");
    scanf(" %c", &first_choice);

    switch (first_choice)
    {
    case 'B':
        printf("Do you want to issue or return a book?(Enter I for issue and R for return): ");
        scanf(" %c", &second_choice);
        switch (second_choice)
        {
        case 'I':
            printf("Book Issued!");
            break;
        
        case 'R':
            printf("Book Returned!");
            break;
        
        default:
            printf("Invalid Input!");
            break;
        }
        break;
    
    case 'M':
        printf("Do you want to issue or return a Magazine?(Enter I for issue and R for return): ");
        scanf(" %c", &second_choice);
        switch (second_choice)
        {
        case 'I':
            printf("Magazine Issued!");
            break;
        
        case 'R':
            printf("Magazine Returned!");
            break;
        
        default:
            printf("Invalid Input!");
            break;
        }
        break;
    
    default:
        printf("Invalid Input!");
        break;
    }
}