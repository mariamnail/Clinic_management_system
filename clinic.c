#include "clinic.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

patient* head = NULL;
patient* tail = NULL;
patient* arr[5] = {NULL};
 
static patient* CreatNewPatient(int id , char* name, int age, char* gender , int time){
	patient* ptr = (patient*) malloc(sizeof(patient));
	ptr->id = id;
	strcpy(ptr->name , name);
	ptr->age = age;
	strcpy(ptr->gender , gender);
	ptr->time = time;
	
	return ptr;
}

void Add_new_patient_record(int id , char* name, int age, char* gender,int time)
{
	patient* NewPatient = CreatNewPatient(id ,name, age,gender,time);
	
	if(head == NULL)
		head = NewPatient;
	else
		tail->next = NewPatient;
	
	tail = NewPatient;
	tail->next = NULL;
}

void Edit_patient_record(int id)
{
    patient* temp = head;
	while(temp!=NULL){
		
		if(temp->id==id){
			printf("Record with id number %d Found\n", id);
			printf("Enter new name: ");
			scanf("%s", temp->name);
			printf("Enter new age: ");
			scanf("%d", &(temp->age));
			printf("Enter new gender: ");
			scanf("%s",temp->gender);
			printf("Updation Successful\n");
			return;
		}
		temp = temp->next;
		
	}
	printf("Patient with id number %d is not found\n", id);
}

void View_patient_record(int id){
	patient* current = head;
   
		while(current != NULL)
		{   if(current->id==id){
	        //printf("Patient ID: %d\n",current->id);
			printf("Patient name: %s\n",current->name);
			printf("Patient age: %d\n",current->age);
			printf("Patient gender: %s\n",current->gender);
			printf("Patient reservation: %d\n",current->time);
			
		}
		current = current->next;
		}	
		printf("\n");

	//printf("This id is not found");	
	}

void  Reserve_a_slot_with_the_doctor(int id){
	patient* TIME = head;
	int choice;
	TIME->id=id;
	if(arr[0]==NULL){
	printf("Please enter 1 to reseve a slot from 2pm to 2:30pm.\n ");}
	if(arr[1]==NULL){
	printf("Please enter 2 to reseve a slot from 2:30pm to 3pm.\n ");}	
	if(arr[2]==NULL){
	printf("Please enter 3 to reseve a slot from 3pm to 3:30pm.\n ");}
	if(arr[3]==NULL){
	printf("Please enter 4 to reseve a slot from 4pm to 4:30pm.\n ");}
	if(arr[4]==NULL){
	printf("Please enter 5 to reseve a slot from 4:30pm to 5pm.\n ");}
	
	printf("To Reserve a slot with the doctor :");
	scanf("%d",&choice);
	if(choice==1){
		if(arr[0]==NULL){
		TIME->time = choice;
		arr[0]=TIME;
		printf("You reseve a slot from 2pm to 2:30pm");
	}
	else{
	printf("This is not available ");
	}}
	 
   if(choice==2){
		if(arr[1]==NULL){
		TIME->time = choice;
		arr[1]=TIME;
		printf("You reseve a slot from 2:30pm to 3pm");
		}
	    else{
			printf("This is not available ");
		}
	}
	if(choice==3){
		if(arr[2]==NULL){
		TIME->time = choice;
		arr[2]==TIME;
		printf("You reseve a slot from 3pm to 3:30pm");
		}
		else{
			printf("This is not available ");
	}}
	
	if(choice==4){
		if(arr[3]==NULL){
		TIME->time = choice;
		arr[3]=TIME;
		printf("You reseve a slot from 4pm to 4:30pm");
		}
		else{
			printf("This is not available ");
		}
	}
	if(choice==5){
		if(arr[4]==NULL){
		TIME->time = choice;
		arr[4]=TIME;
		printf("You reseve a slot from 4:30pm to 5pm");
		}
		else{
			printf("This is not available ");
	}}
}
	            
void Cancel_reservation(int id){
	patient* temp = head;
	while(temp!=NULL){
		if(temp->id==id){
			printf("Paitent Id", id);
			printf("Paitent name: %s\n ",temp->name);
			printf("Patient age: %d\n ",temp->age);
			printf("Paitent gender: %s\n ",temp->gender);
			if(temp->time==1)
			{
				arr[0]=NULL;
			}
			else if(temp->time==2)
			{
				arr[1]=NULL;
			}
			else if(temp->time==3)
			{
				arr[2]=NULL;
			}
			else if(temp->time==4)
			{
				arr[3]=NULL;
			}
			else if(temp->time==5)
			{
				arr[4]=NULL;
			}
            printf("Reservation of the patient cancel \n");
			return;
		}
		temp = temp->next;
	}
}

void View_todays_reservations(int id){
	patient* current = head;
	if(head == NULL)
		printf("Not Exist Elements. \n");
	else
	{
		while(current != NULL)
		{if(current->id == id){
			if (arr[0]!=NULL)
				{
			        printf("Reservation of the patient ID %d: from 2pm to 2:30pm\n",id);
				}
			if (arr[1]!=NULL)
				{
			        printf("Reservation of the patient ID %d : from  2:30pm to 3pm\n",id);
				}
			if (arr[2]!=NULL)
				{
			        printf("Reservation of the patient ID %d : from   3pm to 3:30pm\n",id);
				}
			if (arr[3]!=NULL)
				{
			        printf("Reservation of the patient ID %d : from   4pm to 4:30pm\n",id);
				}
			if (arr[4]!=NULL)
				{
			        printf("Reservation of the patient ID %d : from   4:30pm to 5pm\n",id);
				}
		}
			
			current = current->next;
		}
		
}}
	
				

