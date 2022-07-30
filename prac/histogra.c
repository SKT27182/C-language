#include<stdio.h>
//#include<memory.h>
#include<stdbool.h>
#define MAX 15

int main()
{

    int c, len=0,i=0;
    int counts[15] = {0};
    int counts_big=15;
    bool inside_word = false;
    while((c=getchar()) != EOF) 
    {
        ++len;
        if (c== ' ' || c== '\n' || c=='\t') {
            if(inside_word) 
                printf("wordlen: %d\n",len);
                if(len < MAX)
                    ++counts[len];
                else
                    ++counts_big;
            inside_word = false;
        }
        else if(inside_word == false)
             {
                 inside_word = true;
                 len =0;
             }

        if(c=='\n')
        {
            for(i=0;i<15;i=i+1)
            {
                printf("%d\t%d\n",i,counts[i]);
//                counts.fill(0);
//                counts[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14]= (0,0,0,0,0,0,0,0,0,0,0,0,0,0);
                
            }
            for(int j=0;j<15;j=j+1)
                counts[j] = 0;

        }
    }
}
