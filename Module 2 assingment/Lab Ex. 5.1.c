#include <stdio.h>
#include <conio.h>
 int main ()
 
 {
     int number ;
     printf ("Enter your number ");
     scanf("%d", &number);
     
     if (number %2 == 0 ) 
     {
         printf ("The number is EVEN");
     }
     else 
     {
         printf("The number is Odd");
         
     }
     
     int month ;
     
     printf ("\n press 1 for January");
     printf ("\n press 2 for February");
     printf ("\n press 3 for March");
     printf ("\n press 4 for April");
     printf ("\n press 5 for may");
     printf ("\n press 6 for JUNE");
     printf ("\n press 7 for july");
     printf ("\n press 8 for August");
     printf ("\n press 9 for September");
     printf ("\n press 10 for October");
     printf ("\n press 11 for November");
     printf ("\n press 12 for December");
     printf ("\n Enter your month number");
     scanf ("\n %d", &month);
     
      switch(month){
      case 1: 
      printf ("Your month is January");
      break ;
      
      case 2: 
      printf ("Your month is February ");
      break ;
      
      case 3: 
      printf ("Your month is  March ");
      break ;
      
      case 4: 
      printf ("Your month is April");
      break ;
      
      case 5: 
      printf ("Your month is may");
      break ;
      
      case 6: 
      printf ("Your month is  June");
      break ;
      
      case 7: 
      printf ("Your month is July");
      break ;
      
      case 8: 
      printf ("Your month is August");
      break ;
      
      case 9: 
      printf ("Your month is September");
      break ;
      
      case 10: 
      printf ("Your month is October");
      break ;
      
      case 11: 
      printf ("Your month is November");
      break ;
      
      case 12: 
      printf ("Your month is December");
      break ;
      
     
      
      default: printf ("Month is not valid");
      }
     return 0 ;
     
 }
 