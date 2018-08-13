/* CS261- Assignment 1 - Q.3*/
/* Name: Kyle Johnson
 * Date: 06/25/2018
 * Solution description: This is an exercise on sorting pointer values in C.
 */

#include <stdio.h>
#include<stdlib.h>
#include<math.h>

struct student{
    int id;
    int score;
};

void sort(struct student* students, int n){
    /*Sort the n students based on their score*/
    printf("\nSorting by score...\n\n");

    struct student temp;
    int sorted = 0;
//    while(!sorted) {
        for (int i=0; i<n-1; i++){
            for(int j=0; j<n-1-i; j++){
//                int swapped = 0;
                if (students[j].score > students[j+1].score){
                    //sort using tempPtr
                    temp = *(students+j);
                    *(students+j) = *(students+j+1);
                    *(students+j+1)=temp;
//                    swapped++;
                }
//                if (!swapped) {
//                    sorted++;
//                }
            }
        }
//    }
}

int main(){
    /*Declare an integer n and assign it a value.*/
    int n = 10;

    /*Allocate memory for n students using malloc.*/
    struct student* students = (malloc(n * sizeof(struct student)));

    /*Generate random and unique IDs and random scores for the n students, using rand().*/
    int id = 0;
    for(int i=0; i<n; i++){
        // Generate unique IDs
        int idUsed = 1;
        while(idUsed){
            id = (rand() % n) + 1;
            for (int j = 0; j<n; j++) {
                if (id == students[j].id) {
                    idUsed = 1;
                    break;
                }
                else {
                    idUsed = 0;
                }
            }
            if(!idUsed){
                students[i].id  = id;
            }
        }

        // Generate scores
        students[i].score = rand() % 101;
    }

    /*Print the contents of the array of n students.*/
    printf("\nStudents before sorting:\n");
    for(int i=0; i<n; i++) {
        printf("ID%d %d\n", students[i].id, students[i].score);
    }

    /*Pass this array along with n to the sort() function*/
    sort(students, n);

    /*Print the contents of the array of n students.*/
    printf("\nStudents after sorting:\n");
    for(int i=0; i<n; i++) {
        printf("ID%d %d\n", students[i].id, students[i].score);
    }
    return 0;
}
