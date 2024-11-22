#include <stdio.h>
#include <stdlib.h>

int g=1,tot=0;
void order();

void menu()
{
  printf("\n:::::MENU:::::\n");
  printf("1.SAMOSA @30\n");
  printf("2.DOSA   @20\n");
  printf("3.TEA    @10\n");
  printf("4.EXIT\n");
  printf("ENTER YOUR CHOICE:");
  order() ;
}

void billing(int price,int c)
{
    int plates=0;
    if(c==3)
        printf("ENTER THE NUMBER OF CUPS:");
    else
        printf("ENTER THE NUMBER OF PLATES:");
    scanf("%d",&plates);
    tot=tot+(price*plates);
}

void order()
{
    int ch=0,amt=0;
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        billing(30,1);
        break;
    case 2:
        billing(20,2);
        break;
    case 3:
        billing(10,3);
        break;
    case 0:
        g=0;
    printf("YOUR BILL AMOUNT:%d\n",tot);
    printf("ENTER YOU CASH AMOUNT\n");
    scanf("%d",&amt);
    amt=amt-tot;
    if(amt>0)
    printf("YOUR CASH:%d\n",amt);
    printf("\nTHANK YOU VISIT AGAIN!!\n");
    break;
    default:
    printf("WRONG SELECTION\n");
    menu();
    break;
    }
}

int main()
{
    printf("WELCOME TO HOTEL SHWETA\n");
    while(g)
    {
        menu();
    }
    return 0;
}
