#include <stdio.h>
void func (float f[], int *i, char c[5]);
void main() {
    float f_arr[3] = {1.0, 2.3,7.7};
    int i_arr[5] = {1,2,3,4,5};
    char c_arr[5] ={'a','b','c'};
    printf("inside main\n");
    printf("size of float arry %u\t",sizeof(f_arr));
    printf("size of integer arry %u\t",sizeof(i_arr));
    printf("size of char arry %du\n",sizeof(c_arr));
    func (f_arr, i_arr,c_arr);

}
void func (float f[], int *i, char c[5]) {
     printf("inside func\n");
    printf("size of float arry %u\t",sizeof(f));
    printf("size of integer arry %u\t",sizeof(i));
    printf("size of char arry %u\t",sizeof(c));
    
}
