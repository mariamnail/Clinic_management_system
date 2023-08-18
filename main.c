#include "clinic.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int id;
	char name[20];
	int size = 1;
	int age;
	char gender[10];
	int choice,choice1;
	int pass;
	int time;
	
	printf("Welcome ^_^\n");
	printf("Please enter 1 for admin mode\n");
	printf("Please enter 2 for user mode\n");
	do {
	scanf("%d",&choice);
	switch(choice){
		case 1:
		printf("Please enter the password:");
		scanf("%d",&pass);
		if(pass == 1234){
		
		    printf("Enter 1 to add new patient\n");
	        printf("Enter 2 to edit patient information\n");
	        printf("Enter 3 to reserve a slot with the doctor\n");
	        printf("Enter 4 to cancel reservation\n");
			printf("Enter 0 to move to user mode\n");
            
			while(choice !=0){
            printf("\nEnter your choice:");
			scanf("%d",&choice);
	        
		        if(choice==1){
	            printf("Paitent ID:");
	            scanf("%d",&id);
		        printf("Paitent Name:");		
	            scanf("%s",name);
	            printf("Paitent Age:");
	            scanf("%d",&age);
	            printf("Paitent Gender:");
	            scanf("%s",gender);
	            Add_new_patient_record(id,name,age,gender,time);}	  			 
				else if(choice==2){
				printf("Paitent ID:");
	            scanf("%d",&id);
				Edit_patient_record(id);}
				else if(choice==3){ 
				printf("Paitent ID:");
	            scanf("%d",&id);
				Reserve_a_slot_with_the_doctor(id);}
				else if(choice==4){
				printf("Paitent ID:");
	            scanf("%d",&id);
				Cancel_reservation(id);
			}
			}
}
		else{
		printf("Password is incorrect ! You have two attempts left\n");
		printf("Please enter the password again:");
		scanf("%d",&pass);
            if(pass == 1234){
			
		     printf("Enter 1 to add new patient\n");
	        printf("Enter 2 to edit patient information\n");
	        printf("Enter 3 to reserve a slot with the doctor\n");
	        printf("Enter 4 to cancel reservation\n\n");
            printf("Enter 0 to move to user mode\n");			
			while(choice !=0){
            printf("\nEnter your choice:");
			scanf("%d",&choice);
	        if(choice==1){
	            printf("Paitent ID:");
	            scanf("%d",&id);
		        printf("Paitent Name:");		
	            scanf("%s",name);
	            printf("Paitent Age:");
	            scanf("%d",&age);
	            printf("Paitent Gender:");
	            scanf("%s",gender);
	            Add_new_patient_record(id,name,age,gender,time);}	  			 
				else if(choice==2){
				printf("Paitent ID:");
	            scanf("%d",&id);
				Edit_patient_record(id);}
				else if(choice==3){ 
				printf("Paitent ID:");
	            scanf("%d",&id);
				Reserve_a_slot_with_the_doctor(id);}
				else if(choice==4){
				printf("Paitent ID:");
	            scanf("%d",&id);
				Cancel_reservation(id);
			}
		    else {
				printf("Password is incorrect ! You have one attempts left the system is loked\n");
				printf("Please enter the password again:");
		        scanf("%d",&pass);
            if(pass == 1234){
		
		     printf("Enter 1 to add new patient\n");
	        printf("Enter 2 to edit patient information\n");
	        printf("Enter 3 to reserve a slot with the doctor\n");
	        printf("Enter 4 to cancel reservation\n");
			printf("Enter 0 to move to user mode\n");
			while(choice !=0){
            printf("\nEnter your choice:");
			scanf("%d",&choice);
	        if(choice==1){
	            printf("Paitent ID:");
	            scanf("%d",&id);
		        printf("Paitent Name:");		
	            scanf("%s",name);
	            printf("Paitent Age:");
	            scanf("%d",&age);
	            printf("Paitent Gender:");
	            scanf("%s",gender);
	            Add_new_patient_record(id,name,age,gender,time);}	  			 
				else if(choice==2){
				printf("Paitent ID:");
	            scanf("%d",&id);
				Edit_patient_record(id);}
				else if(choice==3){ 
				printf("Paitent ID:");
	            scanf("%d",&id);
				Reserve_a_slot_with_the_doctor(id);}
				else if(choice==4){
				printf("Paitent ID:");
	            scanf("%d",&id);
				Cancel_reservation(id);
			}
		}
	}
					
			
         else{
		    exit(0);
			}	}		
			
	}}}
		case 2:
			printf("Please enter 1 to view patient record\n");
			printf("Please enter 2 to view reservations of today\n");
			printf("Please enter 3 to move from user mode ");
			while(choice!=3){
			printf("\nEnter your choice:");
			scanf("%d",&choice);
			{
			if(choice==1){
			    printf("Paitent ID:");
	            scanf("%d",&id);
				View_patient_record(id);
			}
		    if(choice==2){
				View_todays_reservations(id);
			}		
		}}
	}} 
	    
        while (choice!= 0);
}
