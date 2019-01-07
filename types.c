#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ARRAYLENGTH 20
#define bool int
#define true 1
#define false 0
typedef struct variables
	{ 
	  char type[ARRAYLENGTH];
	  char value[ARRAYLENGTH];
	  char name[ARRAYLENGTH];
	}variable;
void Add(variable a,variable b);
void Subtract(variable a,variable b);
void Multiple(variable a,variable b);
void Divide(variable a,variable b);
void Equal(variable a,variable b);
void Assign(variable a,variable b);
int equals(char a[ARRAYLENGTH],char b[ARRAYLENGTH]);
int main()
{
    int exit=false;
    int found=false;
	printf("_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n");
	printf("__________________________________________________________\n");
	printf("In this programme you can give variables and \ni will make calculations for you depending on your choices\n ");
	printf("the types that you can use are:  \n \tInteger (= akeraioi)\n \tDecimal (= dekadikoi)\n \tString (= dianysmata xarakthrwn)\n \tBoolean (= True/False)\n");
	printf("__________________________________________________________\n");
	printf("_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n");
	printf("__________________________________________________________\n");
    int variable1thesi;
    int variable2thesi;
	char variablename1[ARRAYLENGTH];
    char variablename2[ARRAYLENGTH];
	int choice_type,i;
	int n =0;
	int plhthos=0;
	printf("how many variables do you want ??\n");
	scanf("%d",&plhthos);
    variable record[plhthos];
    printf("___________________So let's go to insert the variables! ____________________\n");
    printf("************************************************************************\n");
    for(i=0;i<plhthos;i++)
	{
		printf("-give the name of the %d variable please\n",i+1);
		scanf("%s",&(record[i].name));
		
		printf("*****  give the type of the variable please,you want to insert 1-4  *****\n");
		printf("the types that you can use are:  \n \t1.Integer (= akeraioi)\n \t2.Decimal (= dekadikoi)\n \t3.String (= dianysmata xarakthrwn)\n \t4.Boolean (= True/False)\n");
		scanf("%d",&choice_type);
		switch (choice_type)
		
		{
			case 1 ://akeraioi
		    	printf("-give the value of the %d variable please\n",i+1);
				scanf("%s",&(record[i].value));///s h d???
				strcpy(record[i].type,"int");
		    break; 
		    case 2 ://dekadikoi
		    	printf("-give the value of the %d variable please\n",i+1);
				scanf("%s",&(record[0].value));
				strcpy(record[i].type,"float");
	        break;
		    case 3 ://String
			  	printf("-give the value of the %d variable please\n",i+1);
				scanf("%s",&(record[i].value));
				strcpy(record[i].type,"String");
		    break;
		    case 4 ://BOOLEAN
			  	printf("-give the value of the %d variable please\n",i+1);
				scanf("%s",&(record[i].value));
				strcpy(record[i].type,"boolean");
		    break;
		    default : 
		    printf("sorry,you didn't give the right type");
	        break; 
		} 	
		
    }
    do {
   	printf("__________________________________________________________\n");
    printf("now you will choose the name of the arithmetic operation and the two variables\n directions:\n\t Οι επιτρεπόμενες πράξεις μεταξύ 2 μεταβλητών θα είναι:\n");
	printf("	__Add__\n");
	
	
	printf("-   Επιτρεπτή μεταξύ όλων των τύπων μεταβλητών εκτός από την περίπτωση\n");
	printf("όπου μόνο μία εκ των δύο είναι Boolean. Ειδικά στην περίπτωση που μία\n");
	printf("μεταβλητή είναι τύπου String, θα επιστρέφει String, τοποθετώντας τις δύο\n");
	printf("μεταβλητές στη σειρά, σα να ήταν και οι 2 Strings. Στην περίπτωση που\n");
	printf("είναι και οι δύο τύπου Boolean, θα εκτελεί το λογικό ΚΑΙ.\n");
	printf("___Subtract___\n");
	printf("-   Μη επιτρεπτή για String και Boolean\n");
	printf("___Multiple____\n");
	printf("Επιτρεπτή μεταξύ όλων των τύπων μεταβλητών εκτός από την περίπτωση\n");
	printf("που έχουμε Boolean ή Strings με την ακόλουθη εξαίρεση:\n");
	printf("--    Ειδικά στην περίπτωση που η δεύτερη μεταβλητή είναι τύπου\n");
	printf("String και η πρώτη τύπου Integer, θα επιστρέφει το String της\n");
	printf("δεύτερης επαναλαμβανόμενο τόσες φορές όσες και η τιμή του\n");
	printf("Integer της πρώτης.\n");
	printf("___Divide___\n");
	printf("-   Μη επιτρεπτή για String και Boolean\n");
	printf("___Equal___ (ελέγχει αν δύο μεταβλητές είναι ίδιου τύπου και έχουν ίδια τιμή και\n");
	printf("επιστρέφει True ή False)\n");
	printf("-   Επιτρεπτή μεταξύ όλων των τύπων μεταβλητών\n");
	printf("___Assign___ (Αναθέτει τον τύπο και την τιμή της 2ης μεταβλητής στην πρώτη)\n");
	printf("-   Επιτρεπτή μεταξύ όλων των τύπων μεταβλητών\n");
	printf("__________________________________________________________\n");
    printf("************************************************************************");
    printf("__________________Now let's choose the name of the arithmetic operation that you want to do__________________\n ");
    printf("write 1-6:\n1 for Add \n2 for Subtract\n3 for Multiple\n4 for divide\n5 for Equal\n6 for Assign\n");
    printf("************************************************************************\n");
    int operation=0;
    scanf("%d",&operation);
    switch(operation) {
		case 1:
	    while(!found) {
          printf("Give the name of the first variable:");
          scanf("%s",&variablename1);
          for(i=0;i<plhthos;i++) {
             if (strcmp(variablename1,record[i].name) == 0) {
                   variable1thesi=i;
                   found=true;                                  
                   break;                                 
             }        
          }
          if (!found)
          printf("The variable name you gave does not exist try again!\n");            
        }
        found=false;
        while(!found) {
          printf("Give the name of the second variable:");
          scanf("%s",&variablename2);
          for(i=0;i<plhthos;i++) {
             if (strcmp(variablename2,record[i].name) == 0) {
                   variable2thesi=i;
                   found=true;                                  
                   break;                                 
             }        
          }
          if (!found)
          printf("The variable name you gave does not exist try again!\n");            
        }
        Add(record[variable1thesi],record[variable2thesi]);
	    break; 
	    case 2:
	    while(!found) {
          printf("Give the name of the first variable:");
          scanf("%s",&variablename1);
          for(i=0;i<plhthos;i++) {
             if (strcmp(variablename1,record[i].name) == 0) {
                   variable1thesi=i;
                   found=true;                                  
                   break;                                 
             }        
          }
          if (!found)
          printf("The variable name you gave does not exist try again!\n");            
        }
        found=false;
        while(!found) {
          printf("Give the name of the second variable:");
          scanf("%s",&variablename2);
          for(i=0;i<plhthos;i++) {
             if (strcmp(variablename2,record[i].name) == 0) {
                   variable2thesi=i;
                   found=true;                                  
                   break;                                 
             }        
          }
          if (!found)
          printf("The variable name you gave does not exist try again!\n");            
        }
        Subtract(record[variable1thesi],record[variable2thesi]);
        break;
	    case 3 :
	    while(!found) {
          printf("Give the name of the first variable:");
          scanf("%s",&variablename1);
          for(i=0;i<plhthos;i++) {
             if (strcmp(variablename1,record[i].name) == 0) {
                   variable1thesi=i;
                   found=true;                                  
                   break;                                 
             }        
          }
          if (!found)
          printf("The variable name you gave does not exist try again!\n");            
        }
        found=false;
        while(!found) {
          printf("Give the name of the second variable:");
          scanf("%s",&variablename2);
          for(i=0;i<plhthos;i++) {
             if (strcmp(variablename2,record[i].name) == 0) {
                   variable2thesi=i;
                   found=true;                                  
                   break;                                 
             }        
          }
          if (!found)
          printf("The variable name you gave does not exist try again!\n");            
        }
        Multiple(record[variable1thesi],record[variable2thesi]); 
	    break;
	    case 4 :
	    while(!found) {
          printf("Give the name of the first variable:");
          scanf("%s",&variablename1);
          for(i=0;i<plhthos;i++) {
             if (strcmp(variablename1,record[i].name) == 0) {
                   variable1thesi=i;
                   found=true;                                  
                   break;                                 
             }        
          }
          if (!found)
          printf("The variable name you gave does not exist try again!\n");            
        }
        found=false;
        while(!found) {
          printf("Give the name of the second variable:");
          scanf("%s",&variablename2);
          for(i=0;i<plhthos;i++) {
             if (strcmp(variablename2,record[i].name) == 0) {
                   variable2thesi=i;
                   found=true;                                  
                   break;                                 
             }        
          }
          printf("The variable name you gave does not exist try again!\n");            
        }
        Divide(record[variable1thesi],record[variable2thesi]);
	    break; 
	    case 5 :
	    while(!found) {
          printf("Give the name of the first variable:");
          scanf("%s",&variablename1);
          for(i=0;i<plhthos;i++) {
             if (strcmp(variablename1,record[i].name) == 0) {
                   variable1thesi=i;
                   found=true;                                  
                   break;                                 
             }        
          }
          if (!found)
          printf("The variable name you gave does not exist try again!\n");            
        }
        found=false;
        while(!found) {
          printf("Give the name of the second variable:");
          scanf("%s",&variablename2);
          for(i=0;i<plhthos;i++) {
             if (strcmp(variablename2,record[i].name) == 0) {
                   variable2thesi=i;
                   found=true;                                  
                   break;                                 
             }        
          }
          if (!found)
          printf("The variable name you gave does not exist try again!\n");            
        }
        Equal(record[variable1thesi],record[variable2thesi]);
	    break; 
	    case 6 :
	    while(!found) {
          printf("Give the name of the first variable:");
          scanf("%s",&variablename1);
          for(i=0;i<plhthos;i++) {
             if (strcmp(variablename1,record[i].name) == 0) {
                   variable1thesi=i;
                   found=true;                                  
                   break;                                 
             }        
          }
          if (!found)
          printf("The variable name you gave does not exist try again!\n");            
        }
        found=false;
        while(!found) {
          printf("Give the name of the second variable:");
          scanf("%s",&variablename2);
          for(i=0;i<plhthos;i++) {
             if (strcmp(variablename2,record[i].name) == 0) {
                   variable2thesi=i;
                   found=true;                                  
                   break;                                 
             }        
          }
          if (!found)
          printf("The variable name you gave does not exist try again!\n");            
        }
        Assign(record[variable1thesi],record[variable2thesi]);
	    break; 
	    default : 
	    printf("sorry,you didn't give the right");
        break; 
        }
       int userinput=0;
       found=false;
       printf("Type:\n1. if you want to try another arithmetic operation\n2. if you want to exit the program :-(");
       scanf("%d",&userinput);
       if (userinput == 1)
         exit=false;
       else if (userinput == 2)
         exit=true;
     } while (exit != true);
    
    
	return 0;
}

