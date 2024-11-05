#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    char menu, select, loop = 'Y';  // Initialize loop to 'Y' to start the loop
    int prize = 0;

    while (loop != 'N') {  // Loop until loop is 'N'
        printf("Enter the type of menu (C: coffee, T: tea, M: milk, K: children's menu, H: healthy options, P: Pepsi, F: Finish): ");
        scanf(" %c", &menu);

        menu = toupper(menu);  // Convert menu to uppercase

        switch (menu) {
            case 'C':
                printf("You have selected coffee.\n");
                printf("Select your coffee (T: Thai milk tea, L: lemon tea, B: Black tea, M: Matcha Latte, J: Japanese green tea, LE: Japanese Green Tea Lemon, C: Coconut Matcha Latte, JG: Japanese Green Tea, Coconut Fragrance, CT: Coconut Thai Tea New Zealand Milk, CL: Coconut Iced Black Tea): ");
                scanf(" %c", &select);
                select = toupper(select);  // Convert select to uppercase

                switch (select) {
                    case 'T':
                        printf("You have selected Thai milk tea.\n");
                        printf("Do you want to order more (Y/N)? ");
                        scanf(" %c", &loop);
                        loop = toupper(loop);  // Convert loop to uppercase
                        if (loop == 'Y') {
                            prize += 40;  // Increase prize by 40 (adjust as necessary)
                        }
                        break;
                    default:
                        printf("Invalid coffee selection.\n");
                        break;
                }
                break;
            case 'T':
                printf("You have selected tea.\n");
                break;
            case 'M':
                printf("You have selected milk.\n");
                break;
            case 'K':
                printf("You have selected children's menu.\n");
                break;
            case 'H':
                printf("You have selected healthy options.\n");
                break;
            case 'P':
                printf("You have selected Pepsi.\n");
                break;
            case 'F':
                loop = 'N';  // Set loop to 'N' to finish the loop
                break;
            default:
                printf("Invalid menu selection.\n");
                break;
        }
    }

    printf("Total prize to pay: %d\n", prize);

    return 0;
}
