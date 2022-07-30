#include <stdio.h>
#include<limits.h>
#include<float.h>
#include <string.h>

int main()
{
	enum chh {Monday, Tuesday, Wednesday,Thursday, Friday, Saturday,Sunday};
	enum chh today=Wednesday;
//	printf("Enter the day number: ");
//	scanf("%u", &today);
//	printf("%d\n", today);
	switch(today)
	{
		case Sunday:
		    printf("Today is Sunday\n");
		    break;
		case Monday:
		    printf("Today is Monday\n");
		    break;
		case Tuesday:
		    printf("Today is Tuesday\n");
		    break;
		case Wednesday:
		    printf("Today is Wednesday\n");
		    break;
		case Thursday:
		    printf("Today is Thursday\n");
		    break;
		case Friday:
		    printf("Today is Friday\n");
		    break;
		/*default:
		    printf("Today Is Saturday\n");
		    break;*/
	}

    return 0;


}
