#ifndef CLINIC_H
#define CLINIC_H

typedef struct p {
	 char gender[10];
	 char name[20];
	 int id;
	 int age;
	 int time;
	 struct p* next ;
}patient;

static patient* CreatNewPatient(int id , char* name, int age, char* gender , int time);

void search(int id);

void Add_new_patient_record(int id , char* name, int age, char* gender,int time);
	
void Edit_patient_record(int id); 

void Reserve_a_slot_with_the_doctor(int id);

void Cancel_reservation(int id);

void View_patient_record(int id);

void View_todays_reservations(int id);


#endif