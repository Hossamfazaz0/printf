#include <unistd.h>
void aff_a(char *s)
{
    while(*s)
    {
        if(*s == 'a'){
        write(1,"a",2);
        }
        s++;
    }
    write(1,"\n",1);
}
int main() {
    
   aff_a("abcd");
}