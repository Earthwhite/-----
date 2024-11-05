#include <stdio.h>
#include <ctype.h>
int calculate(int price) {
    int dividend=0, divisor,quotient,remainder;
    int sum = 0,cost=0, billT=0, billfh=0, billh=0, billft=0, billtt=0, billt=0, billf=0, billo=0;
	int type;
    
    
    cost = price;
    do {
        printf("Insert your money:\n");
        printf("\nType 1000 for 1000 bill\n");
        printf("Type 500 for 500 bill\n");
        printf("Type 100 for 100 bill\n");
        printf("Type 50 for 50 bill\n");
        printf("Type 20 for 20 bill\n");
        printf("Type 10 for 10 coin\n");
        printf("Type 5 for 5 coin\n");
        printf("Type 1 for 1 coin\n");
        printf("\nEnter your money : ");
        scanf("%d", &type);

        switch (type) {
            case 1000:
                printf("Enter 1000 bill: ");
                scanf("%d", &billT);
                break;
            case 500:
                printf("Enter 500 bill: ");
                scanf("%d", &billfh);
                break;
            case 100:
                printf("Enter 100 bill: ");
                scanf("%d", &billh);
                break;
            case 50:
                printf("Enter 50 bill: ");
                scanf("%d", &billft);
                break;
            case 20:
                printf("Enter 20 bill: ");
                scanf("%d", &billtt);
                break;
            case 10:
                printf("Enter 10 coin: ");
                scanf("%d", &billt);
                break;
            case 5:
                printf("Enter 5 coin: ");
                scanf("%d", &billf);
                break;
            case 1:
                printf("Enter 1 coin: ");
                scanf("%d", &billo);
                break;
            default:
                printf("Invalid option!\n");
                break;
        }
        sum = (billT * 1000) + (billfh * 500) + (billh * 100) + (billft * 50) + 
              (billtt * 20) + (billt * 10) + (billf * 5) + (billo * 1);
        
 		
 		printf("Current total entered: %d\n", sum);
 			if(cost <= sum){
			printf("Money Paid\n");
			}
 			else{
 				printf("Remaining amount to pay: %d\n", cost);
			 }
    } while (cost > sum);
	printf("Thank you for your payment!\n");
	remainder = sum-cost;
	Cashout(remainder);}
	
int Cashout(int remainder){
	int x = remainder;
	int thousand=0;
	int fiveHundred=0;
	int hundred=0;
	int fifty=0;
	int twenty=0;
	int ten=0;
	int five=0;
	int one=0;
	while(remainder > 0){
		if(remainder >= 1000){
			remainder=remainder-1000;
			thousand++;		
		}
		if(remainder >= 500 && remainder < 1000){
			remainder=remainder-500;
			fiveHundred++;
		}
		if(remainder >= 100 && remainder < 500){
			remainder=remainder-100;
			hundred++;
		}
		if(remainder >= 50 && remainder < 100){
			remainder=remainder-50;
			fifty++;
		}
		if(remainder >=20 && remainder < 50){
			remainder=remainder-20;
			twenty++;	
		}
		if(remainder >= 10 && remainder < 20){
			remainder=remainder-10;
			ten++;
		}
		if(remainder >= 5 && remainder < 10){
		remainder=remainder-5;
		five++;
		}	
		if(remainder >= 1 && remainder < 5){
		remainder=remainder-1;
		one++;
		}
	}
	printf("\nChange:\n");
	printf("\n1000 THB:%d notes\n",thousand);
	printf("500 THB:%d notes\n",fiveHundred);
	printf("100 THB:%d notes\n",hundred);
	printf("50 THB:%d notes\n",fifty);
	printf("20 THB:%d notes\n",twenty);
	printf("10 THB:%d coins\n",ten);
	printf("5 THB:%d coins\n",five);
	printf("1 THB: %d coins \n",one);
	printf("Total: %d THB",x);
	}
