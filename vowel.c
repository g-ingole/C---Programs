#include<stdio.h>
#include<conio.h>
void main(){
    char c;
    printf("enter your character");
    scanf("%c",&c);
    switch (c)
    {
    case 'a':
     case 'e':
      case 'i':
       case 'o':
        case 'u': 
         case 'A':
          case 'E':
           case 'I':
            case 'O':
             case 'U':
             printf("%c its vowel",c);
        
        break;
    
    default:printf("%c its consonnant",c);
        break;
    }

}