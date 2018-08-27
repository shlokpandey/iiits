int main(){
    printf("<< ** Created by- Shlok Pandey ** B_HASH- s#0002 ** >> \n");
    printf("Hey! Lets play 65 matchstick game. The user has the choice to select upto 7 matchstick. The one who picks the last matchstick loses the game.\n");
    printf("Okay so lets begin.");
    int a,c;
    //made by Shlok &copy;
    for(int i=65; i>0; )
    {
        printf("Enter : \n >>");
        scanf("%d",&a);
        if(a>0 && a<8)
        {

            if((i-a)<=0)
            {
                printf("You lost");
                break;
            }
            c=8-a;
            printf("Comp chose %d\n",c);
            i=i-(c+a);
            printf("%d matchsticks left \n",i);

        }
        else
            printf("Please enter number between 1 and 7 including 1 and 7.\n");
    }
    getch();
    return 0;
}
