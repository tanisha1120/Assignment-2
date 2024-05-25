
// GOPAL JEE SRIVATAVA
// 2303510100043
#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter the first side: ");
    scanf("%d",&a);
    printf("Enter the second side: ");
    scanf("%d",&b);
    printf("Enter the third side: ");
    scanf("%d",&c);
    if(a==b && a==c){
        printf("Equilateral");
    }
    else if(a==b || a==c || b==c){
        printf("Isosceles ");
    }
    else{
        printf("Scalane");
    }
    return 0;
    
}
