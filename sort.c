#include<stdio.h>
#include<stdlib.h>
void main()
{
    char ne,z,q;
    int n,i,temp=0,arr[100],w,j;
    system("color B4");
    DEFAULT:
    printf("\t\t\t\t\t\t\t\t\tWelcome to sorting world\n\n\n\n\n");
    printf("PRESS:1-BUBBLE SORT\nPRESS:2-INSERTION SORT\nPRESS:3-SELECTION SORT\nPRESS:4-MERGE SORT\nPRESS:5-QUICK SORT\nPRESS:6-QUIT\n\n\nEnter your choice:-\n\n\n");
    scanf("%c",&ne);
    system("cls");
    if(ne=='1')
    {

         printf("\t\t\t\t\t\t\t\t\tBUBBLE SORT\n\n\n\n\n");
         printf("1.In bubble sort we sort the elements by swapping two adjacent elements one by one.\n2.In bubble sort one traversal of elements is known as one pass.\n3.The total no. of passes in this are:-(n-1)\n4.Average and Worst time complexity of this algorithm is:-O(n^2)\n5.Best time complexity of this algorithm is:-O(n)");
         printf("\n\n\nWould you like to try this one\n\nPRESS:1 to proceed\n\nPRESS:2 to go back\n\nPRESS:3 to quit\n\n");
         HAPPY:
             q=getchar();
         scanf("%c",&z);
         if(z=='1')
         {
             printf("Enter the size of the array\n");
             scanf("%d",&w);
             printf("Enter the elements in the array\n");
             for(i=0;i<w;i++)
             {
             scanf("%d",&arr[i]);
             }
             printf("Entered data:-\n");
             for(i=0;i<w;i++)
             {
             printf("%d\n",arr[i]);
             }
             for(j=0;j<w-1;j++)
             {
             for(i=0;i<(w-1);i++)
             {
             if(arr[i]>arr[i+1])
             {
                 temp=arr[i];
                 arr[i]=arr[i+1];
                 arr[i+1]=temp;
             }
             }
             }
             printf("Sorted data is:-\n");
            for(i=0;i<w;i++)
             {
             printf("%d\n",arr[i]);
             }
         }
         else if(z=='2')
         {
             system("cls");
             goto DEFAULT;
         }
         else if(z=='3')
         {
             exit(1);
         }
         else
         {
             printf("WRONG INPUT\n");
             goto HAPPY;
         }

    }
    else if(ne=='2')
    {
         printf("\t\t\t\t\t\t\t\t\tINSERTION SORT\n\n\n\n\n");
         printf("1.In insertion sort we sort the elements by sorting it at the time of insertion i.e,we insert the new element and place it at its sorted position.\n2.Average and Worst time complexity of this algorithm is:-O(n^2)\n3.Best time complexity of this algorithm is:-O(n)");
         printf("\n\n\nWould you like to try this one\n\nPRESS:1 to proceed\n\nPRESS:2 to go back\n\nPRESS:3 to quit\n\n");
         DEAF:
             q=getchar();
         scanf("%c",&z);
         if(z=='1')
         {
             printf("Enter the size of the array\n");
             scanf("%d",&w);
             printf("Enter the elements in the array\n");
             for(i=0;i<w;i++)
             {
             scanf("%d",&arr[i]);
             }
             printf("Entered data:-\n");
             for(i=0;i<w;i++)
             {
             printf("%d\n",arr[i]);
             }
             temp=0;
             for(i=1;i<w;i++)
             {
             temp=arr[i];
             j=i-1;
             while(j>=0&&arr[j]>temp)
             {
                 arr[j+1]=arr[j];
                 j=j-1;
             }
             arr[j+1]=temp;
             }
             printf("Sorted data is:-\n");
            for(i=0;i<w;i++)
             {
             printf("%d\n",arr[i]);
             }
         }
         else if(z=='2')
         {
             system("cls");
             goto DEFAULT;
         }
         else if(z=='3')
         {
             exit(1);
         }
         else
         {
             printf("WRONG INPUT\n");
             goto DEAF;
         }

    }
    else if(ne=='3')
    {
    printf("\t\t\t\t\t\t\t\t\tSELECTION SORT\n\n\n\n\n");
         printf("1.In selection sort we select the minimum element from the array and then swap it with the index element.\n2.Best,Average and Worst time complexity of this algorithm is:-O(n^2).");
         printf("\n\n\nWould you like to try this one\n\nPRESS:1 to proceed\n\nPRESS:2 to go back\n\nPRESS:3 to quit\n\n");
         DOOR:
             q=getchar();
         scanf("%c",&z);
         if(z=='1')
         {
             printf("Enter the size of the array\n");
             scanf("%d",&w);
             printf("Enter the elements in the array\n");
             for(i=0;i<w;i++)
             {
             scanf("%d",&arr[i]);
             }
             printf("Entered data:-\n");
             for(i=0;i<w;i++)
             {
             printf("%d\n",arr[i]);
             }
             temp=0;
             int min=0;
             for(i=0;i<w-1;i++)
             {
                 min=i;
                 for(j=i+1;j<w;j++)
                 {
                 if(arr[j]<arr[min])
                 {
                     min=j;
                 }
                 }
                 temp=arr[i];
                 arr[i]=arr[min];
                 arr[min]=temp;
             }
             printf("Sorted data is:-\n");
            for(i=0;i<w;i++)
             {
             printf("%d\n",arr[i]);
             }
         }
         else if(z=='2')
         {
             system("cls");
             goto DEFAULT;
         }
         else if(z=='3')
         {
             exit(1);
         }
         else
         {
             printf("WRONG INPUT\n");
             goto DOOR;
         }

    }
    else if(ne=='4')
    {
         printf("\t\t\t\t\t\t\t\t\tMERGE SORT\n\n\n\n\n");
         printf("1.In merge sort we use the divide and  conquer technique.\n2.This is a recursive approach\n3.In this sorting technique we firstly divide the bigger problem(array) into smaller problem(single sub-array's) then solve it and combine it to get the solution\n4.The best,average and worst time complexity for this algorithm is O(n log(n)).\n\n");
         printf("\n\n\nWould you like to try this one\n\nPRESS:1 to proceed\n\nPRESS:2 to go back\n\nPRESS:3 to quit\n\n");
         COST:
         q=getchar();
         scanf("%c",&z);
         if(z=='1')
         {
             int n,arr[100],l,h,i;
             printf("Enter the size of the array\n");
             scanf("%d",&n);
             printf("Enter the elements in the array\n");
             for(i=0;i<n;i++)
             {
                 scanf("%d",&arr[i]);
             }
             printf("Entered elements in the array\n");
             for(i=0;i<n;i++)
             {
                 printf("%d ",arr[i]);
             }
             mergesort(0 , n-1 ,arr);

             printf("sorted data is:-");

             for(int i=0;i<n;i++){
                printf("%d " , arr[i]);
             }

         }
         else if(z=='2')
         {
             system("cls");
             goto DEFAULT;
         }
         else if(z=='3')
         {
             exit(1);
         }
         else
         {
             printf("WRONG INPUT\n");
             goto COST;
         }

    }
   else if(ne=='5')
    {
         printf("\t\t\t\t\t\t\t\t\tQUICK SORT\n\n\n\n\n");
         printf("1.In quick sort we select one element as pivot element\n2.In this sorting we aim to place pivot at its correct position.\n3.The best and average time complexity for this algorithm is O(n log(n))\n4.The worst time complexity for this algorithm is O(n^2)\n\n");
         printf("\n\n\nWould you like to try this one\n\nPRESS:1 to proceed\n\nPRESS:2 to go back\n\nPRESS:3 to quit\n\n");
         COOL:
         q=getchar();
         scanf("%c",&z);
         if(z=='1')
            {
                int arr[100],n,i;
                printf("Enter the size of the array\n");
                scanf("%d",&n);
                printf("Enter elements in the array\n");
                for(i=0;i<n;i++)
                {
                    scanf("%d",&arr[i]);
                }
                quicksort(0,n-1,arr);
                printf("sorted data is\n");
                for(i=0;i<n;i++)
                {
                    printf("%d ",arr[i]);
                }
            }
         else if(z=='2')
         {
             system("cls");
             goto DEFAULT;
         }
         else if(z=='3')
         {
             exit(1);
         }
         else
         {
             printf("WRONG INPUT\n");
             goto COOL;
         }

    }
    else if(ne=='6')
        {
            exit(1);
        }
    else
         {
             system('cls');
             goto DEFAULT;
         }
}


