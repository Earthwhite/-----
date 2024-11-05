#include <stdio.h>
#include <ctype.h>
#include "calculate.h"

int main(int argc, char *argv[]) {
    char loop = 'Y';  // Initialize loop to 'Y' to start the loop
    int select, menu, prize = 0;
    
    printf("Select a menu from the number in front.\n");
    printf(" \n");

    while (loop != 'N') {
    	printf("1 : tea\n");
    	printf("2 : Coffee\n");
    	printf("3 : children's menu\n");
    	printf("4 : Milk\n");
    	printf("5 : healthy options\n");
    	printf("6 : Pepsi\n");
    	printf(" \n");
        printf("Enter the type of menu : ");
        scanf(" %d", &menu);
        printf(" \n");

        menu = toupper(menu);
        switch (menu) {
            case 1:
            	printf(" \n");
                printf("You have to selected your Tea.\n");
                printf(" \n");
                printf("1 : Thai milk tea\n");
                printf("2 : lemon tea\n");
                printf("3 : Black tea\n");
                printf("4 : Matcha Latte\n");
                printf("5 : Japanese green tea\n");
                printf("6 : Japanese Green Tea Lemon\n");
                printf("7 : oconut Matcha Latte\n");
                printf("8 : Japanese Green Tea Coconut Fragrance\n");
                printf("9 : Coconut Thai Tea New Zealand Milk\n");
                printf("10: Coconut Iced Black Tea\n");
                printf(" \n");
                printf("Select your tea : ");
				scanf(" %d", &select);  
				printf(" \n");

                switch (select) {
                    case 1:
                        printf("You have selected Thai milk tea  prize : 40.\n");
						prize += 40;  
                        break;
                    case 2:
                    	printf("You have selected lemon tea prize : 30.\n");
						prize += 30;  
                        break;
                    case 3:
                    	printf("You have selected Black tea prize : 25.\n");
						prize += 25;  
                        break;
                    case 4:
                    	printf("You have selected Matcha Latte prize : 45.\n");
						prize += 45;  
                        break;
                    case 5:
                    	printf("You have selected Japanese green tea prize : 25.\n");
						prize += 25;  
                        break;
                    case 6:
                    	printf("You have selected Japanese Green Tea Lemon prize : 30.\n");
						prize += 30;  
                        break;
                    case 7:
                    	printf("You have selected Coconut Matcha Latte prize : 45.\n");
						prize += 45;  
                        break;
                    case 8:
                    	printf("You have selected Japanese Green Tea Coconut Fragrance prize : 35.\n");
						prize += 35;  
                        break;
                    case 9:
                    	printf("You have selected Coconut Thai Tea New Zealand Milk prize : 45.\n");
						prize += 45;  
                        break;
                    case 10:
                    	printf("You have selected Coconut Coconut Iced Black Tea prize : 35.\n");
						prize += 35;  
                        break;
                    default:
                        printf("Invalid Tea selection.\n");
                        break;
                }
                break;
            case 2:
            	printf(" \n");
                printf("You have to selected your Coffee.\n");
                printf(" \n");
                printf("1 : Espresso\n");
                printf("2 : Double Espresso\n");
                printf("3 : black coffee\n");
                printf("4 : Sodacano\n");
                printf("5 : Thai style ice cold\n");
                printf("6 : Latte\n");
                printf("7 : cappuccino\n");
                printf("8 : Mocha\n");
                printf("9 : Caramel latte\n");
                printf("10 : Matcha coffee latte\n");
                printf("11 : Coffee thai milk tea\n");
                printf("12 : Lychee kano\n");
                printf("13 : Yuzukano\n");
                printf("14 : Coconut Black Coffee\n");
                printf(" \n");
                printf("Select your coffee : ");
                scanf("%d",&select);
                
                switch(select) {
                	case 1:
                		printf(" \n");
                		printf("You have selected Espresso pritze : 25\n");
                		prize += 25;
                		break;
                	case 2:
                		printf(" \n");
                		printf("You have selected double Espresso prize : 35\n");
                		prize += 35;
                		break;
                	case 3:
                		printf(" \n");
                		printf("You have selected black coffee prize : 35\n");
                		prize += 35;
                		break;
                	case 4:
                		printf(" \n");
                		printf("You have selected Sodacano prize : 40\n");
                		prize += 40;
                		break;
                	case 5:
                		printf(" \n");
                		printf("You have selected Thai style ice cold prize : 45\n");
                		prize += 45;
                		break;
                	case 6:
                		printf(" \n");
                		printf("You have selected latte prize : 40\n");
                		prize += 40;
                		break;
                	case 7:
                		printf(" \n");
                		printf("You have selected cappuccino prize : 40\n");
                		prize += 40;
                		break;
                	case 8:
                		printf(" \n");
                		printf("You have selected mocha prize : 50\n");
                		prize += 50;
                		break;
                	case 9:
                		printf(" \n");
                		printf("You have selected caramel latte prize : 45\n");
                		prize += 45;
                		break;
                	case 10:
                		printf(" \n");
                		printf("You have selected Matcha coffee latte prize : 50\n");
                		prize += 50;
                		break;
                	case 11:
                		printf(" \n");
                		printf("You have selected coffee thai milk tea prize : 45\n");
                		prize += 45;
                		break;
                	case 12:
                		printf(" \n");
                		printf("You have selected lychee cano prize : 40");
                		prize += 40;
                		break;
                	case 13:
                		printf(" \n");
                		printf("You have selected Yuzukano prize : 35\n");
                		prize += 35;
                		break;
                	case 14:
                		printf(" \n");
                		printf("You have selected coconut black coffee prize : 40\n");
                		prize += 40;
                		break;
                	default:
                		printf(" \n");
                		printf("Invalid Coffee selection.\n");
                		break;
				}
				break;
            case 3:
            	printf(" \n");
                printf("You have to selected your children's menu.\n");
                printf(" \n");
                printf("1 : Milk\n");
                printf("2 : Caramel milk\n");
                printf("3 : Pink milk\n");
                printf("4 : Cocoa\n");
                printf("5 : Strawberry Cocoa Smoothie\n");
                printf("6 : Strawberrs Soda\n");
                printf("7 : Red Tide Soda\n");
                printf("8 : Yuzu Soda\n");
                printf("9 : Oreo Volcano Shake\n");
                printf(" \n");
                printf("Select your children's menu : ");
                scanf("%d",&select);
                
                switch(select) {
                	case 1:
                		printf(" \n");
                		printf("You have selected milk prize : 30\n");
                		prize += 30;
                		break;
                	case 2:
                		printf(" \n");
                		printf("You have selected Caramel milk prize : 40\n");
                		prize += 40;
                		break;
                	case 3:
                		printf(" \n");
                		printf("You have selected Pink milk prize : 35\n");
                		prize += 35;
                		break;
                	case 4:
                		printf(" \n");
                		printf("You have selected Cocoa prize : 40\n");
                		prize += 40;
                		break;
                	case 5:
                		printf(" \n");
                		printf("You have selected Strawberry Cocoa Smoothie prize : 50\n");
                		prize += 50;
                		break;
                	case 6:
                		printf(" \n");
                		printf("You have selected Strawberrs Soda prize : 30\n");
                		prize += 30;
                		break;
                	case 7:
                		printf(" \n");
                		printf("You have selected Red Tide Sode prize : 20\n");
                		prize += 20;
                		break;
                	case 8:
                		printf(" \n");
                		printf("You have selected Yuzu Sode prize : 30\n");
                		prize += 30;
                		break;
                	case 9:
                		printf(" \n");
                		printf("You have selected Oreo Volcano Shake prize : 55\n");
                		prize += 55;
                		break;
                	default:
                		printf(" \n");
                		printf("Invalid children's menu selection.\n");
                		break;
				}
                break;
            case 4:
            	printf(" \n");
                printf("You have to selected your milk.\n");
                printf(" \n");
                printf("1 : Caramel Cocoa\n");
                printf("2 : Super Oreo Volcano Shake\n");
                printf("3 : Strawberry milk shake\n");
                printf("4 : Cocoa Yuzu\n");
                printf("5 : New Zealand Coconut Milk Smoothie\n");
                printf("6 : New Zealand Cocoa Coconut Milk Smoothie\n");
                printf(" \n");
                printf("select your milk : ");
                scanf("%d",&select);
                
                switch(select) {
                	case 1:
                		printf(" \n");
                		printf("You have selected Caramel Cocoa prize : 45\n");
                		prize += 45;
                		break;
                	case 2:
                		printf(" \n");
                		printf("You have selected Super Oreo Volcano Shake prize : 60\n");
                		prize += 60;
                		break;
                	case 3:
                		printf(" \n");
                		printf("You have selected Strawberry milk shake prize : 45\n");
                		prize += 45;
                		break;
                	case 4:
                		printf(" \n");
                		printf("You have selected Cocoa Yuzu prize : 40\n");
                		prize += 40;
                		break;
                	case 5:
                		printf(" \n");
                		printf("You have selected New Zealand Coconut Milk Smoothie prize : 35\n");
                		prize += 35;
                		break;
                	case 6:
                		printf(" \n");
                		printf("You have selected New Zealand Cocoa Coconut Milk Smoothie prize : 40\n");
                		prize += 40;
                		break;
                	default:
                		printf(" \n");
                		printf("Invalid Milk selection.\n");
                		break;
				}
                break;
            case 5:
            	printf(" \n");
                printf("You have to selected your healthy options.\n");
                printf(" \n");
                printf("1 : Lemon juice\n");
                printf("2 : Lemon Soda\n");
                printf("3 : Lemon Black Tea\n");
                printf(" \n");
                printf("Select your healthy options : ");
                scanf("%d",&select);
                
                switch(select) {
                	case 1:
                		printf(" \n");
                		printf("You have selected Lemon juice prize : 25\n");
                		prize += 25;
                		break;
                	case 2:
                		printf(" \n");
                		printf("You have selected Lemon Soda prize : 25\n");
                		prize += 25;
                		break;
                	case 3:
                		printf(" \n");
                		printf("You have selected Lemon black tea prize : 30\n");
                		prize += 30;
                		break;
                	default:
                		printf(" \n");
                		printf("Invalid healthy options selection.\n");
                		break;
				}
                break;
            case 6:
            	printf(" \n");
                printf("You have selected Pepsi.\n");
                printf(" \n");
                printf("1 : Iced Pepsi\n");
                printf("2 : Pepsi Plum\n");
                printf("3 : Pepsi Yuzu\n");
                printf("4 : Coconut Pepsi Fragrance\n");
                printf(" \n");
                printf("Select your Pepsi : ");
                scanf("%d",&select);
                
                switch(select) {
                	case 1:
                		printf(" \n");
                		printf("You have selected Ices Pepsi prize : 15\n");
                		prize += 15;
                		break;
                	case 2:
                		printf(" \n");
                		printf("You have selected Pepsi Plum prize : 20\n");
                		prize += 20;
                		break;
                	case 3:
                		printf(" \n");
                		printf("You have selected Pepsi Yuzu prize : 20\n");
                		prize += 20;
                		break;
                	case 4:
                		printf(" \n");
                		printf("You have selected Coconut Pepsi Fragrance prize : 30\n");
                		prize += 30;
                		break;
                	default:
                		printf(" \n");
                		printf("Invalid Pepsi selection.\n");
                		break;
				}
                break;
            default:
                printf("Invalid menu selection.\n");
                break;
        }
        printf(" \n");
    	printf("Do you want to order more (Y/N)? : ");
    	scanf(" %c", &loop);
    	loop = toupper(loop);
    	printf(" \n");
    }

    printf("Total prize to pay: %d\n", prize);
    
    calculate(prize);

    return 0;
}
