#ifndef _LinkedList_h_
#define _LinkedList_h_

#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#include "string.h"

typedef struct
{
    int Id;
    char name[40];
    float height;
} data;

typedef struct std
{
    data student_data;
    struct std *next_student;
} student_t;

typedef enum
{
    LinkedList_no_error,
    LinkedList_null,
    Node_Deleted,
    Node_not_Deleted,
    Node_not_found,
    Node_not_Inserted,
    Node_Inserted
} LinkedList_Status;

// Part 2 of the Assignment....
LinkedList_Status Get_At_Index();
LinkedList_Status Get_The_Middle();
LinkedList_Status Get_At_Index_From_End();
LinkedList_Status Reverse_List();
int get_number_of_Student_iterative();
int get_number_of_Student_recursive(student_t *student);

// Part One of the Assignment....
void Fill_Record(student_t *student);
void Add_Student();
void Delete_All();
int Delete_Student();
void View_All();
void Check_Option();

#endif