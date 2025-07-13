#include <stdio.h>


struct Patient {
    char name[100];
    int id;
    char address[200];
    char mobile[20];
    char doctor[100];
};

int main() {
    struct Patient p;

    printf("------ Hospital Management System ------\n");

    printf("Enter Patient Name: ");
    fgets(p.name, sizeof(p.name), stdin);

    printf("Enter Patient ID: ");
    scanf("%d", &p.id);
    getchar(); 

    printf("Enter Patient Address: ");
    fgets(p.address, sizeof(p.address), stdin);

    printf("Enter Patient Mobile Number: ");
    fgets(p.mobile, sizeof(p.mobile), stdin);

    printf("Enter Doctor Name: ");
    fgets(p.doctor, sizeof(p.doctor), stdin);

    printf("\n--- Submitted Successfully! ---\n");
    printf("\n------ Patient Details ------\n");
    
    printf("Name        : %s", p.name);
    printf("ID          : %d\n", p.id);
    printf("Address     : %s", p.address);
    printf("Mobile No.  : %s", p.mobile);
    printf("Doctor Name : %s", p.doctor);


}    return 0;
