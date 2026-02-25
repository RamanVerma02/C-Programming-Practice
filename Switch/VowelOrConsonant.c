# include <stdio.h>
int main()
{
    //program to check whether an alphabet is vowel or consonant using switch case.
    char alphabet;
    printf("Enter a letter\n");
    scanf("%c",&alphabet);

    switch (alphabet)
    {
        case 'a':
        printf("a is a vowel\n");
        break;

         case 'e':
        printf("e is a vowel\n");
        break;

         case 'i':
        printf("i is a vowel\n");
        break;

         case 'o':
        printf("o is a vowel\n");
        break;

         case 'u':
        printf("u is a vowel\n");
        break;

         case 'A':
        printf("A is a vowel\n");
        break;

         case 'E':
        printf("E is a vowel\n");
        break;

         case 'I':
        printf("I is a vowel\n");
        break;

         case 'O':
        printf("O is a vowel\n");
        break;

        case 'U':
        printf("U is a vowel\n");
        break;

        default :
        printf("consonant");
    }
    return 0;

}