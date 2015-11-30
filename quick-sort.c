#include 
#include 
#define MAXSIZE 500

void quickSort(int elements[], int maxsize);
void sort(int elements[], int left, int right);

int elements[MAXSIZE];

int main()
{
int i, maxsize;
printf(“\nHow many elements you want to sort: “);
scanf(“%d”,&maxsize);
printf(“\nEnter the values one by one: “);
for (i = 0; i < maxsize; i++)
{
printf (“\nEnter element %i :”,i);
scanf(“%d”,&elements[i]);
}
printf(“\nArray before sorting:\n”);
for (i = 0; i < maxsize; i++)
printf(“[%i], “,elements[i]);
printf (“\n”);
quickSort(elements, maxsize);
printf(“\nArray after sorting:\n”);
for (i = 0; i < maxsize; i++)
printf(“[%i], “, elements[i]);
}
void quickSort(int elements[], int maxsize)
{
sort(elements, 0, maxsize - 1);
}
void sort(int elements[], int left, int right)
{
int pivot, l, r;
l = left;
r = right;
pivot = elements[left];
while (left < right)
{
while ((elements[right] >= pivot) && (left < right))
right—;
if (left != right)
{
elements[left] = elements[right];
left++;
}
while ((elements[left] <= pivot) && (left < right))
left++;
if (left != right)
{
elements[right] = elements[left];
right—;
}
}
elements[left] = pivot;
pivot = left;
left = l;
right = r;
if (left < pivot)
sort(elements, left, pivot - 1);
if (right > pivot)
sort(elements, pivot + 1, right);
}