void mergesort(int l,int h,int *arr)
            {
                if(l<h)
                {

                    int mid=(l+h)/2;
                    mergesort(l,mid,arr);
                    mergesort(mid+1,h,arr);
                    merge(l,mid,h,arr);
                }
            }


void merge(int l ,int mid , int h ,int *arr)
{
    int left = mid - l + 1;
    int right  = h - mid;

    int R[left] , L[right];

    for (int i = 0; i < left ;  i++)
        R[i] = arr[l + i];
    for (int j = 0; j < right; j++)
        L[j] = arr[mid + 1 + j];

    int i=0,j=0,k=l ;
    while(i<left && j< right)
    {
        if(R[i]<= L[j])
        {
            arr[k]=R[i];
            i++;
        }
        else
        {
            arr[k]=L[j];
            j++;
        }
        k++;
    }
   while(i < left){
    arr[k] = R[i];

    i++;
    k++;
   }
   while( j <right){
    arr[k] = L[j];

    j++;
    k++;
   }
   printf("\n");
}


void quicksort(int l,int h,int *arr)
{
    if(l<h)
    {
        int part = partition(l,h,arr);
        quicksort(l,part - 1,arr);
        quicksort(part + 1 , h,arr);
    }
}


void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}


int partition(int l,int h,int *arr)
{
    int pivot = arr[h];
    int i = (l );

    for (int j = l; j <= h- 1; j++)
    {
        if (arr[j] < pivot)
        {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[h]);

    return (i );
}

