#include <conio.h>
#include <stdio.h>
#include <math.h>
int main()
{
    printf("<< ** Created by- Shlok Pandey ** B_HASH- s#0000 ** >> \n\n");
    float a, b, c;
    printf("Enter coefficients: ");
    scanf("%f %f %f",&a, &b, &c);
    float determinant = b*b-4*a*c;
    if (determinant > 0)
    {
        // sqrt() function returns square root
        float root1 = (-b+sqrt(determinant))/(2*a);
        float root2 = (-b-sqrt(determinant))/(2*a);
        printf("root1 = %.2lf and root2 = %.2lf",root1,root2);
        if(root1>root2)
            printf("\nSince the roots are real and unequal. Hence %.2lf is the largest root.",root1);
        else
            printf("\nSince the roots are real and unequal. Hence %.2lf is the largest root.",root2);
    }
    else if (determinant == 0)
    {
        float root1,root2;
        root1 = root2 = -b/(2*a);
        printf("root1 = root2 = %.2lf;", root1);
    }
    else
    {
        float realPart = -b/(2*a);
        float imaginaryPart = sqrt(-determinant)/(2*a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart,
        imaginaryPart, realPart, imaginaryPart);
    }
    getch();
    return 0;
}
