#include <algorithm>
#include <iostream>
#include <iterator>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>

# define PI 3.14159265

int main()
{
              char msg[90];
              int row,col,i,j;
              scanf("%s",msg);
              int len=strlen(msg);   
              row=(int)sqrt(len);
              if((row*row)==len) col=row;
              else if(len<=(row*(row+1))) col=row+1;
              else
              {
                  row=row+1;col=row;
              }
              for(i=0;i<col;i++)
              {
                                for(j=i;j<len;j=j+col)
                                    printf("%c",msg[j]);
                                printf(" ");
              }
              printf("\n");
              system("pause");     
              return 0;
}
