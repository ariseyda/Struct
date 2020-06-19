#include<stdio.h>
#include<string.h>

// struct

struct Tree {
	
	char name[20];
	int age;
	int lenght;
	char season[20];
}tree2;

int main(){
	
	struct Tree tree1={"Apple",300,3,"September"};
	printf("%s tree: They can live %d year.\nThey can be %dm.\nThey grow in %s.\n",tree1.name,tree1.age,tree1.lenght,tree1.season);
	
    /*Apple tree: They can live 300 year.
    They can be 3m.
    They grow in September.*/
    
    strcpy(tree2.name,"Olive");
    //We have to use "strcpy" function.
    //tree2.name="Olive";(We can't do this.)
    printf("%s:\n",tree2.name);
    printf("Enter age of tree:");
    scanf("%d",&tree2.age);
    printf("Enter lenght of tree:");
    scanf("%d",&tree2.lenght);
    printf("Enter season of tree:");
    scanf("%s",tree2.season);
    
    printf("Olive tree:\nThey can live %d year.\nThey can be %d m.\nThey planted in %s.",tree2.age,tree2.lenght,tree2.season);
    
    /*Olive tree:
    They can live 300 year.
    They can be 5 m.
    They planted in October.*/
	
	return 0;
}


