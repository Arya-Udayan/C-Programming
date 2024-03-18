#include<stdio.h>
int i;
struct book{
char author_name[20];
char book_name[20];
};
struct book *b;
void readArray(){

for(i=0;i<3;i++){
printf("Enter the book_name:");
scanf("%s", &b[i].book_name);
printf("Enter the author_name:");
scanf("%s", &b[i].author_name);
}
}
void dispArray(){
int i;
printf("*****Book Details******\n");
for(i=0;i<3;i++){
printf("Book_Name is %s\n Author_Name is %s\n",b[i].book_name,
b[i].author_name);
}
}
int main(){
int n=5;
b=(struct book*)calloc(n,sizeof(struct book));
readArray();
dispArray();
free(b);
return 0;
}
