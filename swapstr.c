    #include<stdio.h>
    #include<string.h>
     
    int main()
    {
    	char a[100];
    	char t;
    	int i,l;
     
    	gets(a);
    	l=strlen(a);
     
    	for(i=0;(i<l);i+=2){
    		t=a[i];
    		a[i]=a[i+1];
    		a[i+1]=t;
     
    		if(a[i+3] == '\0'){
    			break;
    		}
    	}
     
    	puts(a);
     
    return 0;
    }
