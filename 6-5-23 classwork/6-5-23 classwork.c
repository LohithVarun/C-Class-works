1) #include <stdio.h>

int main(){
	int a;
	printf("Enter lenght:\n");
	scanf("%d",&a);
	for (int i = 0; i<a; i++){
		for (int j = a;j>i;j--){
			printf(" ");			
		}
		for (int k = 0; k<=i; k++){
			if (k==0||k==i){
		        printf("* ");
		    } else{
		        printf("  ");
		    }
		}
		printf("\n");
	}
	for (int i = a-1; i>0; i--){
		for (int j = a;j>i;j--){
			printf(" ");			
		}
		for (int k = 0; k<i; k++){
		    if (k==0||k==i-1){
		        printf(" *");
		    } else{
		        printf("  ");
		    }
		}
		printf("\n");
	}
}

2) #include <stdio.h>

int main(){

	int a,b;

	printf("Enter lenght:\n");

	scanf("%d",&a);

	printf("Enter breadth:\n");

	scanf("%d",&b);

	for (int i = 0; i<a; i++){

		for (int j = 0;j<b;j++){

			if (i==0||j==0||i==a-1||j==b-1){

			    printf("*");

			} else {

			    printf(" ");

			}

	    }

	    printf("\n");

    }

}

3) #include <stdio.h>

int main(){

	int a;

	printf("Enter lenght:\n");

	scanf("%d",&a);

	for (int i = 0; i<a; i++){

		for (int j = a;j>i;j--){

			printf(" ");			

		}

		for (int k = 0; k<=i; k++){

			if (k==0||k==i||i==a-1){

		        printf("* ");

		    } else{

		        printf("  ");

		    }

		}

		printf("\n");

	}

}

4) #include <stdio.h>

int main(){

	int a;

	printf("Enter lenght:\n");

	scanf("%d",&a);

	for (int i = 0; i<a; i++){

		for (int k = 0; k<=i; k++){

			printf("* ");

		}

		printf("\n");

	}

}

5) #include <stdio.h>

int main(){

	int a;

	printf("Enter lenght:\n");

	scanf("%d",&a);

	for (int i = 0; i<a; i++){

		for (int j = a;j>i;j--){

			printf(" ");			

		}

		for (int k = 0; k<=i; k++){

			printf("* ");

		}

		printf("\n");

	}

}

6) #include <stdio.h>

#include <string.h>

int main(){

	char str[100];

	int vow = 0;

	printf("Enter string:");

	scanf("%s",str);

	for (int i=0;str[i];i++){

		if(str[i]=='a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){

			vow++;

		}

	}

	printf("Total number of vowels=%d\n",vow);

	return 0;

}