int equals(char a[ARRAYLENGTH],char b[ARRAYLENGTH]){
    
    if (strcmp(a,b) == 0)
      return 1;
    else
       return 0;
};

void Add(variable a,variable b) {
     if (equals(a.type,"int") && equals(b.type,"int")) {
         int v1=atoi(a.value);
         int v2=atoi(b.value);
         printf("Result Type:Integer,value:%d",v1+v2);                     
     }
     else if (equals(b.type,"int") && equals(a.type,"int")) {
         int v1=atoi(b.value);
         int v2=atoi(a.value);
         printf("Result Type:Integer,value:%d",v1+v2);    
     }
     else if (equals(a.type,"int") && equals(b.type,"float")) {
         int v1=atoi(a.value);
         float v2=atof(b.value); 
         printf("Result Type:Decimal,value:%f",(float)v1+v2); 
     }
     else if (equals(a.type,"float") && equals(b.type,"int")) {
         float v1=atof(a.value);
         int v2=atoi(b.value); 
         printf("Result Type:Decimal,value:%f",v1+(float)v2);  
     }
     else if (equals(a.type,"int") && equals(b.type,"String")) {
         printf("Result Type:String, value:%s%s",a.value,b.value); 
     }
     else if (equals(a.type,"String") && equals(b.type,"int")) {
         printf("Result Type:String, value:%s%s",a.value,b.value);   
     }
     else if (equals(a.type,"int") && equals(b.type,"boolean")) { //
        printf("Cannot Add variables only one variable boolean\n");  
     }
     else if (equals(a.type,"boolean") && equals(b.type,"int")) { //
        printf("Cannot Add variables only one variable boolean\n");   
     }
     else if (equals(a.type,"float") && equals(b.type,"boolean")) { //
        printf("Cannot Add variables only one variable boolean\n");   
     }
     else if (equals(a.type,"boolean") && equals(b.type,"float")) { //
        printf("Cannot Add variables only one variable boolean\n");   
     }
     else if (equals(a.type,"boolean") && equals(b.type,"String")) { //
        printf("Cannot Add variables only one variable boolean\n");   
     }
     else if (equals(a.type,"String") && equals(b.type,"boolean")) { //
        printf("Cannot Add variables only one variable boolean\n");   
     }
     else if (equals(a.type,"boolean") && equals(b.type,"boolean")) {
        if (equals(a.value,"true") && equals(b.value,"true"))
          printf("Result Type:Boolean,value:true\n");
          else
          printf("Result Type:Boolean,value:false\n");  
     }
     else if (equals(a.type,"float") && equals(b.type,"float")) {
         float v1=atof(a.value);
         float v2=atof(b.value); 
         printf("Result Type:Decimal,value:%f\n",v1+v2);  
     }
     else if (equals(a.type,"String") && equals(b.type,"String")) {
        printf("Result:String,value:%s%s\n",a.value,b.value);     
     }
     else if (equals(b.type,"String") && equals(a.type,"String")) {
        printf("Result:String,value:%s%s\n",b.value,a.value);  
     }
};

