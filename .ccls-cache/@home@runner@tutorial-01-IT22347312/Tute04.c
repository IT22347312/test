/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
  Skip to content
Search or jump to…
Pull requests
Issues
Codespaces
Marketplace
Explore
 
@IT22921512 
IT22921512
/
Tute-1
Public
Cannot fork because you own this repository and are not a member of any organizations.
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
Settings
Tute-1/Tute04.c
@IT22921512
IT22921512 tute
Latest commit 2f9e49b 1 minute ago
 History
 2 contributors
@github-classroom@IT22921512
43 lines (35 sloc)  858 Bytes

/*Exercise 4 - Functions
Implement the three functions minimum(), maximum() and multiply() below the main() function.
Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum(int no1, int no2);
int maximum(int no1, int no2);
int multiply(int no1, int no2);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

int minimum(int no1, int no2){
  if(no1 > no2){
    return no2;
  }else{
    return no1;
  }
}

int maximum(int no1, int no2){
  if(no1 > no2){
    return no1;
  }else{
    return no2;
  }
}

int multiply(int no1, int no2){
  return no1 * no2;
}

   return 0;
}
