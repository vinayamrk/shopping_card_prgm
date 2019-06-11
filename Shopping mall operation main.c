#include <stdio.h>
#include <stdlib.h>

void estore_display(int estore_item[][3]);
void shopping_operation(void);
void ADD_ITEM (int cart_item[][3],int estore_item[][3],int code,int n );
int main()
{
    int estore_item[2][3] ={{0,10,1000},
                        {1,20,600}
                      };
    int card_item[2][3]={{0,0,0},{1,0,0}};
    estore_display( estore_item);
    do
    {
        int choice,code,n;
        estore_display(estore_item);
        shopping_operation();
        printf("Enter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter item_code 0 or 1 and quantity:");
                    scanf("%d%d",&code,&n);
                    if(code==0 || code==1)
                    {


                    if(estore_item[code][1]>=n)
                    {
                         ADD_ITEM ( card_item, estore_item, code, n );

                    }
                    else
                        printf("Quantity over flow");
                    break;
                    }

                    else
                    {
                        printf("Invalid item");
                    }

    }while(choice!=6);
}

void estore_display( int estore_item[][3])
{
    printf("********************\n");
    printf("Menu items in the estore\n");
    printf(" item 0 and quantity %d and unit price %d\n",estore_item[0][1],estore_item[0][2]);
    printf(" item 1 and quantity %d and unit price %d\n",estore_item[1][1],estore_item[1][2]);
    printf("********************\n");

}
void shopping_operation(void)
{
    printf("**********Shopping Operation***********");
    printf("1.  ADD an item to shopping cart\n");
    printf("2.  DELETE an item from shopping cart\n");
    printf("3.  BILL the item from shopping cart\n");
    printf("4.  DISPLAY an item from shopping cart\n");
    printf("5.  EXIT from shopping operation");
    printf("****************\n");

}
void ADD_ITEM (int cart_item[][3],int estore_item[][3],int code,int n )
{
    estore_item[code][1]-=n;
    card_item[code][1]+=n;

}
