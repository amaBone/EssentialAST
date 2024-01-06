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
    goto
}AST_node_type;

typedef struct{
    AST_node_type node_type;
    (void *) node;
}AST_node_info;

typedef struct{
    (void*) value;
    (AST_node_info *) nodeA;
    (AST_node_info *) nodeB;
}AST_node_2_branch;

typedef struct{
    (void*) value;
    (AST_node_info *) node;
}AST_node_1_branch;

typedef enum{
    int,
    char,
    ptr,
    float,
    double,
}AST_node_value_type;

