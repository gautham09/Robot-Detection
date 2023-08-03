#include<stdio.h>
#include<time.h>
#include<stdLib.h>
int challenge()
{
  int r, k;
  srand(time(NULL));
  r = rand();
  k = r % 6;
  switch (k)
  {
    case 0: {
         int i;
         printf("\nWrite four hundred and forty five in number :");
         scanf("%d", &i);
         getchar();
         if(i != 445) {printf("\nWrong Input, Authentication Denied\n\n");return 0;}
         else return 1;
         break;}
    case 1: {
         char c;
         printf("R S T Q A C B W\n");
         printf("\namong the above alphabets which one is a vowel :");
         scanf("%c", &c);
         getchar();
         if (c != 'A') {printf("\nWrong input, Authentication denied\n\n");return 0;}
         else return 1;
         break;}
    case 2: {
         int i;
         printf(" 12, 3, 9, 20 \n among the above numbers which one is a prime number :");
         scanf("%d", &i);
         getchar();
         if (i != 3) {printf("\nWrong input, Authentication denied\n\n"); return 0;}
         else return 1;
         break;}
    case 3: {
         int i;
         printf("\nSum of the first 5 natural number = ");
         scanf("%d", &i);
         getchar();
         if (i != 15){printf("\nWrong input, Authentication denied\n\n"); return 0;}
         else return 1;
         break;}
    case 4: {
         int i;
         printf("3, 11, 29, 7, 5, 22, 19\n");
         printf("\namong the above numbers which one is not a prime number : ");
         scanf("%d", &i);
         getchar();
         if (i != 22) {printf("\nWrong input, Authentication denied\n\n"); return 0;}
         else return 1;
         break;}
    case 5: {
         int i;
         printf("8, 9, 4, 16\n");
         printf("\namong the above numbers which one is not a perfect square root : ");
         scanf("%d", &i);
         if (i != 8){printf("\n\nWrong input, Aunthentication denied\n\n"); return 0;}
         else return 1;
         break ;}

  }
}

int main()
{
  int i;
  printf("\nchallenge 1 :-\n");
  i = challenge();
  if (i == 0)return 0;
  printf("\nchallenge 2 :-\n");
  i = challenge();
  if (i == 0) return 0;
  printf("\nAUTHENTICATION APPROVED\n");
}
