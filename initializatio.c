#include <stsio.h>

int main()
{
  int var1 = 3;
  int var2,
  var2 = var1;
  printf("%d", var2);

  int two = 2, three= 3, six = 6;
  int result = (two + three) * six / three;
  prinf("I am new to programmming but learn to write arithemetic expressions like");
  prinf("and the result of the expression is: %d", result);
  return();
}

#include <stdio.h>

int main() {
    char dir;
    scanf("%c", &dir);

    switch (dir) {
        case 'w':
            printf("Up");
            break;
        case 's':
            printf("Down");
            break;
        case 'a':
            printf("Left");
            break;
        case 'd':
            printf("Right");
            break;
        default:
            printf("Wrong");
    }

    return 0;
}

#include <stdio.h>

int main() {
	int i = 0;
    int stars;
    
    scanf("%d", &stars);
    
    do {
        printf("*");
        i++;
    } while (i < stars);

    return 0;
}

#include <stdio.h>

int main() {
	int start, end;
	scanf("%d", &start);
	scanf("%d", &end);
	
	int i = start;
    do {
        printf("%d ", i);
        i++;
    } while (i <= end);

    printf("\n"); 
    
    return 0;
}

int main() {
	int i;
	
    float t[] = {10.3, 15.4, 21.8, 22.5, 25.1, 27.4, 28.8, 27.9, 20.1, 22, 19.4, 14.2};

	scanf("%d", &i);

    printf("%f", t[i]);
    
    return 0;
}

#include <stdio.h>

int main() {
    float results[] = {0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 1};
    
    int total = 0;

    for(int i=0;i<28;i++) {
        total += results[i];
    }
    printf("%d", total);
    
    return 0;
}
