#include<stdio.h>
int vowel(char a){
  char c[] = "aeiouAEIOU";
  for(int i = 0 ; c[i] ; i ++)
    {
    if(c[i] == a )
      {
        return 1;
      }
    else
    {
      return 0;
    }
  }
}
void main()
{
  char a;
  printf("Enter a character :\n");
  scanf("%d",&a);
  int v = vowel(a);
  if(v == 1)
  {
    printf("The character is a vowel");
  }
  else
  {
   printf("The character is not a vowel"); 
  }
}