#include <stdarg.h>
#include <stdio.h>

typedef enum{
    memlocation,
    memwrite,
    sum,
    sub,
    mul,
    div,
    not,
    or,
    and,
    _goto
}AST_node_type;

typedef struct{
    AST_node_type node_type;
    void * node;
}AST_node_info;

typedef struct{
    void* value;
    AST_node_info *nodeA;
    AST_node_info * nodeB;
}AST_node_2_branch;

typedef struct{
    void* value;
    AST_node_info * node;
}AST_node_1_branch;

typedef enum{
    _signed,
    _unsigned,
    _short,
    _long,
    _int,
    _char,
    _ptr,
    _float,
    _double
}AST_node_value_type;

AST_node_info * AST_node_create(AST_node_type node_type){
    return (AST_node_info *)malloc(sizeof(AST_node_info));
}

AST_node_1_branch * AST_node_1_branch_create(){
    AST_node_1_branch * node_1_branch = (AST_node_1_branch *)malloc(sizeof(AST_node_1_branch));
    return node_1_branch;
}
void AST_node_1_branch_fill(AST_node_1_branch * branchnode,AST_node_info * node, void * value){
    branchnode->node = node;
    branchnode->value = value;
}

typedef struct{
    void*parent;
    void*value;
    void*next;
}linkedNodeList;

linkedNodeList * linkedNodeList_create(void * parent, void * value, void * next){
    linkedNodeList * node = (linkedNodeList *)malloc(sizeof(linkedNodeList));
    node->parent = parent;
    node->value = value;
    node->next = next;
    return node;

}
   
AST_node_fill(AST_node_info * node,...){
    switch (node->node_type){
        case memlocation:
            break;
        //write all the cases
        case sum:
            break;
        case sub:
            break;
            
    }
}
Parser_Splitter(char * string){
    char * start,end;
    while(*string){
        switch (*string)
        {
        case ' ':
        case '\n':
        case '\f':
        case '-':
        case '+':
        
        case '*':
        case '//':
        case '(':
        case ')':
        case '=':
        case '&':
        case '|':
        case '!':
        case '"':
        case '\'':
            if (start != NULL){
                end = string;
            }
            break;
        
        default:
            break;
        }
    }


}
AST_node_type Parser_Identify(char* start, char* end){

}
    
Parser_Start(char * string){

    while (*string != '\0'){
        switch (*string){
            case '+':
                AST_node_info * node1 = AST_node_create(sum);
                break;
            case '-':
                AST_node_info * node1 = AST_node_create(sub);
                break;
            case '*':
                AST_node_info * node1 = AST_node_create(mul);
                break;
            case '/':
                AST_node_info * node1 = AST_node_create(div);
                break;
            case '!':
                AST_node_info * node1 = AST_node_create(not);
                break;
            case '|':
                AST_node_info * node1 = AST_node_create(or);
                break;
            case '&':
                AST_node_info * node1 = AST_node_create(and);
                break;
            case '>':
                AST_node_info * node1 = AST_node_create(_goto);
                break;
            case '<':
                AST_node_info * node1 = AST_node_create(_goto);
                break;
            case '=':
                AST_node_info * node1 = AST_node_create(memwrite);
                break;
            case ' ':
                break;
            default:
                break;
        }
    }
}
int main(){
    //2+2
    AST_node_info * node1 = AST_node_create(sum);
    return 0;
}