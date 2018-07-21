/*
 ============================================================================
 Name        : Embedded_Arr_Ptr_Str.c
 Author      : mohammed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define UP_COUNTER 		1
#define DOWN_COUNTER 	0


void char_search_linear(char *arr , char item ,char size);
void char_search_binary(char *arr ,char first_item , char last_item, char item);
void swap_2(char *x , char *y);
void swap_arr(char *arr ,char *arr2 , char size);
void swap_mid_arr(char *arr , int size);
void selection_sort(char *arr , int size , int con);
void bubble_sort(char *arr , int size, int con);



char array[] = "123456789";
char array1[] = "987654321";





void (*ptr_1)(char,char);








char Array[11] = {0};

char value_char[4][5] = {{1 , 1 , 2 , 2 , 3} \
		, {0}
, {6 , 7 , 7,9 ,10}
, {0}
};


char *value_char_ptr ;

int value_int = 0 ;
int *value_int_ptr ;


void sWap ( char *x , char *y);
void SwapArrays(char *arr1 , char *arr2 , int size);
void arrange (char *arr1 , char *arr2 , int size , int *count);
void Print_arry (char *arr , int size);



typedef struct name
{
	int value;
	char arr[5];
	float degree;
	char size;
}mohammed;

mohammed student[5] ;



int main(void) {


	int counter = 0;

	student[0].value = 1;
	student[0].arr[0] = 0;
	student[0].degree = 5.4;
	student[0].size = 52;


	ptr_1 = swap_2;



	arrange(value_char[0] , value_char[1] , 5 , &counter);

	Print_arry(value_char[1] , counter);












	return EXIT_SUCCESS;
}




void sWap ( char *x , char *y)
{
	char temp = *x;
	*x = *y;
	*y=temp;

}



void Print_arry (char *arr , int size)
{

	for(int index = 0 ; index <= size ; index++)
	{
		printf("%d" ,arr[index]);
	}
	printf("\n\r");

}

void Scan_arry (char *arr , int size )
{

	for(int index = 0 ; index < size ; index ++)
	{
		scanf("%d" , &arr[index]);
	}
}

void namee(char *x , char *y)
{

}



void name(mohammed *x , mohammed *y)
{

}







void SwapArrays(char *arr1 , char *arr2 , int size)
{

	for(int index = 0 ; index < size ; index ++)
	{
		sWap( &arr1[index] , &arr2[index]);
	}

}






void  arrange (char *arr1 , char *arr2 , int size , int *count)
{


	int outer_index = 0;
	int inner_index = 0;
	*count = -1;
	int flag = 0;


	for(outer_index = 0 ; outer_index < size ; outer_index ++)
	{

		for(inner_index = 0 ; inner_index < size ; inner_index++)
		{
			if(arr1[outer_index] == arr2[inner_index])
			{
				flag = 1;
			}

		}
		if(flag == 0)
		{
			(*count)++;
			arr2[*count] = arr1[outer_index];
		}
		flag = 0;
	}


}






















void char_search_linear(char *arr , char item ,char size)
{

	for(int index = 0 ; index < size ; index ++)
	{
		if(arr[index] == item)
		{
			printf("Item found in index : %d " , index);
			return;
		}
	}
	printf("Item not found ");

}

void char_search_binary(char *arr ,char first_item , char last_item, char item)
{

	if(first_item <= last_item)
	{
		int avg_item = last_item - ((last_item-first_item)/2);

		if(arr[avg_item] == item)
		{
			printf("Item found in index : %d " , avg_item);
			return;
		}
		//		if(arr[avg_item] > item)
		//		{
		char_search_binary(arr , avg_item + 1 , last_item , item);
		//		}
		//		else
		char_search_binary(arr , first_item , avg_item - 1 , item);
	}


}





void swap_arr(char *arr ,char *arr2 , char size)
{

	for(int index = 0; index < size ; index++)
	{
		swap_2(&arr[index] , &arr2[index]);
	}


}









void swap_2(char *x , char *y)
{
	*x = (*x)^(*y);
	*y = (*x)^(*y);
	*x=  (*x)^(*y);
}












void swap_mid_arr(char *arr , int size)
{
	int avrg = size /2;
	int until = ((avrg/2));

	for(int index = 0; index < until ; index++)
	{
		swap_2(&arr[index] , &arr[avrg-index] );
	}

	int i = 0;
	for(int index = avrg+1; index < (until+avrg+1) ; index++)
	{
		swap_2(&arr[index] , &arr[size-i] );
		i++;
	}
}
void selection_sort(char *arr , int size , int con)
{
	int outer_index;
	int inner_index;
	int min_index;

	for(outer_index = 0 ; outer_index < size ; outer_index++)
	{

		for(inner_index = outer_index+1 ; inner_index < size ; inner_index++)
		{
			if(con == UP_COUNTER)
			{
				if(arr[outer_index] > arr[inner_index])
				{
					min_index = inner_index;
					swap_2(&arr[min_index],&arr[outer_index]);
				}
			}
			else
			{
				if(arr[outer_index] < arr[inner_index])
				{
					min_index = inner_index;
					swap_2(&arr[min_index],&arr[outer_index]);
				}
			}
		}

	}
}

void bubble_sort(char *arr , int size, int con)
{

	int outer_index;
	if(size == 1)
		return;



	for(outer_index = 0 ; outer_index < size-1 ; outer_index++)
	{
		if(con == UP_COUNTER)
		{
			if(arr[outer_index] > arr[outer_index+1])
				swap_2(&arr[outer_index],&arr[outer_index+1]);
		}
		else
		{
			if(arr[outer_index] < arr[outer_index+1])
				swap_2(&arr[outer_index],&arr[outer_index+1]);
		}
	}

	bubble_sort(arr , size - 1 , con);
}


