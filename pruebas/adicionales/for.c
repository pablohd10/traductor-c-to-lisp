main(){
    for(int a = 0; a < 10; a = a + 1){
        puts("FOR1");
        printf("%d", a);
        for(b = 0; b < 10; b = b + 1){
            puts("FOR2");
            printf("%d", b);
            for(c = 0; c < 10; c = c + 1){
                puts("FOR3");
                printf("%d", c);
            }
        }
    }
}