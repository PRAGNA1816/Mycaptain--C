#include<stdio.h>
int main()
{
    int food_item;
    scanf("%d",&food_item);
    switch(food_item)
    {
        case 1:printf("food item-Pizza :)\nprice-Rs239");
        break;
        case 2:printf("food item-Burger :)\nprice-Rs129");
        break;
        case 3:printf("food item-Pasta :)\nprice-Rs179");
        break;
        case 4:printf("food item-French Fries :)\nprice-Rs99");
        break; 
        case 5:printf("food item-Sandwich :)\nprice-Rs149");
        break;
        default:printf("the food item u chose is not in the menu \nsorry :(");
    }
    }

