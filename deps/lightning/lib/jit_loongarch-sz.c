#if __WORDSIZE == 64
#define JIT_INSTR_MAX 88
    0,	/* data */
    0,	/* live */
    28,	/* align */
    0,	/* save */
    0,	/* load */
    0,	/* #name */
    0,	/* #note */
    0,	/* label */
    88,	/* prolog */
    0,	/* ellipsis */
    0,	/* va_push */
    0,	/* allocai */
    0,	/* allocar */
    0,	/* arg */
    0,	/* getarg_c */
    0,	/* getarg_uc */
    0,	/* getarg_s */
    0,	/* getarg_us */
    0,	/* getarg_i */
    0,	/* getarg_ui */
    0,	/* getarg_l */
    0,	/* putargr */
    0,	/* putargi */
    4,	/* va_start */
    8,	/* va_arg */
    8,	/* va_arg_d */
    0,	/* va_end */
    4,	/* addr */
    20,	/* addi */
    12,	/* addcr */
    28,	/* addci */
    28,	/* addxr */
    28,	/* addxi */
    4,	/* subr */
    20,	/* subi */
    12,	/* subcr */
    28,	/* subci */
    28,	/* subxr */
    28,	/* subxi */
    24,	/* rsbi */
    4,	/* mulr */
    20,	/* muli */
    12,	/* qmulr */
    24,	/* qmuli */
    12,	/* qmulr_u */
    24,	/* qmuli_u */
    4,	/* divr */
    20,	/* divi */
    4,	/* divr_u */
    20,	/* divi_u */
    12,	/* qdivr */
    12,	/* qdivi */
    12,	/* qdivr_u */
    12,	/* qdivi_u */
    4,	/* remr */
    20,	/* remi */
    4,	/* remr_u */
    20,	/* remi_u */
    4,	/* andr */
    20,	/* andi */
    4,	/* orr */
    20,	/* ori */
    4,	/* xorr */
    20,	/* xori */
    4,	/* lshr */
    4,	/* lshi */
    4,	/* rshr */
    4,	/* rshi */
    4,	/* rshr_u */
    4,	/* rshi_u */
    4,	/* negr */
    4,	/* comr */
    4,	/* ltr */
    4,	/* lti */
    4,	/* ltr_u */
    4,	/* lti_u */
    8,	/* ler */
    4,	/* lei */
    8,	/* ler_u */
    4,	/* lei_u */
    12,	/* eqr */
    12,	/* eqi */
    8,	/* ger */
    8,	/* gei */
    8,	/* ger_u */
    8,	/* gei_u */
    4,	/* gtr */
    8,	/* gti */
    4,	/* gtr_u */
    8,	/* gti_u */
    8,	/* ner */
    8,	/* nei */
    4,	/* movr */
    16,	/* movi */
    12,	/* movnr */
    12,	/* movzr */
    4,	/* extr_c */
    4,	/* extr_uc */
    4,	/* extr_s */
    4,	/* extr_us */
    4,	/* extr_i */
    4,	/* extr_ui */
    8,	/* htonr_us */
    8,	/* htonr_ui */
    4,	/* htonr_ul */
    4,	/* ldr_c */
    16,	/* ldi_c */
    4,	/* ldr_uc */
    16,	/* ldi_uc */
    4,	/* ldr_s */
    16,	/* ldi_s */
    4,	/* ldr_us */
    16,	/* ldi_us */
    4,	/* ldr_i */
    16,	/* ldi_i */
    4,	/* ldr_ui */
    16,	/* ldi_ui */
    4,	/* ldr_l */
    16,	/* ldi_l */
    4,	/* ldxr_c */
    16,	/* ldxi_c */
    4,	/* ldxr_uc */
    16,	/* ldxi_uc */
    4,	/* ldxr_s */
    16,	/* ldxi_s */
    4,	/* ldxr_us */
    16,	/* ldxi_us */
    4,	/* ldxr_i */
    16,	/* ldxi_i */
    4,	/* ldxr_ui */
    16,	/* ldxi_ui */
    4,	/* ldxr_l */
    16,	/* ldxi_l */
    4,	/* str_c */
    16,	/* sti_c */
    4,	/* str_s */
    16,	/* sti_s */
    4,	/* str_i */
    16,	/* sti_i */
    4,	/* str_l */
    16,	/* sti_l */
    4,	/* stxr_c */
    16,	/* stxi_c */
    4,	/* stxr_s */
    16,	/* stxi_s */
    4,	/* stxr_i */
    16,	/* stxi_i */
    4,	/* stxr_l */
    16,	/* stxi_l */
    4,	/* bltr */
    8,	/* blti */
    4,	/* bltr_u */
    8,	/* blti_u */
    8,	/* bler */
    12,	/* blei */
    8,	/* bler_u */
    12,	/* blei_u */
    4,	/* beqr */
    20,	/* beqi */
    4,	/* bger */
    8,	/* bgei */
    4,	/* bger_u */
    8,	/* bgei_u */
    8,	/* bgtr */
    12,	/* bgti */
    8,	/* bgtr_u */
    12,	/* bgti_u */
    4,	/* bner */
    20,	/* bnei */
    8,	/* bmsr */
    8,	/* bmsi */
    8,	/* bmcr */
    8,	/* bmci */
    32,	/* boaddr */
    36,	/* boaddi */
    16,	/* boaddr_u */
    20,	/* boaddi_u */
    32,	/* bxaddr */
    36,	/* bxaddi */
    16,	/* bxaddr_u */
    20,	/* bxaddi_u */
    32,	/* bosubr */
    36,	/* bosubi */
    16,	/* bosubr_u */
    20,	/* bosubi_u */
    32,	/* bxsubr */
    36,	/* bxsubi */
    16,	/* bxsubr_u */
    20,	/* bxsubi_u */
    4,	/* jmpr */
    20,	/* jmpi */
    4,	/* callr */
    20,	/* calli */
    0,	/* prepare */
    0,	/* pushargr */
    0,	/* pushargi */
    0,	/* finishr */
    0,	/* finishi */
    0,	/* ret */
    0,	/* retr */
    0,	/* reti */
    0,	/* retval_c */
    0,	/* retval_uc */
    0,	/* retval_s */
    0,	/* retval_us */
    0,	/* retval_i */
    0,	/* retval_ui */
    0,	/* retval_l */
    88,	/* epilog */
    0,	/* arg_f */
    0,	/* getarg_f */
    0,	/* putargr_f */
    0,	/* putargi_f */
    4,	/* addr_f */
    12,	/* addi_f */
    4,	/* subr_f */
    12,	/* subi_f */
    12,	/* rsbi_f */
    4,	/* mulr_f */
    12,	/* muli_f */
    4,	/* divr_f */
    12,	/* divi_f */
    4,	/* negr_f */
    4,	/* absr_f */
    4,	/* sqrtr_f */
    8,	/* ltr_f */
    16,	/* lti_f */
    8,	/* ler_f */
    16,	/* lei_f */
    8,	/* eqr_f */
    16,	/* eqi_f */
    8,	/* ger_f */
    16,	/* gei_f */
    8,	/* gtr_f */
    16,	/* gti_f */
    8,	/* ner_f */
    16,	/* nei_f */
    8,	/* unltr_f */
    16,	/* unlti_f */
    8,	/* unler_f */
    16,	/* unlei_f */
    8,	/* uneqr_f */
    16,	/* uneqi_f */
    8,	/* unger_f */
    16,	/* ungei_f */
    8,	/* ungtr_f */
    16,	/* ungti_f */
    8,	/* ltgtr_f */
    16,	/* ltgti_f */
    8,	/* ordr_f */
    16,	/* ordi_f */
    12,	/* unordr_f */
    20,	/* unordi_f */
    8,	/* truncr_f_i */
    8,	/* truncr_f_l */
    8,	/* extr_f */
    4,	/* extr_d_f */
    4,	/* movr_f */
    8,	/* movi_f */
    4,	/* ldr_f */
    16,	/* ldi_f */
    4,	/* ldxr_f */
    16,	/* ldxi_f */
    4,	/* str_f */
    16,	/* sti_f */
    4,	/* stxr_f */
    16,	/* stxi_f */
    8,	/* bltr_f */
    16,	/* blti_f */
    8,	/* bler_f */
    16,	/* blei_f */
    8,	/* beqr_f */
    16,	/* beqi_f */
    8,	/* bger_f */
    16,	/* bgei_f */
    8,	/* bgtr_f */
    16,	/* bgti_f */
    8,	/* bner_f */
    16,	/* bnei_f */
    8,	/* bunltr_f */
    16,	/* bunlti_f */
    8,	/* bunler_f */
    16,	/* bunlei_f */
    8,	/* buneqr_f */
    16,	/* buneqi_f */
    8,	/* bunger_f */
    16,	/* bungei_f */
    8,	/* bungtr_f */
    16,	/* bungti_f */
    8,	/* bltgtr_f */
    16,	/* bltgti_f */
    8,	/* bordr_f */
    16,	/* bordi_f */
    8,	/* bunordr_f */
    16,	/* bunordi_f */
    0,	/* pushargr_f */
    0,	/* pushargi_f */
    0,	/* retr_f */
    0,	/* reti_f */
    0,	/* retval_f */
    0,	/* arg_d */
    0,	/* getarg_d */
    0,	/* putargr_d */
    0,	/* putargi_d */
    4,	/* addr_d */
    20,	/* addi_d */
    4,	/* subr_d */
    20,	/* subi_d */
    16,	/* rsbi_d */
    4,	/* mulr_d */
    20,	/* muli_d */
    4,	/* divr_d */
    20,	/* divi_d */
    4,	/* negr_d */
    4,	/* absr_d */
    4,	/* sqrtr_d */
    8,	/* ltr_d */
    24,	/* lti_d */
    8,	/* ler_d */
    24,	/* lei_d */
    8,	/* eqr_d */
    24,	/* eqi_d */
    8,	/* ger_d */
    24,	/* gei_d */
    8,	/* gtr_d */
    24,	/* gti_d */
    8,	/* ner_d */
    24,	/* nei_d */
    8,	/* unltr_d */
    24,	/* unlti_d */
    8,	/* unler_d */
    24,	/* unlei_d */
    8,	/* uneqr_d */
    24,	/* uneqi_d */
    8,	/* unger_d */
    24,	/* ungei_d */
    8,	/* ungtr_d */
    24,	/* ungti_d */
    8,	/* ltgtr_d */
    24,	/* ltgti_d */
    8,	/* ordr_d */
    24,	/* ordi_d */
    12,	/* unordr_d */
    28,	/* unordi_d */
    8,	/* truncr_d_i */
    8,	/* truncr_d_l */
    8,	/* extr_d */
    4,	/* extr_f_d */
    4,	/* movr_d */
    16,	/* movi_d */
    4,	/* ldr_d */
    16,	/* ldi_d */
    4,	/* ldxr_d */
    16,	/* ldxi_d */
    4,	/* str_d */
    16,	/* sti_d */
    4,	/* stxr_d */
    16,	/* stxi_d */
    8,	/* bltr_d */
    20,	/* blti_d */
    8,	/* bler_d */
    20,	/* blei_d */
    8,	/* beqr_d */
    24,	/* beqi_d */
    8,	/* bger_d */
    24,	/* bgei_d */
    8,	/* bgtr_d */
    24,	/* bgti_d */
    8,	/* bner_d */
    24,	/* bnei_d */
    8,	/* bunltr_d */
    24,	/* bunlti_d */
    8,	/* bunler_d */
    24,	/* bunlei_d */
    8,	/* buneqr_d */
    24,	/* buneqi_d */
    8,	/* bunger_d */
    24,	/* bungei_d */
    8,	/* bungtr_d */
    24,	/* bungti_d */
    8,	/* bltgtr_d */
    24,	/* bltgti_d */
    8,	/* bordr_d */
    20,	/* bordi_d */
    8,	/* bunordr_d */
    24,	/* bunordi_d */
    0,	/* pushargr_d */
    0,	/* pushargi_d */
    0,	/* retr_d */
    0,	/* reti_d */
    0,	/* retval_d */
    4,	/* movr_w_f */
    0,	/* movr_ww_d */
    4,	/* movr_w_d */
    0,	/* movr_f_w */
    4,	/* movi_f_w */
    0,	/* movr_d_ww */
    0,	/* movi_d_ww */
    4,	/* movr_d_w */
    12,	/* movi_d_w */
    8,	/* bswapr_us */
    8,	/* bswapr_ui */
    4,	/* bswapr_ul */
    32,	/* casr */
    44,	/* casi */
#endif /* __WORDSIZE */