int main(int argc, char *argv[]) {
    char loop = 'Y';
    int select, menu, price = 0;
    
    printf("Select a menu from the number in front.\n");
    printf(" \n");

    while (loop != 'N') {
    	printf("1 : Tea\n");
    	printf("2 : Coffee\n");
    	printf("3 : Children's Menu\n");
    	printf("4 : Milk\n");
    	printf("5 : Healthy Options\n");
    	printf("6 : Pepsi\n");
    	printf(" \n");
        printf("Enter the type of menu: ");
        scanf(" %d", &menu);
        printf(" \n");
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
                        printf("You have selected Thai milk tea  price : 40.\n");
						price += 40;  
                        break;
                    case 2:
                    	printf("You have selected lemon tea price : 30.\n");
						price += 30;  
                        break;
                    case 3:
                    	printf("You have selected Black tea price : 25.\n");
						price += 25;  
                        break;
                    case 4:
                    	printf("You have selected Matcha Latte price : 45.\n");
						price += 45;  
                        break;
                    case 5:
                    	printf("You have selected Japanese green tea price : 25.\n");
						price += 25;  
                        break;
                    case 6:
                    	printf("You have selected Japanese Green Tea Lemon price : 30.\n");
						price += 30;  
                        break;
                    case 7:
                    	printf("You have selected Coconut Matcha Latte price : 45.\n");
						price += 45;  
                        break;
                    case 8:
                    	printf("You have selected Japanese Green Tea Coconut Fragrance price : 35.\n");
						price += 35;  
                        break;
                    case 9:
                    	printf("You have selected Coconut Thai Tea New Zealand Milk price : 45.\n");
						price += 45;  
                        break;
                    case 10:
                    	printf("You have selected Coconut Coconut Iced Black Tea price : 35.\n");
						price += 35;  
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
                		printf("You have selected Espresso price : 25\n");
                		price += 25;
                		break;
                	case 2:
                		printf(" \n");
                		printf("You have selected double Espresso price : 35\n");
                		price += 35;
                		break;
                	case 3:
                		printf(" \n");
                		printf("You have selected black coffee price : 35\n");
                		price += 35;
                		break;
                	case 4:
                		printf(" \n");
                		printf("You have selected Sodacano price : 40\n");
                		price += 40;
                		break;
                	case 5:
                		printf(" \n");
                		printf("You have selected Thai style ice cold price : 45\n");
                		price += 45;
                		break;
                	case 6:
                		printf(" \n");
                		printf("You have selected latte price : 40\n");
                		price += 40;
                		break;
                	case 7:
                		printf(" \n");
                		printf("You have selected cappuccino price : 40\n");
                		price += 40;
                		break;
                	case 8:
                		printf(" \n");
                		printf("You have selected mocha price : 50\n");
                		price += 50;
                		break;
                	case 9:
                		printf(" \n");
                		printf("You have selected caramel latte price : 45\n");
                		price += 45;
                		break;
                	case 10:
                		printf(" \n");
                		printf("You have selected Matcha coffee latte price : 50\n");
                		price += 50;
                		break;
                	case 11:
                		printf(" \n");
                		printf("You have selected coffee thai milk tea price : 45\n");
                		price += 45;
                		break;
                	case 12:
                		printf(" \n");
                		printf("You have selected lychee cano price : 40");
                		price += 40;
                		break;
                	case 13:
                		printf(" \n");
                		printf("You have selected Yuzukano price : 35\n");
                		price += 35;
                		break;
                	case 14:
                		printf(" \n");
                		printf("You have selected coconut black coffee price : 40\n");
                		price += 40;
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
                		printf("You have selected milk price : 30\n");
                		price += 30;
                		break;
                	case 2:
                		printf(" \n");
                		printf("You have selected Caramel milk price : 40\n");
                		price += 40;
                		break;
                	case 3:
                		printf(" \n");
                		printf("You have selected Pink milk price : 35\n");
                		price += 35;
                		break;
                	case 4:
                		printf(" \n");
                		printf("You have selected Cocoa price : 40\n");
                		price += 40;
                		break;
                	case 5:
                		printf(" \n");
                		printf("You have selected Strawberry Cocoa Smoothie price : 50\n");
                		price += 50;
                		break;
                	case 6:
                		printf(" \n");
                		printf("You have selected Strawberrs Soda price : 30\n");
                		price += 30;
                		break;
                	case 7:
                		printf(" \n");
                		printf("You have selected Red Tide Sode price : 20\n");
                		price += 20;
                		break;
                	case 8:
                		printf(" \n");
                		printf("You have selected Yuzu Sode price : 30\n");
                		price += 30;
                		break;
                	case 9:
                		printf(" \n");
                		printf("You have selected Oreo Volcano Shake price : 55\n");
                		price += 55;
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
                		printf("You have selected Caramel Cocoa price : 45\n");
                		price += 45;
                		break;
                	case 2:
                		printf(" \n");
                		printf("You have selected Super Oreo Volcano Shake price : 60\n");
                		price += 60;
                		break;
                	case 3:
                		printf(" \n");
                		printf("You have selected Strawberry milk shake price : 45\n");
                		price += 45;
                		break;
                	case 4:
                		printf(" \n");
                		printf("You have selected Cocoa Yuzu price : 40\n");
                		price += 40;
                		break;
                	case 5:
                		printf(" \n");
                		printf("You have selected New Zealand Coconut Milk Smoothie price : 35\n");
                		price += 35;
                		break;
                	case 6:
                		printf(" \n");
                		printf("You have selected New Zealand Cocoa Coconut Milk Smoothie price : 40\n");
                		price += 40;
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
                		printf("You have selected Lemon juice price : 25\n");
                		price += 25;
                		break;
                	case 2:
                		printf(" \n");
                		printf("You have selected Lemon Soda price : 25\n");
                		price += 25;
                		break;
                	case 3:
                		printf(" \n");
                		printf("You have selected Lemon black tea price : 30\n");
                		price += 30;
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
                		printf("You have selected Ices Pepsi price : 15\n");
                		price += 15;
                		break;
                	case 2:
                		printf(" \n");
                		printf("You have selected Pepsi Plum price : 20\n");
                		price += 20;
                		break;
                	case 3:
                		printf(" \n");
                		printf("You have selected Pepsi Yuzu price : 20\n");
                		price += 20;
                		break;
                	case 4:
                		printf(" \n");
                		printf("You have selected Coconut Pepsi Fragrance price : 30\n");
                		price += 30;
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

    printf("Total price to pay: %d\n", price);
    printf(" \n");
    calculate(price);

    
}

