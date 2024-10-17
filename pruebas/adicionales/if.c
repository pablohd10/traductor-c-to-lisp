prueba_ifs(){
    puts("hola");
    if (1){
        puts("if");
        if (1||0<24+2){
            puts("if anidado");
            puts("if anidado con varias sentencias");
            if (1){
                puts("if anidado 2");
            }
            else{
                puts("else anidado 2");
            }
        }
    }
    if (1){
        puts("if2");
        puts("if2 con varias sentencias");
        puts("if2 con varias sentencias");
    }
    else{
        puts("else");
        puts("else con varias sentencias");
        puts("else con varias sentencias");
        puts("else con varias sentencias");
    }
    if (1+1){
        puts("if3");
    }
    else{
        puts("else3");
        puts("else3 con varias sentencias");
    }
    if (1&&1){
        puts("if4");
        puts("if4 con varias sentencias");
    }
    else{
        puts("else4");
    }
}
main(){
    prueba_ifs();
    return 0;
}