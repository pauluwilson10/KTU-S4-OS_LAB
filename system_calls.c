#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<dirent.h>
		


void dir(){
	struct dirent *dptr;
	char buff[256];
	DIR *dirp;
    
	printf("Enter directory Name:");
	scanf("%s",buff);
    
	if((dirp=opendir(buff))==NULL){
     		printf("Error");
     		exit(1);
	}
	while(dptr=readdir(dirp)){
    		printf("%s\n",dptr->d_name);
	}
	closedir(dirp);
    		printf("process executed");

}


void fork_f(){
	int pid;
	pid=fork();
	if(pid<0){
		printf("Fork Failed");
	}
	else if(pid==0){
		execlp("/bin/date","date",NULL);
		//exit(0);
	}
	else{
		printf("Process id is-%d\n",getpid());
		wait(NULL);
		//exit(0);
	}
}

void main(){
	int sel,ch=1;
	while(ch==1){
		printf("Enter the operation\n1.Fork\n2.Show Directory Contents\n3.Exit\nEnter option ");
		scanf("%d",&sel);
		switch(sel){
			case 1:
				fork_f();
				break;
			case 2:
				dir();
				break;
			case 3:
				printf("Exited successfully....");	
				exit(0);
			
		}
		printf("Do you want to continue(1/0): ");
		scanf("%d",&ch);
	}

}
	







