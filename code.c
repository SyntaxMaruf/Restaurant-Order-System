#include <stdio.h>
#include <string.h> 

int main() {
    int choice, qty;
    int burgerQty = 0, pizzaQty = 0, pastaQty = 0, drinkQty = 0;
    int confirm;

    float burgerPrice = 149.99;
    float pizzaPrice = 349.99;
    float pastaPrice = 199.99;
    float drinkPrice = 39.99;

    float subTotal = 0.0, discount = 0.0, discountedTotal = 0.0, vat = 0.0, grandTotal = 0.0;
    char promoCode[20]; 

    printf("=========================================\n");
    printf("        RESTAURANT ORDER SYSTEM          \n");
    printf("=========================================\n");
    printf("Menu & Prices:\n");
    printf("1. Burger      : 149.99 BDT\n");
    printf("2. Pizza       : 349.99 BDT\n");
    printf("3. Pasta       : 199.99 BDT\n");
    printf("4. Cold Drinks : 39.99 BDT\n");
    printf("5. Nothing Else, Please show My Bill !!\n");
    printf("=========================================\n\n");

    while (1) {
        printf("Enter item number : ");
        scanf("%d", &choice);

        if (choice == 5) {
            break;   
        }

        if (choice < 1 || choice > 4) {
            printf("Invalid item! Please choose 1 to 5.\n\n");
            continue;  
        }

        printf("Enter quantity: ");
        scanf("%d", &qty);

        if (choice == 1) {
            burgerQty += qty;
        } else if (choice == 2) {
            pizzaQty += qty;
        } else if (choice == 3) {
            pastaQty += qty;
        } else if (choice == 4) {
            drinkQty += qty;
        }

        printf("Added!\n");
    }

    if (burgerQty == 0 && pizzaQty == 0 && pastaQty == 0 && drinkQty == 0) {
        printf("\n=========================================\n");
        printf("        Thank You For Coming!            \n");
        printf("=========================================\n");
    } 
    else {
        printf("\n-----------------------------------------\n");
        printf("Press 1 to Confirm Order & Generate Bill: ");
        scanf("%d", &confirm);

        if (confirm == 1) {

            subTotal = (burgerQty * burgerPrice) + (pizzaQty * pizzaPrice) + (pastaQty * pastaPrice) + (drinkQty * drinkPrice);

            if (subTotal >= 100.0) {
                printf("Enter Promo Code (or type 'none'): ");
                scanf("%s", promoCode);

                if (strcmp(promoCode, "maruf50") == 0) {
                    discount = 50.0;
                } else {
                    discount = 0.0;
                }
            } else {
                discount = 0.0; 
            }

            discountedTotal = subTotal - discount;
            if (discountedTotal < 0) {
                discountedTotal = 0;  
            }

            vat = discountedTotal * 0.05;
            grandTotal = discountedTotal + vat;

            printf("\n=========================================\n");
            printf("            FINAL CASH MEMO              \n");
            printf("=========================================\n");
            printf("Item         Qty   Unit Price   Total   \n");
            printf("-----------------------------------------\n");

            if (burgerQty > 0) {
                printf("Burger       %-5d %-12.2f %.2f BDT\n", burgerQty, burgerPrice, burgerQty * burgerPrice);
            }
            if (pizzaQty > 0) {
                printf("Pizza        %-5d %-12.2f %.2f BDT\n", pizzaQty, pizzaPrice, pizzaQty * pizzaPrice);
            }
            if (pastaQty > 0) {
                printf("Pasta        %-5d %-12.2f %.2f BDT\n", pastaQty, pastaPrice, pastaQty * pastaPrice);
            }
            if (drinkQty > 0) {
                printf("Cold Drinks  %-5d %-12.2f %.2f BDT\n", drinkQty, drinkPrice, drinkQty * drinkPrice);
            }

            printf("-----------------------------------------\n");
            printf("Sub Total          : %.2f BDT\n", subTotal);
            if (discount > 0) {
                printf("Special Discount   : %.2f BDT\n", discount);
                printf("-----------------------------------------\n");
                printf("Discounted Subtotal: %.2f BDT\n", discountedTotal);
            }
            printf("VAT (5%%)           : %.2f BDT\n", vat);
            printf("-----------------------------------------\n");
            printf("Grand Total        : %.2f BDT\n", grandTotal);
            printf("=========================================\n");
            printf("        Thank You For Coming!            \n");
            printf("=========================================\n");

        } else {
            printf("\nOrder Cancelled!\n");
        }
    }

    return 0;
}