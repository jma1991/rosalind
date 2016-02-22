#include <stdio.h>
#include "htslib-1.3/htslib/faidx.h"
//#include "htslib-1.3/htslib/bgzf.h"

int main(void)
{
    const char *fn = "genome.fa";
    const char *reg = "chr2:9000000-9000100";
    int len = 10000;
    
    faidx_t *fai = fai_load(fn);
    char *seq = fai_fetch(fai, reg, &len);
    printf("%s", seq);
    return 0;
}