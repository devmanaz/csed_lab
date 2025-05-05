#include <stdio.h> 
    void main(){
        int c,r,a[20][3],z1,z2;
        int ch;
        while(1){
            printf("\n\n1. Addition\n2.Transpose\n3.Exit\n");
            printf("Enter choice: ");
            scanf("%d",&ch);
            switch(ch){
                case(1):{
                    printf("\nMatrix A");
                    printf("\n--------");
                    printf("\n\nEnter column of matrix: ");
                    scanf("%d",&c);
                    printf("\nEnter row of matrix: ");
                    scanf("%d",&r);
                    printf("\nEnter number of non-zero elements: ");
                    scanf("%d",&z1);
                    a[0][0]=r;
                    a[0][1]=c;
                    a[0][2]=z1;
        
                    for(int i=1;i<=z1;i++){
                        printf("\nEnter row of non zero element: ");
                        scanf("%d",&a[i][0]);
                        printf("Enter column of non-zero element: ");
                        scanf("%d",&a[i][1]);
                        printf("Enter non zero-element element: ");
                        scanf("%d",&a[i][2]);
                    }

                    printf("\nArray implementation of Matrix A");
                    printf("\n-------------------------------");
                    for(int i=1;i<=z1;i++){
                        printf("\n%d %d %d",a[i][0],a[i][1],a[i][2]);
                    }

                    int r2,c2,b[20][3];
                    printf("\n\nMatrix B");
                    printf("\n--------");
                    printf("\n\nEnter column of matrix: ");
                    scanf("%d",&c2);
                    printf("Enter row of matrix: ");
                    scanf("%d",&r2);
                    printf("Enter number of non-zero elements: ");
                    scanf("%d",&z2);
                    b[0][0]=r2;
                    b[0][1]=c2;
                    b[0][2]=z2;
                    for(int i=1;i<=z2;i++){
                            printf("\n\nEnter row of non zero element: ");
                            scanf("%d",&b[i][0]);
                            printf("Enter column of non-zero element: ");
                            scanf("%d",&b[i][1]);
                            printf("Enter non zero-element element: ");
                            scanf("%d",&b[i][2]);
                    }

                    printf("\nArray implementation of Matrix B");
                    printf("\n-------------------------------"); 
                    for(int i=1;i<=z2;i++){
                        printf("\n%d %d %d",b[i][0],b[i][1],b[i][2]);
                    }

        
                    if(c!=c2 || r!=r2){
                        printf("Addition not possible!");
                    }
                    else{
                        int i=1,j=1,q=1;
                        int x[20][3];
                        x[0][0]=r;
                        x[0][1]=c;
                        for(;(i<=z1 && j<=z2);){
                            if(a[i][0]==b[j][0] && a[i][1]==b[j][1]){
                                x[q][0]=a[i][0];
                                x[q][1]=a[i][1];
                                x[q][2]=(a[i][2]+b[j][2]);
                                i++;
                                j++;
                                q++;
                            }
                            else if((a[i][0]!=b[j][0])){
                                if(a[i][0]>b[j][0]){
                                    x[q][0]=b[j][0];
                                    x[q][1]=b[j][1];
                                    x[q][2]=(b[j][2]);
                                    q++;
                                    j++;
                                }
                                else{
                                    x[q][0]=a[i][0];
                                    x[q][1]=a[i][1];
                                    x[q][2]=(a[i][2]);
                                    q++;
                                    i++;
                                }
                            }
                            else if(a[i][0]==b[j][0] && a[i][1]!=b[j][1]){
                                if(a[i][1]>b[j][1]){
                                        x[q][0]=b[j][0];
                                        x[q][1]=b[j][1];
                                        x[q][2]=(b[j][2]);
                                        q++;
                                        j++;
                                }
                            }
                        }
                        while(i<=z1){
                            x[q][0]=a[i][0];
                            x[q][1]=a[i][1];
                            x[q][2]=(a[i][2]);
                            q++;
                            i++;
                        }
                        while(q<=z2){
                            x[q][0]=b[j][0];
                            x[q][1]=b[j][1];
                            x[q][2]=(b[j][2]);
                            q++;
                            j++;
                        }
                        x[0][2]=q;
                        printf("\n\nSparse Matrix after addition:\n");
                        for(i=0;i<q;i++){
                            printf("\n%d %d %d",x[i][0],x[i][1],x[i][2]);
                        }
                        int p=1;
                        printf("\n\nResult");
                        printf("\n------\n");
                        for(i=0;i<r2;i++){
                            for(j=0;j<c2;j++){
                                if(i==x[p][0] && j==x[p][1]){
                                    printf("%d ",x[p][2]);
                                    p++;
                                }
                                else printf("0 ");
                            }
                            printf("\n");
                        }
                    }
                    break;
                }
                case(2):{
                    printf("\nMatrix A");
                    printf("\n--------");
                    printf("\n\nEnter column of matrix: ");
                    scanf("%d",&c);
                    printf("\nEnter row of matrix: ");
                    scanf("%d",&r);
                    printf("\nEnter number of non-zero elements: ");
                    scanf("%d",&z1);
                    a[0][0]=r;
                    a[0][1]=c;
                    a[0][2]=z1;
        
                    for(int i=1;i<=z1;i++){
                        printf("\nEnter row of non zero element: ");
                        scanf("%d",&a[i][0]);
                        printf("Enter column of non-zero element: ");
                        scanf("%d",&a[i][1]);
                        printf("Enter non zero-element element: ");
                        scanf("%d",&a[i][2]);
                    }
                    printf("\nArray implementation of Matrix A");
                    printf("\n-------------------------------");
                    for(int i=1;i<=z1;i++){
                        printf("\n%d %d %d",a[i][0],a[i][1],a[i][2]);
                    }
                    printf("\n\n");
                    int p = 1;
                    int transpose[20][3];
                    transpose[0][0] = a[0][1];
                    transpose[0][1] = a[0][0];
                    transpose[0][2] = a[0][2];
                    for(int i = 0; i < c; i++) {
                        for(int j = 1; j <= z1; j++) {
                            if(a[j][1] == i) {
                                transpose[p][0] = a[j][1]; 
                                transpose[p][1] = a[j][0]; 
                                transpose[p][2] = a[j][2]; 
                                p++;
                            }
                        }
                    }
                    
                    printf("\n\nArray implementation of Transposed Matrix");
                    printf("\n-----------------------------------------");
                    for(int i = 1; i < p; i++) {
                        printf("\n%d %d %d", transpose[i][0], transpose[i][1], transpose[i][2]);
                    }
                    printf("\nTransposed Sparse Matrix");
                    printf("\n-----------------------\n");
                    p=1;
                    for(int i=0;i<r;i++){
                            for(int j=0;j<c;j++){
                                if(i==transpose[p][0] && j==transpose[p][1]){
                                    printf("%d ",transpose[p][2]);
                                    p++;
                                }
                                else printf("0 ");
                            }
                            printf("\n");
                        }
                    break;
                }
                case(3): break;
                default: printf("Invalid Input");
            }   
        }
    }
