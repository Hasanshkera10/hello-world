#include <stdio.h>

int main()
{
	/*for (int i=1;i<=10;i++)
		printf("%d\t",i);
	return 0; */
	int n;
	printf("How many elements you want?\n");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the elements:\n");
	for (int i = 0; i < n ; i++)
	{
		scanf("%d", &arr[i]);
		printf("Hello")  ;
	}
}
for (int i = 0; i < 10; i++)