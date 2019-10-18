#include <stdio.h>
#include <stdlib.h>
int main()
{
	int ch,v,flag=0;
	while(flag==0)
	{
		printf("Enter 1to push ,Enter 2 to pop,Enter 3 to display,Enter 4 to exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					printf("Enter a Value to be pushed");
					scanf("%d",&v);
					push(v);
					break;
			case 2:-+
					printf("The Value that has been Poped is:\n");
					pop();
					break;
			case 3:
					printf("The resultant stack is:\n");
					display();
					break;
			case 4:
					flag=1;
					break;
			default:
					printf("Wrong Input");
					break;
		}
	}
	return 0;
}
