#include <stdio.h>

int main() {
  double salesPersonD = 0;
  double salesPersonE = 0;
  double salesPersonF = 0;
  double grandTotal = 0;
  char initial;
  char highestSalesPerson = ' ';
  double highestTotal = 0;

 while (1) {
  printf("Enter salesperson's initial: ");
  scanf(" %c", &initial);
  initial = toupper(initial);

    if (initial == 'Z') {
    break;
}

  double saleAmount = 0;

  switch (initial) {
    case 'D':
       printf("Enter the total amount for Danielle: ");
       scanf("%lf", &saleAmount);
       salesPersonD += saleAmount;
       break;

    case 'E':
        printf("Enter the total amount for Edward: ");
        scanf("%lf", &saleAmount);
        salesPersonE += saleAmount;
        break;

    case 'F':
        printf("Enter the total amount for Francis: ");
        scanf("%lf", &saleAmount);
        salesPersonF += saleAmount;
        break;

    default:
        printf("Error, invalid salesperson selected, please try again\n");
        continue;
  }

    grandTotal += saleAmount;

    if (saleAmount > highestTotal) {
      highestTotal = saleAmount;
      highestSalesPerson = initial;
    }
 }

  printf("Grand Total: $%.0lf\n", grandTotal);
  printf("Highest Sale: %c\n", highestSalesPerson);

  return 0;
}