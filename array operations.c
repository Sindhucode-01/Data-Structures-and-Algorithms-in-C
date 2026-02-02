#include <stdio.h>
#include <stdlib.h>

/* Function Declarations */
void menu(int *ch);
void input(int data[], int *num_element);
void display(int data[], int num_element);
int sum_array(int data[], int num_element);
float avg_array(int data[], int num_element);
int min_array(int data[], int num_element);
int max_array(int data[], int num_element);

int main()
{
    int data[100], ch, num_element;

    while(1)
    {
        menu(&ch);

        switch(ch)
        {
            case 1:
                input(data, &num_element);
                break;

            case 2:
                display(data, num_element);
                printf("The sum of above array is: %d\n",
                       sum_array(data, num_element));
                break;

            case 3:
                display(data, num_element);
                printf("The average of above array is: %.2f\n",
                       avg_array(data, num_element));
                break;

            case 4:
                display(data, num_element);
                printf("The minimum element of above array is: %d\n",
                       min_array(data, num_element));
                break;

            case 5:
                display(data, num_element);
                printf("The maximum element of above array is: %d\n",
                       max_array(data, num_element));
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid entry\n");
        }
    }
}

/* Function Definitions */

void menu(int *ch)
{
    printf("\n1. Input Array");
    printf("\n2. Sum of Array");
    printf("\n3. Average of Array");
    printf("\n4. Minimum Element");
    printf("\n5. Maximum Element");
    printf("\n6. Exit");
    printf("\nEnter your choice: ");
    scanf("%d", ch);
}

void input(int data[], int *num_element)
{
    printf("Enter number of elements: ");
    scanf("%d", num_element);

    printf("Enter elements:\n");
    for(int i = 0; i < *num_element; i++)
        scanf("%d", &data[i]);
}

void display(int data[], int num_element)
{
    printf("Array elements: ");
    for(int i = 0; i < num_element; i++)
        printf("%d ", *(data + i));
    printf("\n");
}

int sum_array(int data[], int num_element)
{
    int sum = 0;
    for(int i = 0; i < num_element; i++)
        sum += *(data + i);
    return sum;
}

float avg_array(int data[], int num_element)
{
    return (float)sum_array(data, num_element) / num_element;
}

int min_array(int data[], int num_element)
{
    int min = *data;
    for(int i = 1; i < num_element; i++)
        if(*(data + i) < min)
            min = *(data + i);
    return min;
}

int max_array(int data[], int num_element)
{
    int max = *data;
    for(int i = 1; i < num_element; i++)
        if(*(data + i) > max)
            max = *(data + i);
    return max;
}
