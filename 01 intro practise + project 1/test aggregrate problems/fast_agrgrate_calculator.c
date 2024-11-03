#include <stdio.h>
// Nu test score calcuator
int main()
{
    float avm, abm, aiq, ae; // attempted mcqs
    float cvm, cbm, ciq, ce; // correct mcqs
    // float wvm,wbm,wiq,we; // wrong mcqs

    printf("  \tNu test score calcuator\n");
    printf("\n Enter attempted no of mcqs in AdvMaths portion = ");
    scanf("%f", &avm);
    printf(" Enter correct no of mcqs in AdvMaths portion = ");
    scanf("%f", &cvm);
    printf("\n Enter attempted no of mcqs in BasicMaths portion = ");
    scanf("%f", &abm);
    printf(" Enter correct no of mcqs in BasicMaths portion = ");
    scanf("%f", &cbm);
    printf("\n Enter attempted no of mcqs in Iq portion = ");
    scanf("%f", &aiq);
    printf(" Enter correct no of mcqs in Iq portion = ");
    scanf("%f", &ciq);
    printf("\n Enter attempted no of mcqs in English portion = ");
    scanf("%f", &ae);
    printf(" Enter correct no of mcqs in English portion = ");
    scanf("%f", &ce);

    //     printf(" Enter wrong no of mcqs in AdvMaths portion = ");
    //     scanf("%f", &wvm);
    //     printf(" Enter wrong no of mcqs in BasicMaths portion = ");
    //     scanf("%f", &wbm);
    //     printf(" Enter wrong no of mcqs in Iq portion = ");
    //     scanf("%f", &wiq);
    //     printf(" Enter wrong no of mcqs in English portion = ");
    //     scanf("%f", &we);

    float ces = ce * 0.333; // english mcqs total marks

    float wvm = avm - cvm;    // wrong no of mcqs in avdmaths portion
    float swvm = 0.25 * wvm;  // wrong marks of avdmaths portion
    float wbm = abm - cbm;    // wrong no of mcqs in basicmaths portion
    float swbm = 0.25 * wbm;  // wrong marks of basicmaths portion
    float wiq = aiq - ciq;    // wrong no of mcqs in iq portion
    float swiq = 0.25 * wiq;  // wrong marks of iq portion
    float we = ae - ce;       // wrong no of mcqs in english portion
    float swe = 0.08125 * we; // wrong marks of english portion

    float sum = cvm + cbm + ciq + ces;         // sum of correct mcqs score
    float wrongsum = swvm + swbm + swiq + swe; // sum of wrong mcqs score
    float total = sum - wrongsum;              // total score of the test including ne marking
    printf("\nTotal Nu test score is = %f ( with negative marking ) ", total);
    printf("\nScore = %f ", sum);
    printf("\nNegative marking = %f", wrongsum);
    printf("\n\nThank you");

    // Agregrate calculator
    float matricm, interm;

    printf("\n\n\t Agregrade Calculator\n");
    printf("\nEnter matric percentage = ");
    scanf("%f", &matricm);
    printf("\nEnter inter or 1 year percentage = ");
    scanf("%f", &interm);

    // float matricp = matricm / 1100 * 100; // Matric percentage
    // float interp = interp / 550 * 100;   // Inter percentage

    float agre = (total * 0.5) + (interm * 0.4) + (matricm * 0.1); // total agregrate
    printf("\ntotal nu agregrate is = %2f ", agre);
    printf("\n\nThank you");
    return 0;
}