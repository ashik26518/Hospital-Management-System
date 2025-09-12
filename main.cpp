#include <stdio.h>
#include <string.h>

struct Patient {
    char name[100];
    int id;
    int age;
    char gender[10];
    char address[200];
    char mobile[20];
    char doctor[100];
    char reference[200];
    float totalAmount;
    float discount;
    float dueAmount;
};

int main() {
    struct Patient p;

    printf("------ Hospital Management System ------\n");

    printf("Enter Patient Name: ");
    fgets(p.name, sizeof(p.name), stdin);

    printf("Enter Patient ID: ");
    scanf("%d", &p.id);
    getchar();

    printf("Enter Patient Age: ");
    scanf("%d", &p.age);
    getchar();

    printf("Enter Patient Gender: ");
    fgets(p.gender, sizeof(p.gender), stdin);

    printf("Enter Patient Address: ");
    fgets(p.address, sizeof(p.address), stdin);

    printf("Enter Patient Mobile Number: ");
    fgets(p.mobile, sizeof(p.mobile), stdin);

    printf("Enter Doctor Name: ");
    fgets(p.doctor, sizeof(p.doctor), stdin);

    printf("Enter Reference Analysis: ");
    fgets(p.reference, sizeof(p.reference), stdin);

    printf("Enter Total Amount: ");
    scanf("%f", &p.totalAmount);

    printf("Enter Discount Amount: ");
    scanf("%f", &p.discount);

    
    p.dueAmount = p.totalAmount - p.discount;

    printf("\n--- Submitted Successfully! ---\n");

    printf("\n------ Patient Details ------\n");
    printf("Name             : %s", p.name);
    printf("ID               : %d\n", p.id);
    printf("Age              : %d\n", p.age);
    printf("Gender           : %s", p.gender);
    printf("Address          : %s", p.address);
    printf("Mobile No.       : %s", p.mobile);
    printf("Doctor Name      : %s", p.doctor);
    printf("Reference        : %s", p.reference);
    printf("Total Amount     : %.2f\n", p.totalAmount);
    printf("Discount         : %.2f\n", p.discount);
    printf("Due Amount       : %.2f\n", p.dueAmount);

    return 0;
}
