#include<stdio.h>
#include <math.h>
int main()
{
  printf("HELLO WORLD");
  
  int liczba1,liczba2,suma,a,b,sweet,x,wynik;
  char znak;
  
  printf("Podaj znak od 1 do 6 zrobimy cos z twoich liczb:  ",sweet);
  scanf("%i",&sweet);
  switch(sweet){
    case 1:
     	printf("Wybrales dodawanie, wprowadz 2 liczby \n");
       	scanf("%i",&a);
        scanf("%i",&b);
        x=a+b; 
        printf("Wynik: %d\n", x);
    break;
  
  case 2:
       	printf("Wybrales odejmowanie, wprowadz 2 liczby \n");
       	scanf("%i",&a);
        scanf("%i",&b);
        x=a-b; 
        printf("Wynik: %d\n", x);
    break;
  
     case 3:
         printf("Wybrano mnożenie, podaj dwie liczby:   ",liczba1,liczba2);
         scanf("%i",&liczba1);
         scanf("%i",&liczba2);
         wynik=liczba1*liczba2;
         printf("wynik=%d",wynik);
         break;      
     case 4:
         printf("Wybrano dzielenie, podaj dwie liczby:    ",liczba1,liczba2);
         scanf("%i",&liczba1);
         scanf("%i",&liczba2);
         wynik=liczba1/liczba2;
         printf("Wynik = %d",wynik);
         break;    
case 5:
  printf("Wybrales potegowanie, wprowadz dwie liczby\n");
  scanf("%i %i",&liczba1, &liczba2);
	suma =pow(liczba1,liczba2);
      printf("Wynik: %i\n", suma);
  break;
  case 6:
  printf("Wybrales pierwiastkowanie, wprowadz dwie liczby\n");
 scanf("%i %i",&liczba1, &liczba2);
 liczba2=pow(liczba2,-1);
       suma = pow(liczba1,liczba2);
       printf("Wynik: %i\n", suma);
 break;
  }

  return 0;
}
