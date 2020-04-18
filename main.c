#include <stdio.h>

int main(void) {
  long *x,*y,*f;
  long fi;
  fi =6;
  
  *x= fi;//x is pointing to the value of fi (x->fi)
  y= &fi;//y is the adress of fi.& is known as addressOf

  /*
    fi(variable)
  _________
  | value | ======>6 <========== |x|
  ---------
  |Address| =======> 0x7ffe701b5438 <========== |y|
  ---------- 
 
 * operator needs an address.if it has one it shows the value of that address



 * =========>[address|value] >> value
  
  */

 printf("2. %ld\n",fi);
 printf("1.1 %p\n",&fi);
     printf("1. %ld\n",*(&fi));
     
        
           printf("3. %ld\n",*x);
           printf("4.1 %p\n",&(*x));
           printf("4.2  %p\n",x);
           printf("5.1 %ld\n",*y);
           printf("5.2 %p\n",y);
           printf("5.3 %p\n",&y);
  return 0;
}
