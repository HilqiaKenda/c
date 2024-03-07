#include <stdio.h>
#include <string.h>
// max number opf items on the chart
#define max_items 10 

//structuire to present items
struct Items
{
    char name[30];
    float price;
};

int main()
{
    // arrays to store items
    struct Items ShopingChart[max_items];

        //Number of items in a chart
        int ItemCount = 0; 
        int Choice;
        float TotalCost = 0.0;
    printf("Welcome to Our Online Shop!\n");

    do 
    { //POp up the shop's menu options
        printf("\n Menu: \n");
        printf("1. add an item to the chart\n");
        printf("2. View the Chart\n");
        printf("3. Calculate the total cost\n");
        printf("4. Exit\n");
        scanf("%d", &Choice);

        //To see different choices and its data
        switch (Choice) 
        {
            //add items into the chart
            case 1: 
                if (ItemCount < max_items)
                {
                    printf("Enter item name: ");
                    scanf("%s", &ShopingChart[ItemCount].name);
                    printf("Enter item price: ");
                    scanf("%f", &ShopingChart[ItemCount].price);
                    TotalCost += ShopingChart[ItemCount].price;
                    ItemCount ++;
                    printf("item added to chart \n");
                }

                //while the the chart is full
                else 
                {
                    printf("Chart is full. items cannot be added\n");
                }
                break;

                //view the chart
            case 2: 
                printf("_______Shoping Chart________ \n");
                
                if (ItemCount == 0) 
                {
                    printf("Chart is empty :( \n");
                    printf("Please add items to see your Chart!:) and come back :) \n");
                }
                else 
                {
                    // View items in the chart and it prices
                    printf("items\t\tprice\n");
                    for (int i = 0; i < ItemCount; i++)
                    {
                        printf("%s\t\t$%.2f\n", ShopingChart[i].name, ShopingChart[i].price);
                    }
                }
                break;

                // Calculate the total Cost
            case 3: 
                printf("Total Cost: $%.2f\n", TotalCost);
                break;

                //Quit the Apps
            case 4: //Message to display while leaving the App
                printf("Thank you for using Our Online Shop \n");
                printf("See you Soon Again\n");
                break;
            
                //When choice is incorrect  
            default:
                printf("Invalid Choice please enter a Valid Option");
        }

    } while (Choice != 4);

    return 0;
    
}
