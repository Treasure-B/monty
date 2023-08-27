#include "monty.h"

/**
* nop - do nothing
*/

void nop(void)
{
__asm__("nop");
}
int main(void)
{
nop();

return (0);
}