void Subtract(variable a,variable b){
     if (equals(a.type,"int") && equals(b.type,"int")) {
         int v1=atoi(a.value);
         int v2=atoi(b.value);
         printf("Result Type:Integer,value:%d\n",v1-v2);                     
     }
     else if (equals(b.type,"int") && equals(a.type,"int")) {
         int v1=atoi(b.value);
         int v2=atoi(a.value);
         printf("Result Type:Integer,value:%d\n",v1-v2);    
     }
     else if (equals(a.type,"int") && equals(b.type,"float")) {
         int v1=atoi(a.value);
         float v2=atof(b.value); 
         printf("Result Type:Decimal,value:%f\n",(float)v1-v2); 
     }
     else if (equals(a.type,"float") && equals(b.type,"int")) {
         float v1=atof(a.value);
         int v2=atoi(b.value); 
         printf("Result Type:Decimal,value:%f\n",v1-(float)v2);  
     }
     else if (equals(a.type,"int") && equals(b.type,"String")) {
         printf("Result Type:String, value:%s%s\n",a.value,b.value); 
     }
     else if (equals(a.type,"String") && equals(b.type,"int")) {
         printf("Result Type:String, value:%s%s\n",a.value,b.value);   
     }
     else if (equals(a.type,"int") && equals(b.type,"boolean")) { //
        printf("Cannot Subtract variables\n");  
     }
     else if (equals(a.type,"boolean") && equals(b.type,"int")) { //
        printf("Cannot Subtract variables\n");   
     }
     else if (equals(a.type,"float") && equals(b.type,"boolean")) { //
        printf("Cannot Subtract variables\n");   
     }
     else if (equals(a.type,"boolean") && equals(b.type,"float")) { //
        printf("Cannot Subtract variables\n");   
     }
     else if (equals(a.type,"boolean") && equals(b.type,"String")) { //
        printf("Cannot Subtract variables\n");   
     }
     else if (equals(a.type,"String") && equals(b.type,"boolean")) { //
        printf("Cannot Subtract variables\n");   
     }
     else if (equals(a.type,"boolean") && equals(b.type,"boolean")) {
        printf("Cannot Subtract variables\n"); 
     }
     else if (equals(a.type,"float") && equals(b.type,"float")) {
         float v1=atof(a.value);
         float v2=atof(b.value); 
         printf("Result Type:Decimal,value:%f",v1-v2);  
     }
     else if (equals(a.type,"String") && equals(b.type,"String")) {
        printf("Cannot Subtract variables");   
     }
     else if (equals(b.type,"String") && equals(a.type,"String")) {
        printf("Cannot Subtract variables");   
     }
     };
