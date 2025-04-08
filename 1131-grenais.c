#include <stdio.h> 
int main()
{
    int a = 1, si, sg, m_count = 0, v_i = 0, v_g = 0, d = 0;
    
    while(a == 1){
        scanf("%d %d", &si, &sg);
        m_count++;

        if (si > sg){
            v_i++;
        }
        else if(si < sg){
            v_g++;
        }
        else {
            d++;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &a);
    }

    printf("%d grenais\n", m_count);
    printf("Inter:%d\n", v_i);
    printf("Gremio:%d\n", v_g);
    printf("Empates:%d\n", d);

    if (v_i > v_g){
        printf("Inter venceu mais\n");
    }
    else if (v_i < v_g){
        printf("Gremio venceu mais\n");
    }
    else {
        printf("Nao houve vencedor\n");
    }

    return 0;
}
