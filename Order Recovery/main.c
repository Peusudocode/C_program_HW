#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define GOODS_SIZE 120
#define MAX_ORDER_SIZE 30
#define MAX_NAME_LEN 15


char names[GOODS_SIZE][MAX_NAME_LEN] = {
        "aluminum", "ammunition", "orange", "aspirin", "ax",
        "basketball", "zipper", "bell", "blanket", "drum",
        "canvas", "flute", "eraser", "mirror", "comb",
        "eggplant", "diamond", "zucchini", "door", "butter",
        "egg", "dart", "chair", "encyclopedia", "china",
        "fan", "glue", "elevator", "flower", "hat",
        "garlic", "strawberry", "glove", "flour", "ice",
        "ship", "hammer", "fur", "key", "honey",
        "grape", "icecream", "lock", "iron", "ivory",
        "jacket", "oil", "uniform", "kiwi", "pan",
        "helmet", "keyboard", "yoyo", "jet", "knife",
        "tie", "lemon", "xerox", "ink", "mutton",
        "newspaper", "melon", "coconut", "motorcycle", "longan",
        "nail", "rice", "magnet", "peanut", "ointment",
        "oar", "jeans", "nut", "arrow", "oven",
        "jewel", "wool", "noodle", "pencil", "lamp",
        "refrigerator", "needle", "roast", "vest", "yarn",
        "saw", "hamburger", "soap", "glass", "wine",
        "tangerine", "pillow", "umbrella", "zinc", "train",
        "uglifruit", "toast", "underwear", "vanilla", "jeep",
        "unicycle", "vase", "rope", "violin", "warship",
        "volleyball", "water", "yogurt", "submarine", "passionfruit",
        "yacht", "rose", "window", "yolk", "kite",
        "liquor", "xylophone", "toothbrush", "battery", "doll"
};
void recovering_order(char *input, char **output){
    char object[15] = {'\0'};
    static char text[500] = {'\0'};
    int n = 0;
    while(*input != '\0' && n < 30){
        n++;
        strcpy(object, "\0");
        int index = 0;
        while(*input != ':' && *input != '\0'){
            object[index] = *input;
            index++;
            input++;
        }
        input++;
        int compare[120] = {0};
        for (int i = 120; i >= 0; i--) {
            int correct = 0;
            int input_index = 0;
            int check_index = 0;
            while (names[i][check_index] != '\0') {
                if (object[input_index] == names[i][check_index]) {
                    correct++;
                    input_index++;
                    check_index++;
                    if (compare[i] < correct)
                        compare[i] = correct;
                } else {
                    correct = 0;
                    input_index = 0;
                    check_index++;
                }
            }
        }
        int max_correct = 0;
        int name_index = 0;
        for (int i = 0; i < 120; i++){
            if (max_correct < compare[i]){
                max_correct = compare[i];
                name_index = i;
            }
            else if (max_correct == compare[i] && max_correct != 0 ) {
                if (strlen(names[name_index]) > strlen(names[i])) {
                    name_index = i;
                } else if (strlen(names[name_index]) == strlen(names[i])) {
                    if (strcmp(names[name_index], names[i]) > 0) {
                        name_index = i;
                    }
                }
            }
        }
        strcat(text, names[name_index]);
        strcat(text, "+");
    }
    text[strlen(text) - 1] = '\0';
    *output = text;
}
int main(void) {
    char order[500] = "", *result = NULL;
    scanf("%s", order);
    recovering_order(order, &result);
    printf("%s", result);
    free(result);
    return 0;
}