void Multiple(variable a,variable b) {
     if (equals(a.type,"int") && equals(b.type,"int")) {
         int v1=atoi(a.value);
         int v2=atoi(b.value);
         printf("Result Type:Integer,value:%d",v1*v2);                     
     }
     else if (equals(b.type,"int") && equals(a.type,"int")) {
         int v1=atoi(b.value);
         int v2=atoi(a.value);
         printf("Result Type:Integer,value:%d",v1*v2);    
     }
     else if (equals(a.type,"int") && equals(b.type,"float")) {
         int v1=atoi(a.value);
         float v2=atof(b.value); 
         printf("Result Type:Decimal,value:%f",(float)v1*v2); 
     }
     else if (equals(a.type,"float") && equals(b.type,"int")) {
         float v1=atof(a.value);
         int v2=atoi(b.value); 
         printf("Result Type:Decimal,value:%f",v1*(float)v2);  
     }
     else if (equals(a.type,"int") && equals(b.type,"String")) {
          printf("Result:String,value:");
          int i;
          for(i=0;i<atoi(a.value);i++)
            printf("%s",b.value);
            
          printf("\n");
     }
     else if (equals(a.type,"String") && equals(b.type,"int")) {
           printf("Cannot Multiply variables\n");
     }
     else if (equals(a.type,"int") && equals(b.type,"boolean")) { //
        printf("Cannot Multiply variables");  
     }
     else if (equals(a.type,"boolean") && equals(b.type,"int")) { //
        printf("Cannot Multiply variables");   
     }
     else if (equals(a.type,"float") && equals(b.type,"boolean")) { //
        printf("Cannot Multiply variables");   
     }
     else if (equals(a.type,"boolean") && equals(b.type,"float")) { //
        printf("Cannot Multiply variables");   
     }
     else if (equals(a.type,"boolean") && equals(b.type,"String")) { //
        printf("Cannot Multiply variables");   
     }
     else if (equals(a.type,"String") && equals(b.type,"boolean")) { //
        printf("Cannot Multiply variables");   
     }
     else if (equals(a.type,"boolean") && equals(b.type,"boolean")) {
        printf("Cannot Multiply variables");  
     }
     else if (equals(a.type,"float") && equals(b.type,"float")) {
         float v1=atof(a.value);
         float v2=atof(b.value); 
         printf("Result Type:Decimal,value:%f",v1+v2);  
     }
     else if (equals(a.type,"String") && equals(b.type,"String")) {
          printf("Cannot Multiply variables");   
     }
     else if (equals(b.type,"String") && equals(a.type,"String")) {
          printf("Cannot Multiply variables");  
     }
};
void Divide(variable a,variable b) {
     if (equals(a.type,"int") && equals(b.type,"int")) {
         int v1=atoi(a.value);
         int v2=atoi(b.value);
         if (b.value != 0)
         printf("Result Type:Integer,value:%d",v1/v2);
         else
         printf("Divide by zero\n");                     
     }
     else if (equals(b.type,"int") && equals(a.type,"int")) {
         int v1=atoi(b.value);
         int v2=atoi(a.value);
         if (a.value != 0)
         printf("Result Type:Integer,value:%d",v1/v2);
         else
         printf("Divide by zero\n");    
     }
     else if (equals(a.type,"int") && equals(b.type,"float")) {
         int v1=atoi(a.value);
         float v2=atof(b.value); 
         if (b.value != 0)
         printf("Result Type:Decimal,value:%f",(float)v1/v2);
         else
         printf("Divide by zero\n"); 
     }
     else if (equals(a.type,"float") && equals(b.type,"int")) {
         float v1=atof(a.value);
         int v2=atoi(b.value); 
         if (b.value != 0)
         printf("Result Type:Decimal,value:%f",v1/(float)v2);
         else
         printf("Divide by zero\n");  
     }
     else if (equals(a.type,"int") && equals(b.type,"String")) {
         printf("Cannot Divide variables\n"); 
     }
     else if (equals(a.type,"String") && equals(b.type,"int")) {
         printf("Cannot Divide variables\n");  
     }
     else if (equals(a.type,"int") && equals(b.type,"boolean")) { 
       printf("Cannot Divide variables\n"); 
     }
     else if (equals(a.type,"boolean") && equals(b.type,"int")) { 
        printf("Cannot Divide variables\n");   
     }
     else if (equals(a.type,"float") && equals(b.type,"boolean")) { 
        printf("Cannot Divide variables\n");    
     }
     else if (equals(a.type,"boolean") && equals(b.type,"float")) { 
        printf("Cannot Divide variables\n");    
     }
     else if (equals(a.type,"boolean") && equals(b.type,"String")) { 
        printf("Cannot Divide variables\n");    
     }
     else if (equals(a.type,"String") && equals(b.type,"boolean")) { 
       printf("Cannot Divide variables\n");    
     }
     else if (equals(a.type,"boolean") && equals(b.type,"boolean")) {
       printf("Cannot Divide variables\n"); 
     }
     else if (equals(a.type,"float") && equals(b.type,"float")) {
         float v1=atof(a.value);
         float v2=atof(b.value); 
         if (b.value != 0)
         printf("Result Type:Decimal,value:%f",v1/v2);
         else
         printf("Divide by zero\n");  
     }
     else if (equals(a.type,"String") && equals(b.type,"String")) {
         printf("Cannot Divide variables\n");    
     }
     else if (equals(b.type,"String") && equals(a.type,"String")) {
        printf("Cannot Divide variables\n"); 
     }
   };
