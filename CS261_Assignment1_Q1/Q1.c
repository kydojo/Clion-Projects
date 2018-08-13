/* CS261- Assignment 1 - Q.1*/
/* Name: Kyle Johnson
 * Date: 06/25/2018
 * Solution description: This is an exercise on the use of pointers within functions in C.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Student struct with two integer members: id and score
struct student{
    int id;
    int score;
};

// Function that allocates memory for ten students and returns the pointer.
struct student* allocate(){
    /*Allocate memory for ten students*/
    struct student* students = (malloc(10 * sizeof(struct student)));

    /*return the pointer*/
    return students;
}

// Function to generate a random, unique ID and a score for each student
void generate(struct student* students){
    /*Generate random and unique ID and random scores for ten students,
     *ID being between 1 and 10, scores between 0 and 100*/
    int id = 0;
    for(int i=0; i<10; i++){
        // Generate unique IDs
        int idUsed = 1;
        while(idUsed){
            id = (rand() % 10) + 1;
            for (int j = 0; j<10; j++) {
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
}

// Function to output the ID and score of each of the students
void output(struct student* students){
    /*Output information about the ten students in the format:
             ID1 Score1
             ID2 score2
             ID3 score3
             ...
             ID10 score10*/
    for(int i=0; i<10; i++) {
        printf("ID%d %d\n", students[i].id, students[i].score);
    }
}

// Function to output the minimum, maximum, and average scores of the students
void summary(struct student* students){
    /*Compute and print the minimum, maximum and average scores of the ten students*/
      int minScore = 100;
      int maxScore = 0;
      int totScore = 0;
      int avgScore = 0;

      for(int i=0; i<10; i++){
          if(students[i].score < minScore){
              minScore = students[i].score;
          }
          if(students[i].score > maxScore){
              maxScore = students[i].score;
          }
          totScore += students[i].score;
      }
      avgScore = (totScore / 10);

      printf("\nScore Summary:\n");
      printf("Minimum: %d\n", minScore);
      printf("Maximum: %d\n", maxScore);
      printf("Average: %d\n", avgScore);

}

// Function to deallocate the memory allocated for the student pointers
void deallocate(struct student* stud){
    /*Deallocate memory from stud*/
    if(stud != NULL){
        for (int i = 0; i < 10; i++) {
            free(stud);
            stud = NULL;
        }
    }
}

// Main function of the program
int main(){
    srand(time(NULL));
    struct student* stud = NULL;

    /*call allocate*/
    stud = allocate();

    /*call generate*/
    generate(stud);

    /*call output*/
    output(stud);

    /*call summary*/
    summary(stud);

    /*call deallocate*/
    deallocate(stud);

    return 0;
}
