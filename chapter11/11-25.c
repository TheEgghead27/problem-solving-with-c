/* prints components from the worker structure */
#include <stdio.h>
struct name {
    char last[20];
    char first[20];
};


struct str_addr {
    int housenumb;
    char street[20];
};


struct addr {
    struct str_addr street_address;
    char   city[30];
    char   state[3];
    char   zip[6];
};


struct employee {
    struct name empname;
    char   socsecnum[10];
    struct addr address;
};

void reademp(struct employee *);  // star after the struct name
void printemp(struct employee);


int main(void) {
    struct employee worker;

    reademp(&worker);
    printemp(worker);

    return 0;
}


void printemp(struct employee worker) {
    printf("%s %s\n", worker.empname.last, worker.empname.first);
    printf("%s\n", worker.socsecnum);
    printf("%d  %s \n", worker.address.street_address.housenumb, worker.address.street_address.street);
    printf("%s %s %s\n", worker.address.city, worker.address.state, worker.address.zip);
    return;
}


/* reads values into the structure pointed to by worker */
void reademp(struct employee *worker) {
    scanf("%s", worker -> empname.last);
    scanf("%s", worker -> empname.first);
    scanf("%s", worker -> socsecnum);
    scanf("%d", &worker -> address.street_address.housenumb);  // need to add the & because this is not inherently an array/pointer
    scanf("%s", worker -> address.street_address.street);
    scanf("%s", worker -> address.city);
    scanf("%s", worker -> address.state);
    scanf("%s", worker -> address.zip);
    return;
}