void Equal(variable a,variable b) {
      if (equals(a.type,"int") && equals(b.type,"int")) {
              
             if (a.value == b.value)
               printf("Result:Boolean, value:true\n");
               else
               printf("Result:Boolean, value:false\n");               
     }
     else if (equals(b.type,"int") && equals(a.type,"int")) {
           if (b.value == a.value)
               printf("Result:Boolean, value:true\n");
               else
               printf("Result:Boolean, value:false\n");  
     }
     else if (equals(a.type,"int") && equals(b.type,"float")) {
            printf("Result:Boolean, value:false\n"); 
     }
     else if (equals(a.type,"float") && equals(b.type,"int")) {
         printf("Result:Boolean, value:false\n"); 
     }
     else if (equals(a.type,"int") && equals(b.type,"String")) {
        printf("Result:Boolean, value:false\n"); 
     }
     else if (equals(a.type,"String") && equals(b.type,"int")) {
        printf("Result:Boolean, value:false\n"); 
     }
     else if (equals(a.type,"int") && equals(b.type,"boolean")) { 
       printf("Result:Boolean, value:false\n"); 
     }
     else if (equals(a.type,"boolean") && equals(b.type,"int")) { 
        printf("Result:Boolean, value:false\n"); 
     }
     else if (equals(a.type,"float") && equals(b.type,"boolean")) { 
           printf("Result:Boolean, value:false\n"); 
     }
     else if (equals(a.type,"boolean") && equals(b.type,"float")) { 
          printf("Result:Boolean, value:false\n"); 
     }
     else if (equals(a.type,"boolean") && equals(b.type,"String")) { 
           printf("Result:Boolean, value:false\n"); 
     }
     else if (equals(a.type,"String") && equals(b.type,"boolean")) { 
         printf("Result:Boolean, value:false\n"); 
     }
     else if (equals(a.type,"boolean") && equals(b.type,"boolean")) {
               if (a.value == b.value)
               printf("Result:Boolean, value:true\n");
               else
               printf("Result:Boolean, value:false\n");
     }
     else if (equals(a.type,"float") && equals(b.type,"float")) {
           if (a.value == b.value)
               printf("Result:Boolean, value:true\n");
               else
               printf("Result:Boolean, value:false\n");
     }
     else if (equals(a.type,"String") && equals(b.type,"String")) {
           if (equals(a.value,b.value))
              printf("Result:Boolean, value:true\n");
               else
               printf("Result:Boolean, value:false\n");
     }
     else if (equals(b.type,"String") && equals(a.type,"String")) {
          if (equals(b.value,a.value))
              printf("Result:Boolean, value:true\n");
               else
               printf("Result:Boolean, value:false\n");
     }
     };
     
