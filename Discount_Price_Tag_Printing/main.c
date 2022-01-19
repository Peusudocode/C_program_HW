#include <stdio.h>

int main() {
    int a, b =0;
    scanf("%d%d", &a, &b);
    float c = (float)b * ((1.0 - (float)a / 100.0));
    printf("\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n\\    %3d%%off!    \\\n\\ Before  $%5d \\\n\\ After   $%5.2f \\\n\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"", a, b, c);
    return 0;
}
