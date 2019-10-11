# include <stdio.h>

char  Dec2Hex ( int no) {
    int hex = 0 ;
    si (! no)
    volver ;
    más {
        hex = no% 16 ;
        no = no / 16 ;
        Dec2Hex (no);
    }
    interruptor (hex) {
        caso  10 :
        printf ( " A " );
        romper ,
                caso  11 :
        printf ( " B " );
        romper ,
                caso  12 :
        printf ( " C " );
        romper ,
                caso  13 :
        printf ( " D " );
        romper ,
                caso  14 :
        printf ( " E " );
        romper ,
                caso  15 :
        printf ( " F " );
        romper ,
                por defecto :
        printf ( " % d " , hexadecimal);
    }
}

vacío  principal ()
{
    int k = 0 ;
    printf ( " Ingrese no: " );
    scanf ( " % d " , & k);
    Dec2Hex (k);
}