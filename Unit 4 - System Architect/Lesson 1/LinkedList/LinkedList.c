#include "LinkedList.h"

student_t *gpFirstStudent = NULL;

void Fill_Record(student_t *student)
{
    char temp_text[40];
    printf("\n \t Enter Student's ID : ");
    gets(temp_text);
    student->student_data.Id = atoi(temp_text);
    printf("\n \t Enter Student Full Name : ");
    gets(student->student_data.name);
    printf("\n \t Enter Student's Height : ");
    gets(temp_text);
    student->student_data.height = atof(temp_text);
}
void Add_Student()
{
    student_t *PLastStudent;
    student_t *PNewStudent;
    if (gpFirstStudent == NULL)
    {
        PNewStudent = (student_t *)malloc(sizeof(student_t));
        gpFirstStudent = PNewStudent;
    }
    else
    {
        PLastStudent = gpFirstStudent;
        while (PLastStudent->next_student)
        {
            PLastStudent = PLastStudent->next_student;
        }
        PNewStudent = (student_t *)malloc(sizeof(student_t));

        PLastStudent->next_student = PNewStudent;
    }
    Fill_Record(PNewStudent);
    PNewStudent->next_student = NULL;
}
void Delete_All()
{
    student_t *PCurrentStudent = gpFirstStudent;
    if (gpFirstStudent == NULL)
        printf("\n \t Empty List");
    else
    {
        while (PCurrentStudent)
        {
            student_t *PTempStudent = PCurrentStudent;
            PCurrentStudent = PCurrentStudent->next_student;
            free(PTempStudent);
        }
        gpFirstStudent = NULL;
    }
}
int Delete_Student()
{
    char temp_text[40];
    int i, selected_id;
    printf("\n Enter Student ID to be deleted");
    gets(temp_text);
    selected_id = atoi(temp_text);
    if (gpFirstStudent)
    {
        student_t *PPreviousStudent = NULL;
        student_t *PSelectedStudent = gpFirstStudent;
        while (PSelectedStudent)
        {
            if (PSelectedStudent->student_data.Id == selected_id)
            {
                if (PPreviousStudent)
                    PPreviousStudent->next_student = PSelectedStudent->next_student;
                else
                    gpFirstStudent = PSelectedStudent->next_student;
                free(PSelectedStudent);
                return 1;
            }
            PPreviousStudent = PSelectedStudent;
            PSelectedStudent = PSelectedStudent->next_student;
        }
    }
    printf("\n cannot find student ID");
    return 0;
}
void View_All()
{
    int count = 0;
    student_t *PCurrentStudent = gpFirstStudent;
    if (gpFirstStudent == NULL)
        printf("\n \t Empty List");
    else
    {
        while (PCurrentStudent)
        {
            printf("\n Record Number %d ", count + 1);
            printf("\n ID : %d", PCurrentStudent->student_data.Id);
            printf("\n Name: %s", PCurrentStudent->student_data.name);
            printf("\n Height : %f", PCurrentStudent->student_data.height);
            PCurrentStudent = PCurrentStudent->next_student;
            count++;
        }
    }
}
void Check_Option()
{
    char temp_text[40];
    printf("\n ====================");
    printf("\n \t Choose one of the Following Options \n");
    printf("\n 1: Add Student ");
    printf("\n 2: Delete Student ");
    printf("\n 3: View Students ");
    printf("\n 4: Delete All ");
    printf("\n 5: Get By Index ");
    printf("\n 6: Get Number of Students ");
    printf("\n 7: Get at Index from the end ");
    printf("\n 8: Reverse the List ");
    printf("\n 9: Get the Middle Student ");
    printf("\n ====================");
    printf("\n  Enter Option Number");

    gets(temp_text);
    switch (atoi(temp_text))
    {
    case 1:
        Add_Student();
        break;
    case 2:
        Delete_Student();
        break;
    case 3:
        View_All();
        break;
    case 4:
        Delete_All();
        break;
    case 5:
        Get_At_Index();
        break;
    case 6:
        get_number_of_Student_iterative();
        break;
    case 7:
        Get_At_Index_From_End();
        break;
    case 8:
        Reverse_List();
        break;
    case 9:
        Get_The_Middle();
    default:
        printf("\n Wrong Option");
        break;
    }
}

