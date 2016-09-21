#include <stdio.h>
#include <math.h>
int main(void) {
	// your code goes here

	int input[10],encoded[10],i,num,tmp,r,decoded[10];
	printf("Enter the data\n");
    scanf("%d",&num);	
		tmp = num;
	  
if((num > 999 && num < 10000)){
	
	for(i=3;i>=0;i--){
        r=tmp%10;
        input[i]=r;
        tmp=tmp/10;
	}
  //Encoding
  for(i=0;i<4;i++){
  tmp= (i+2)%4;
	encoded[i]= (input[tmp]+7)%10; 
	}
  
  //Decoding
  for(i=0;i<4;i++){
  tmp= (i+2)%4;
    decoded[i]=(encoded[tmp]-7+10)%10; 
	}
  

}else{printf("Error: Invalid Input!"); exit();}


//Print the array below:
printf("Original: ");
for( i=0;i<4;i++) printf("%d ",input[i]);
printf("\nEncoded:  ");

for( i=0;i<4;i++) printf("%d ",encoded[i]);
printf("\nDecoded: ");
for( i=0;i<4;i++) printf("%d ",decoded[i]);



	return 0;
}