void Assign(variable a,variable b) {
       if (equals(a.type,"int") && equals(b.type,"int")) {
           strcpy(a.value,b.value);   
     }
     else if (equals(b.type,"int") && equals(a.type,"int")) {
          strcpy(b.value,a.value);
     }
     else if (equals(a.type,"int") && equals(b.type,"float")) {
          strcpy(a.type,b.type); 
          strcpy(a.value,b.value); 
     }
     else if (equals(a.type,"float") && equals(b.type,"int")) {
          strcpy(a.type,b.type); 
          strcpy(a.value,b.value); 
     }
     else if (equals(a.type,"int") && equals(b.type,"String")) {
          strcpy(a.type,b.type); 
          strcpy(a.value,b.value); 
     }
     else if (equals(a.type,"String") && equals(b.type,"int")) {
          strcpy(a.type,b.type); 
          strcpy(a.value,b.value); 
     }
     else if (equals(a.type,"int") && equals(b.type,"boolean")) { 
          strcpy(a.type,b.type); 
          strcpy(a.value,b.value); 
     }
     else if (equals(a.type,"boolean") && equals(b.type,"int")) { 
          strcpy(a.type,b.type); 
          strcpy(a.value,b.value); 
     }
     else if (equals(a.type,"float") && equals(b.type,"boolean")) { 
          strcpy(a.type,b.type); 
          strcpy(a.value,b.value); 
     }
     else if (equals(a.type,"boolean") && equals(b.type,"float")) { 
          strcpy(a.type,b.type); 
          strcpy(a.value,b.value); 
     }
     else if (equals(a.type,"boolean") && equals(b.type,"String")) { 
          strcpy(a.type,b.type); 
          strcpy(a.value,b.value); 
     }
     else if (equals(a.type,"String") && equals(b.type,"boolean")) { 
         strcpy(a.type,b.type); 
          strcpy(a.value,b.value); 
     }
     else if (equals(a.type,"boolean") && equals(b.type,"boolean")) { 
          strcpy(a.value,b.value);    
     }
     else if (equals(a.type,"float") && equals(b.type,"float")) { 
          strcpy(a.value,b.value); 
     }
     else if (equals(b.type,"float") && equals(a.type,"float")) {
          strcpy(b.value,a.value);     
     }
     else if (equals(a.type,"String") && equals(b.type,"String")) {
           strcpy(a.value,b.value); 
     }
     else if (equals(b.type,"String") && equals(a.type,"String")) {
           strcpy(b.value,a.value); 
     }
     
     };




