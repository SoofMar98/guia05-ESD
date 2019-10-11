#include<stdio.h>
#include<curses.h>
#include<stdlib.h>
#include<time.h>

char c;
int x,y,x0,y0;
int laberint[25][80];
char grafica[2000];
FILE* file;

main()
{
    x0=29;
    y0=5;
    srand(time(NULL));

    for (x=0;x<=79;x++)
        for (y=0;y<=25;y++)
        {
            laberint[y][x]=rand()%2;
        }
    laberint[x0][y0]=0;
    x=x0;
    y=y0;
    file=fopen("","w");

    fwrite(laberint,sizeof(int),25*79,file);
    fclose(file);
    while(true)
    {
        system("CLS");
        grafica[0]=0;
        for(y0=0;y0<25;y0++)
        {
            for(x0=0;x0<79;x0++)
            {
                if(x0==x&&y0==y)
                    sprintf(grafica,"%s%c",grafica, 2);
                else if(laberint[y0][x0]>0)
                    sprintf(grafica,"%s%c",grafica, 219);
                else
                    sprintf(grafica,"%s%c",grafica, ' ');

            }
            if(y0<24)
                sprintf(grafica,"%s%s",grafica,"\n");
        }
        puts(grafica);



        c=getch();
        switch(c)
        {
            case 'a':
                if(x>0)
                    if(laberint [y][x-1]==0)
                        x--;
                break;
            case 'd':
                if(x<79)
                    if(laberint [y][x+1]==0)
                        x++;
                break;
            case 'w':
                if(y>0)
                    if(laberint [y-1][x]==0)
                        y--;
                break;
            case 's':
                if(y<25)
                    if(laberint [y+1][x]==0)
                        y++;
                break;
            case 27:
                exit(0);
            default:
                system("CLS");
        }
    }
}