// Part 2 of the Assignment....
int get_number_of_Student_iterative()
{

    student_t *PtempStudent = gpFirstStudent;
    int counter = 0;
    if (gpFirstStudent == NULL)
    {
        printf("\n List is Empty");
        return 0;
    }
    else
    {
        while (PtempStudent)
        {
            counter++;
            PtempStudent = PtempStudent->next_student;
        }
        printf("\n Number of Students is : %d ", counter);
        return counter;
    }
}
int get_number_of_Student_recursive(student_t *student)
{
    if (gpFirstStudent == NULL)
        return 0;
    else
    {
        student_t *PtempStudent = gpFirstStudent;
        PtempStudent = PtempStudent->next_student;
        return (1 + get_number_of_Student_recursive(student));
    }
}
LinkedList_Status Get_At_Index()
{
    int index;
    char temp_text[40];
    printf("\nEnter The Index: ");
    gets(temp_text);
    index = atoi(temp_text);
    student_t *PtempStudent = gpFirstStudent;
    int counter = 1;
    if (gpFirstStudent == NULL)
    {
        printf("\n List is Empty");
    }
    else
    {
        while (PtempStudent)
        {
            if (index == counter)
            {
                printf("\n Record Number %d ", counter);
                printf("\n ID : %d", PtempStudent->student_data.Id);
                printf("\n Name: %s", PtempStudent->student_data.name);
                printf("\n Height : %f", PtempStudent->student_data.height);
                return LinkedList_no_error;
            }
            counter++;
            PtempStudent = PtempStudent->next_student;
        }
        printf("\n Index doesnot exist");
        return Node_not_found;
    }
}
LinkedList_Status Get_At_Index_From_End()
{
    int index;
    char temp_text[40];
    printf("\nEnter The Index: ");
    gets(temp_text);
    index = atoi(temp_text);
    student_t *main_ptr = gpFirstStudent;
    student_t *ref_ptr = gpFirstStudent;
    int counter = index;
    while (counter > 0)
    {
        ref_ptr = ref_ptr->next_student;
        counter--;
    }
    while (ref_ptr)
    {
        main_ptr = main_ptr->next_student;
        ref_ptr = ref_ptr->next_student;
    }
    if (main_ptr)
    {
        printf("\n Record Number %d ", index);
        printf("\n ID : %d", main_ptr->student_data.Id);
        printf("\n Name: %s", main_ptr->student_data.name);
        printf("\n Height : %f", main_ptr->student_data.height);
        return LinkedList_no_error;
    }
    else
        return Node_not_found;
}
LinkedList_Status Get_The_Middle()
{
    student_t *slow_ptr = gpFirstStudent;
    student_t *fast_ptr = gpFirstStudent;
    while (fast_ptr->next_student)
    {
        fast_ptr = fast_ptr->next_student->next_student;
        slow_ptr = slow_ptr->next_student;
    }
    printf("\n ID : %d", slow_ptr->student_data.Id);
    printf("\n Name: %s", slow_ptr->student_data.name);
    printf("\n Height : %f", slow_ptr->student_data.height);
    return LinkedList_no_error;
}
LinkedList_Status Reverse_List()
{
    student_t *prev_ptr = NULL;
    student_t *next_ptr = NULL;
    student_t *current_ptr = gpFirstStudent;
    if (gpFirstStudent == NULL)
    {
        printf("List is Empty");
        return LinkedList_null;
    }
    else
    {

        while (current_ptr)
        {
            next_ptr = current_ptr->next_student;
            current_ptr->next_student = prev_ptr;
            prev_ptr = current_ptr;
            current_ptr = next_ptr;
        }
        gpFirstStudent = prev_ptr;
        return LinkedList_no_error;
    }
}
