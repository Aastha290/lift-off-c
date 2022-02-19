#include<stdio.h>
int main()
{
    char name[20],branch[80],hobbies[40];
    int regd_number;
    
    printf("Enter your name:");
    scanf("%s", &name);

    printf("Enter your regd no.:");
    scanf("%d", &regd_number);

    printf("Enter your branch:");
    scanf("%s", &branch);

    printf("Enter your hobbies");
    scanf("%s", &hobbies);
    
    printf("\n");
     
    printf("name:%s\n", name);
    printf("regd_no:%d\n", regd_number);
    printf("branch:%s\n", branch);
    printf("hobbies:%s\n", hobbies);

    return 0;
}
