#include<stdio.h>
main(){
	//que 1
/*	int size;
    printf(" enter the size of array :");
    scanf("%d",&size);

    int arr[size],i,negative=0;

    printf(" enter the elements :\n");
    for(i=0;i<size;i++){
	printf("a[%d] = ", i);
    scanf("%d", &arr[i]);
    }

    printf(" negative elements are :");
    for(i=0;i<size;i++){
    	if(arr[i]<0){
    		
    		printf(" %d",arr[i]);
		}
	}*/
	
	//que 2 
	
/*	int rows,column;
	printf("enter no of rows :");
	scanf("%d",&rows);
	printf("enter no of column :");
	scanf("%d",&column);
	
	int y[rows][column];
	printf(" enter the array  elements :\n");
	
	int i,j,num;
	for(i=0;i<rows;i++){
		for(j=0;j<column;j++){
			printf("enter y[%d][%d] :",i,j);
			scanf("%d",&y[i][j]);
		}
		printf("\n");
	}
	
	printf("largest elements is :");
	for(i=0;i<rows;i++){
		for(j=0;j<column;j++){
			if(y[i][j]>num){
				num=y[i][j];
				
			}
		}
	}
	printf("%d",num);*/
	
	//que 3
	
	int rows,column;
	printf("enter no of rows :");
	scanf("%d",&rows);
	printf("enter no of column :");
	scanf("%d",&column);
	
	int y[rows][column],x[column][rows];
	printf(" enter the array  elements :\n");
	
	int i,j,transpose;
	
	
	for(i=0;i<rows;i++){
		for(j=0;j<column;j++){
			printf("enter y[%d][%d] :",i,j);
			scanf("%d",&y[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<rows;i++){
		for(j=0;j<column;j++){
	      x[j][i]=y[i][j];
    	}
    }
    for(i=0;i<column;i++){
		for(j=0;j<rows;j++){
	      printf("%d",x[i][j]);
    	}
    	printf("\n");
    }
    

    
	


    


}
