#include<iostream>
#include<string>
#include<ctime>
using namespace std; 
void selectionsort(int array[],int size){
	int startScan,minIndex,minValue;
	for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minValue = array[startScan];
    for(int index = startScan + 1; index < size; index++)
{
    if (array[index] < minValue)
{
    minValue = array[index];
    minIndex = index;
}
}
    array[minIndex] = array[startScan];
    array[startScan] = minValue;
	
}}
void showarray(int array[],int size){
	for(int i=0;i<size;i++){
		cout<<array[i]<<" ";
	}
}
int main () {
	int size=6;
	int array[size]={5,7,2,8,9,1};
	selectionsort(array,size);
	showarray(array,size);
} 
