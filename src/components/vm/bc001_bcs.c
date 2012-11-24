/**
 * Generated bytecode from src/components/vm/bc001.bcs
 */


t_bytecode *generate_dummy_bytecode_bc001_bcs_main(void);
/**
 *
 */
t_bytecode *generate_dummy_bytecode_bc001_bcs_main(void) {
    char byte_code[] = 
        "\x81\x00\x00"         // LOAD_CONST          "io"
        "\x81\x01\x00"         // LOAD_CONST          "::_sfl::io"
        "\x7F"                 // IMPORT
        "\x80\x00\x00"         // STORE_ID            io
        "\x81\x02\x00"         // LOAD_CONST          5
        "\x80\x01\x00"         // STORE_ID            a
        "\x90\x26\x00"         // SETUP_LOOP          #end_loop1
    // #loop1:
        "\x82\x01\x00"         // LOAD_ID             a
        "\x81\x03\x00"         // LOAD_CONST          10
        "\x95\x02\x00"         // COMPARE_OP          OP_NE
        "\x85\x1A\x00"         // JUMP_IF_FALSE       #end_loop1
        "\x01"                 // POP_TOP
        "\x82\x01\x00"         // LOAD_ID             a
        "\x82\x00\x00"         // LOAD_ID             io
        "\xC0\x04\x00\x01\x00" // CALL_METHOD         "print", $1
        "\x01"                 // POP_TOP
        "\x82\x01\x00"         // LOAD_ID             a
        "\x81\x05\x00"         // LOAD_CONST          1
        "\x17"                 // BINARY_ADD
        "\x80\x01\x00"         // STORE_ID            a
        "\x86\x13\x00"         // JUMP_ABSOLUTE       #loop1
    // #end_loop1:
        "\x01"                 // POP_TOP
        "\x72"                 // POP_BLOCK
        "\x81\x06\x00"         // LOAD_CONST          "All done!"
        "\x82\x00\x00"         // LOAD_ID             io
        "\xC0\x04\x00\x01\x00" // CALL_METHOD         "print", $1
        "\x01"                 // POP_TOP
        "\x81\x07\x00"         // LOAD_CONST          4
        "\x73"                 // RETURN
    ;
    t_bytecode *bc = (t_bytecode *)smm_malloc(sizeof(t_bytecode));
    bzero(bc, sizeof(t_bytecode));
    bc->stack_size = 25;
    bc->code_len = sizeof(byte_code);
    bc->code = smm_malloc(bc->code_len);
    memcpy(bc->code, byte_code, bc->code_len);

    bc->constants = NULL;   // Important to start constants and identifiers on NULL
    bc->identifiers = NULL;

    // constants
    _new_constant_string(bc, "io");
    _new_constant_string(bc, "::_sfl::io");
    _new_constant_long(bc, 5);
    _new_constant_long(bc, 10);
    _new_constant_string(bc, "print");
    _new_constant_long(bc, 1);
    _new_constant_string(bc, "All done!");
    _new_constant_long(bc, 4);

    // identifier names
    _new_name(bc, "io");
    _new_name(bc, "a");
    
    return bc;
}



