#include <stdio.h>

// Use plenty of brackets.
#define MAX(A,B) ((A) > (B) ? (A) : (B))

#if defined(MISCONFIGURATION)
# error "There is a misfiguration."
#else
# define GOOD_SETUP 1
#endif

	
/* Can evaluate to a zero statement - breaking if else statements
   wrap in do while 0 - worst case there is a statement.

#define SKIP_SPACES(p, limit)  \
{ char *lim = (limit);         \
  while (p < lim) {            \
    if (*p++ != ' ') {         \
      p--; break; }}}
*/

#define SKIP_SPACES(p, limit)     \
do { char *lim = (limit);         \
     while (p < lim) {            \
       if (*p++ != ' ') {         \
         p--; break; }}}          \
while (0)

typedef struct{
	int x, y;
} Point;

typedef int* INT_P;

int main(void){

	INT_P a,b;
	int y = 1,z = 2;

	a = &y;
	b = &z;

	printf("a: %d\nb: %d\n",*a,*b);
	printf("Max(a,b): %d\n",MAX(*a,*b));

	return 0;
}
