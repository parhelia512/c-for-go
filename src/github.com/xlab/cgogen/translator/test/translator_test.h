// int **a, b;
// typedef const unsigned char* int8_t;
// typedef int8_t alias_t;

typedef int int32_t;
typedef void ( *VPX_LOL ) (void *agent, int32_t call_idx);

#define PAIR(TYPE1__, TYPE2__) struct { TYPE1__ first; TYPE2__ second; }

typedef struct lol {
    PAIR(VPX_LOL, void *) acb;
} lol_t;


// int gc_group_load(struct VPX_LOL *save);

// typedef struct test {
// 	char A;
// 	char B;
// } test_t;

// int8_t* plus (int8_t* a, int8_t** b);
// int8_t minus (int8_t c, int8_t d);