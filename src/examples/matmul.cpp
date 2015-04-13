#include <iostream>

void workit()
{
    int N = 1024;

    double *a;
    double *b;
    double *c;

    int i,j,k;

    a = new double[N*N];
    b = new double[N*N];
    c = new double[N*N];

    for(i=0; i<N; ++i)
        for(j=0; j<N; ++j)
            c[i*N+j] = 0;

    for(i=0; i<N; ++i)
        for(j=0; j<N; ++j)
            for(k=0; k<N; ++k)
            {
                int cidx = i*N+j;
                int aidx = i*N+k;
                int bidx = k*N+j;
                double av = a[aidx];
                double bv = a[aidx];
                c[cidx] += av*bv;
            }

}

int main(int argc, char **argv)
{
    workit();
}
