#include <stdio.h>
#include <string.h>

#define max_items 10 // max number opf items on the chart

//structuire to present items
struct Items
{
    char name[50];
    float price;
};
int main() {
    struct Items ShopingChart[max_items];// arrays to stopre items
        int ItemCount =0; //Number of items in a chart
        int Choice;
        float TotalCost = 0.0;
    printf("Welcome to Our Online Shop!\n");

    do { //Display the shop menu options
        printf("\n Menu: \n");
        printf("1. add an item to the chart\n");
        printf("2. View the Chart\n");
        printf("3. Calcilate the total cost\n");
        printf("4. Exit\n");
        scanf("%d", &Choice);

        switch (Choice) {
        case 1: //add items into the chart
            if (ItemCount < max_items){
                printf("Enter item name: ");
                scanf("%s", &ShopingChart[ItemCount].name);
                printf("Enter item price: ");
                scanf("%f", &ShopingChart[ItemCount].price);
                TotalCost += ShopingChart[ItemCount].price;
                ItemCount ++;
                printf("item added to chart \n");
            }
            else {
                printf("Chart is full. items cannot be added\n");
            }
            break;
        case 2: //view the chart
            printf("_______Shoping Chart________ \n");
            
            if (ItemCount == 0) {
                printf("Chart is empty :( \n");
                printf("Please add items to see your Chart!:) and come back :) \n");
            }
            else {
                printf("items\t\tprice\n");
                for (int i = 0; i < ItemCount; i++)
                {
                    printf("%s\t\t$%.2f\n", ShopingChart[i].name, ShopingChart[i].price);
                }
            }
            break;
        case 3: // Calculate the total Cost
            printf("Total Cost: $%.2f\n", TotalCost);
            break;
        case 4:
            printf("Thank you for using Our Online Shop \n");
            printf("See you Soon Again\n");
            break;  
        default:
            printf("Invalid Choice please enter a Valid Option");
        }

    } while (Choice != 4);

    return 0;
    
}
