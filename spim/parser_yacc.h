/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_YACC_H_INCLUDED
# define YY_YY_PARSER_YACC_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    Y_EOF = 258,                   /* Y_EOF  */
    Y_NL = 259,                    /* Y_NL  */
    Y_INT = 260,                   /* Y_INT  */
    Y_ID = 261,                    /* Y_ID  */
    Y_REG = 262,                   /* Y_REG  */
    Y_FP_REG = 263,                /* Y_FP_REG  */
    Y_STR = 264,                   /* Y_STR  */
    Y_FP = 265,                    /* Y_FP  */
    Y_ABS_D_OP = 266,              /* Y_ABS_D_OP  */
    Y_ABS_PS_OP = 267,             /* Y_ABS_PS_OP  */
    Y_ABS_S_OP = 268,              /* Y_ABS_S_OP  */
    Y_ADD_D_OP = 269,              /* Y_ADD_D_OP  */
    Y_ADD_OP = 270,                /* Y_ADD_OP  */
    Y_ADD_PS_OP = 271,             /* Y_ADD_PS_OP  */
    Y_ADD_S_OP = 272,              /* Y_ADD_S_OP  */
    Y_ADDI_OP = 273,               /* Y_ADDI_OP  */
    Y_ADDIU_OP = 274,              /* Y_ADDIU_OP  */
    Y_ADDU_OP = 275,               /* Y_ADDU_OP  */
    Y_ALNV_PS_OP = 276,            /* Y_ALNV_PS_OP  */
    Y_AND_OP = 277,                /* Y_AND_OP  */
    Y_ANDI_OP = 278,               /* Y_ANDI_OP  */
    Y_BC1F_OP = 279,               /* Y_BC1F_OP  */
    Y_BC1FL_OP = 280,              /* Y_BC1FL_OP  */
    Y_BC1T_OP = 281,               /* Y_BC1T_OP  */
    Y_BC1TL_OP = 282,              /* Y_BC1TL_OP  */
    Y_BC2F_OP = 283,               /* Y_BC2F_OP  */
    Y_BC2FL_OP = 284,              /* Y_BC2FL_OP  */
    Y_BC2T_OP = 285,               /* Y_BC2T_OP  */
    Y_BC2TL_OP = 286,              /* Y_BC2TL_OP  */
    Y_BEQ_OP = 287,                /* Y_BEQ_OP  */
    Y_BEQL_OP = 288,               /* Y_BEQL_OP  */
    Y_BGEZ_OP = 289,               /* Y_BGEZ_OP  */
    Y_BGEZAL_OP = 290,             /* Y_BGEZAL_OP  */
    Y_BGEZALL_OP = 291,            /* Y_BGEZALL_OP  */
    Y_BGEZL_OP = 292,              /* Y_BGEZL_OP  */
    Y_BGTZ_OP = 293,               /* Y_BGTZ_OP  */
    Y_BGTZL_OP = 294,              /* Y_BGTZL_OP  */
    Y_BLEZ_OP = 295,               /* Y_BLEZ_OP  */
    Y_BLEZL_OP = 296,              /* Y_BLEZL_OP  */
    Y_BLTZ_OP = 297,               /* Y_BLTZ_OP  */
    Y_BLTZAL_OP = 298,             /* Y_BLTZAL_OP  */
    Y_BLTZALL_OP = 299,            /* Y_BLTZALL_OP  */
    Y_BLTZL_OP = 300,              /* Y_BLTZL_OP  */
    Y_BNE_OP = 301,                /* Y_BNE_OP  */
    Y_BNEL_OP = 302,               /* Y_BNEL_OP  */
    Y_BREAK_OP = 303,              /* Y_BREAK_OP  */
    Y_C_EQ_D_OP = 304,             /* Y_C_EQ_D_OP  */
    Y_C_EQ_PS_OP = 305,            /* Y_C_EQ_PS_OP  */
    Y_C_EQ_S_OP = 306,             /* Y_C_EQ_S_OP  */
    Y_C_F_D_OP = 307,              /* Y_C_F_D_OP  */
    Y_C_F_PS_OP = 308,             /* Y_C_F_PS_OP  */
    Y_C_F_S_OP = 309,              /* Y_C_F_S_OP  */
    Y_C_LE_D_OP = 310,             /* Y_C_LE_D_OP  */
    Y_C_LE_PS_OP = 311,            /* Y_C_LE_PS_OP  */
    Y_C_LE_S_OP = 312,             /* Y_C_LE_S_OP  */
    Y_C_LT_D_OP = 313,             /* Y_C_LT_D_OP  */
    Y_C_LT_PS_OP = 314,            /* Y_C_LT_PS_OP  */
    Y_C_LT_S_OP = 315,             /* Y_C_LT_S_OP  */
    Y_C_NGE_D_OP = 316,            /* Y_C_NGE_D_OP  */
    Y_C_NGE_PS_OP = 317,           /* Y_C_NGE_PS_OP  */
    Y_C_NGE_S_OP = 318,            /* Y_C_NGE_S_OP  */
    Y_C_NGL_D_OP = 319,            /* Y_C_NGL_D_OP  */
    Y_C_NGL_PS_OP = 320,           /* Y_C_NGL_PS_OP  */
    Y_C_NGL_S_OP = 321,            /* Y_C_NGL_S_OP  */
    Y_C_NGLE_D_OP = 322,           /* Y_C_NGLE_D_OP  */
    Y_C_NGLE_PS_OP = 323,          /* Y_C_NGLE_PS_OP  */
    Y_C_NGLE_S_OP = 324,           /* Y_C_NGLE_S_OP  */
    Y_C_NGT_D_OP = 325,            /* Y_C_NGT_D_OP  */
    Y_C_NGT_PS_OP = 326,           /* Y_C_NGT_PS_OP  */
    Y_C_NGT_S_OP = 327,            /* Y_C_NGT_S_OP  */
    Y_C_OLE_D_OP = 328,            /* Y_C_OLE_D_OP  */
    Y_C_OLE_PS_OP = 329,           /* Y_C_OLE_PS_OP  */
    Y_C_OLE_S_OP = 330,            /* Y_C_OLE_S_OP  */
    Y_C_OLT_D_OP = 331,            /* Y_C_OLT_D_OP  */
    Y_C_OLT_PS_OP = 332,           /* Y_C_OLT_PS_OP  */
    Y_C_OLT_S_OP = 333,            /* Y_C_OLT_S_OP  */
    Y_C_SEQ_D_OP = 334,            /* Y_C_SEQ_D_OP  */
    Y_C_SEQ_PS_OP = 335,           /* Y_C_SEQ_PS_OP  */
    Y_C_SEQ_S_OP = 336,            /* Y_C_SEQ_S_OP  */
    Y_C_SF_D_OP = 337,             /* Y_C_SF_D_OP  */
    Y_C_SF_PS_OP = 338,            /* Y_C_SF_PS_OP  */
    Y_C_SF_S_OP = 339,             /* Y_C_SF_S_OP  */
    Y_C_UEQ_D_OP = 340,            /* Y_C_UEQ_D_OP  */
    Y_C_UEQ_PS_OP = 341,           /* Y_C_UEQ_PS_OP  */
    Y_C_UEQ_S_OP = 342,            /* Y_C_UEQ_S_OP  */
    Y_C_ULE_D_OP = 343,            /* Y_C_ULE_D_OP  */
    Y_C_ULE_PS_OP = 344,           /* Y_C_ULE_PS_OP  */
    Y_C_ULE_S_OP = 345,            /* Y_C_ULE_S_OP  */
    Y_C_ULT_D_OP = 346,            /* Y_C_ULT_D_OP  */
    Y_C_ULT_PS_OP = 347,           /* Y_C_ULT_PS_OP  */
    Y_C_ULT_S_OP = 348,            /* Y_C_ULT_S_OP  */
    Y_C_UN_D_OP = 349,             /* Y_C_UN_D_OP  */
    Y_C_UN_PS_OP = 350,            /* Y_C_UN_PS_OP  */
    Y_C_UN_S_OP = 351,             /* Y_C_UN_S_OP  */
    Y_CACHE_OP = 352,              /* Y_CACHE_OP  */
    Y_CEIL_L_D_OP = 353,           /* Y_CEIL_L_D_OP  */
    Y_CEIL_L_S_OP = 354,           /* Y_CEIL_L_S_OP  */
    Y_CEIL_W_D_OP = 355,           /* Y_CEIL_W_D_OP  */
    Y_CEIL_W_S_OP = 356,           /* Y_CEIL_W_S_OP  */
    Y_CFC0_OP = 357,               /* Y_CFC0_OP  */
    Y_CFC1_OP = 358,               /* Y_CFC1_OP  */
    Y_CFC2_OP = 359,               /* Y_CFC2_OP  */
    Y_CLO_OP = 360,                /* Y_CLO_OP  */
    Y_CLZ_OP = 361,                /* Y_CLZ_OP  */
    Y_COP2_OP = 362,               /* Y_COP2_OP  */
    Y_CTC0_OP = 363,               /* Y_CTC0_OP  */
    Y_CTC1_OP = 364,               /* Y_CTC1_OP  */
    Y_CTC2_OP = 365,               /* Y_CTC2_OP  */
    Y_CVT_D_L_OP = 366,            /* Y_CVT_D_L_OP  */
    Y_CVT_D_S_OP = 367,            /* Y_CVT_D_S_OP  */
    Y_CVT_D_W_OP = 368,            /* Y_CVT_D_W_OP  */
    Y_CVT_L_D_OP = 369,            /* Y_CVT_L_D_OP  */
    Y_CVT_L_S_OP = 370,            /* Y_CVT_L_S_OP  */
    Y_CVT_PS_S_OP = 371,           /* Y_CVT_PS_S_OP  */
    Y_CVT_S_D_OP = 372,            /* Y_CVT_S_D_OP  */
    Y_CVT_S_L_OP = 373,            /* Y_CVT_S_L_OP  */
    Y_CVT_S_PL_OP = 374,           /* Y_CVT_S_PL_OP  */
    Y_CVT_S_PU_OP = 375,           /* Y_CVT_S_PU_OP  */
    Y_CVT_S_W_OP = 376,            /* Y_CVT_S_W_OP  */
    Y_CVT_W_D_OP = 377,            /* Y_CVT_W_D_OP  */
    Y_CVT_W_S_OP = 378,            /* Y_CVT_W_S_OP  */
    Y_DERET_OP = 379,              /* Y_DERET_OP  */
    Y_DI_OP = 380,                 /* Y_DI_OP  */
    Y_DIV_D_OP = 381,              /* Y_DIV_D_OP  */
    Y_DIV_OP = 382,                /* Y_DIV_OP  */
    Y_DIV_S_OP = 383,              /* Y_DIV_S_OP  */
    Y_DIVU_OP = 384,               /* Y_DIVU_OP  */
    Y_EHB_OP = 385,                /* Y_EHB_OP  */
    Y_EI_OP = 386,                 /* Y_EI_OP  */
    Y_ERET_OP = 387,               /* Y_ERET_OP  */
    Y_EXT_OP = 388,                /* Y_EXT_OP  */
    Y_FLOOR_L_D_OP = 389,          /* Y_FLOOR_L_D_OP  */
    Y_FLOOR_L_S_OP = 390,          /* Y_FLOOR_L_S_OP  */
    Y_FLOOR_W_D_OP = 391,          /* Y_FLOOR_W_D_OP  */
    Y_FLOOR_W_S_OP = 392,          /* Y_FLOOR_W_S_OP  */
    Y_INS_OP = 393,                /* Y_INS_OP  */
    Y_J_OP = 394,                  /* Y_J_OP  */
    Y_JAL_OP = 395,                /* Y_JAL_OP  */
    Y_JALR_HB_OP = 396,            /* Y_JALR_HB_OP  */
    Y_JALR_OP = 397,               /* Y_JALR_OP  */
    Y_JR_HB_OP = 398,              /* Y_JR_HB_OP  */
    Y_JR_OP = 399,                 /* Y_JR_OP  */
    Y_LB_OP = 400,                 /* Y_LB_OP  */
    Y_LBU_OP = 401,                /* Y_LBU_OP  */
    Y_LDC1_OP = 402,               /* Y_LDC1_OP  */
    Y_LDC2_OP = 403,               /* Y_LDC2_OP  */
    Y_LDXC1_OP = 404,              /* Y_LDXC1_OP  */
    Y_LH_OP = 405,                 /* Y_LH_OP  */
    Y_LHU_OP = 406,                /* Y_LHU_OP  */
    Y_LL_OP = 407,                 /* Y_LL_OP  */
    Y_LUI_OP = 408,                /* Y_LUI_OP  */
    Y_LUXC1_OP = 409,              /* Y_LUXC1_OP  */
    Y_LW_OP = 410,                 /* Y_LW_OP  */
    Y_LWC1_OP = 411,               /* Y_LWC1_OP  */
    Y_LWC2_OP = 412,               /* Y_LWC2_OP  */
    Y_LWL_OP = 413,                /* Y_LWL_OP  */
    Y_LWR_OP = 414,                /* Y_LWR_OP  */
    Y_LWXC1_OP = 415,              /* Y_LWXC1_OP  */
    Y_MADD_D_OP = 416,             /* Y_MADD_D_OP  */
    Y_MADD_OP = 417,               /* Y_MADD_OP  */
    Y_MADD_PS_OP = 418,            /* Y_MADD_PS_OP  */
    Y_MADD_S_OP = 419,             /* Y_MADD_S_OP  */
    Y_MADDU_OP = 420,              /* Y_MADDU_OP  */
    Y_MFC0_OP = 421,               /* Y_MFC0_OP  */
    Y_MFC1_OP = 422,               /* Y_MFC1_OP  */
    Y_MFC2_OP = 423,               /* Y_MFC2_OP  */
    Y_MFHC1_OP = 424,              /* Y_MFHC1_OP  */
    Y_MFHC2_OP = 425,              /* Y_MFHC2_OP  */
    Y_MFHI_OP = 426,               /* Y_MFHI_OP  */
    Y_MFLO_OP = 427,               /* Y_MFLO_OP  */
    Y_MOV_D_OP = 428,              /* Y_MOV_D_OP  */
    Y_MOV_PS_OP = 429,             /* Y_MOV_PS_OP  */
    Y_MOV_S_OP = 430,              /* Y_MOV_S_OP  */
    Y_MOVF_D_OP = 431,             /* Y_MOVF_D_OP  */
    Y_MOVF_OP = 432,               /* Y_MOVF_OP  */
    Y_MOVF_PS_OP = 433,            /* Y_MOVF_PS_OP  */
    Y_MOVF_S_OP = 434,             /* Y_MOVF_S_OP  */
    Y_MOVN_D_OP = 435,             /* Y_MOVN_D_OP  */
    Y_MOVN_OP = 436,               /* Y_MOVN_OP  */
    Y_MOVN_PS_OP = 437,            /* Y_MOVN_PS_OP  */
    Y_MOVN_S_OP = 438,             /* Y_MOVN_S_OP  */
    Y_MOVT_D_OP = 439,             /* Y_MOVT_D_OP  */
    Y_MOVT_OP = 440,               /* Y_MOVT_OP  */
    Y_MOVT_PS_OP = 441,            /* Y_MOVT_PS_OP  */
    Y_MOVT_S_OP = 442,             /* Y_MOVT_S_OP  */
    Y_MOVZ_D_OP = 443,             /* Y_MOVZ_D_OP  */
    Y_MOVZ_OP = 444,               /* Y_MOVZ_OP  */
    Y_MOVZ_PS_OP = 445,            /* Y_MOVZ_PS_OP  */
    Y_MOVZ_S_OP = 446,             /* Y_MOVZ_S_OP  */
    Y_MSUB_D_OP = 447,             /* Y_MSUB_D_OP  */
    Y_MSUB_OP = 448,               /* Y_MSUB_OP  */
    Y_MSUB_PS_OP = 449,            /* Y_MSUB_PS_OP  */
    Y_MSUB_S_OP = 450,             /* Y_MSUB_S_OP  */
    Y_MSUBU_OP = 451,              /* Y_MSUBU_OP  */
    Y_MTC0_OP = 452,               /* Y_MTC0_OP  */
    Y_MTC1_OP = 453,               /* Y_MTC1_OP  */
    Y_MTC2_OP = 454,               /* Y_MTC2_OP  */
    Y_MTHC1_OP = 455,              /* Y_MTHC1_OP  */
    Y_MTHC2_OP = 456,              /* Y_MTHC2_OP  */
    Y_MTHI_OP = 457,               /* Y_MTHI_OP  */
    Y_MTLO_OP = 458,               /* Y_MTLO_OP  */
    Y_MUL_D_OP = 459,              /* Y_MUL_D_OP  */
    Y_MUL_PS_OP = 460,             /* Y_MUL_PS_OP  */
    Y_MUL_S_OP = 461,              /* Y_MUL_S_OP  */
    Y_MUL_OP = 462,                /* Y_MUL_OP  */
    Y_MULT_OP = 463,               /* Y_MULT_OP  */
    Y_MULTU_OP = 464,              /* Y_MULTU_OP  */
    Y_NEG_D_OP = 465,              /* Y_NEG_D_OP  */
    Y_NEG_PS_OP = 466,             /* Y_NEG_PS_OP  */
    Y_NEG_S_OP = 467,              /* Y_NEG_S_OP  */
    Y_NMADD_D_OP = 468,            /* Y_NMADD_D_OP  */
    Y_NMADD_PS_OP = 469,           /* Y_NMADD_PS_OP  */
    Y_NMADD_S_OP = 470,            /* Y_NMADD_S_OP  */
    Y_NMSUB_D_OP = 471,            /* Y_NMSUB_D_OP  */
    Y_NMSUB_PS_OP = 472,           /* Y_NMSUB_PS_OP  */
    Y_NMSUB_S_OP = 473,            /* Y_NMSUB_S_OP  */
    Y_NOR_OP = 474,                /* Y_NOR_OP  */
    Y_OR_OP = 475,                 /* Y_OR_OP  */
    Y_ORI_OP = 476,                /* Y_ORI_OP  */
    Y_PFW_OP = 477,                /* Y_PFW_OP  */
    Y_PLL_PS_OP = 478,             /* Y_PLL_PS_OP  */
    Y_PLU_PS_OP = 479,             /* Y_PLU_PS_OP  */
    Y_PREF_OP = 480,               /* Y_PREF_OP  */
    Y_PREFX_OP = 481,              /* Y_PREFX_OP  */
    Y_PUL_PS_OP = 482,             /* Y_PUL_PS_OP  */
    Y_PUU_PS_OP = 483,             /* Y_PUU_PS_OP  */
    Y_RDHWR_OP = 484,              /* Y_RDHWR_OP  */
    Y_RDPGPR_OP = 485,             /* Y_RDPGPR_OP  */
    Y_RECIP_D_OP = 486,            /* Y_RECIP_D_OP  */
    Y_RECIP_S_OP = 487,            /* Y_RECIP_S_OP  */
    Y_RFE_OP = 488,                /* Y_RFE_OP  */
    Y_ROTR_OP = 489,               /* Y_ROTR_OP  */
    Y_ROTRV_OP = 490,              /* Y_ROTRV_OP  */
    Y_ROUND_L_D_OP = 491,          /* Y_ROUND_L_D_OP  */
    Y_ROUND_L_S_OP = 492,          /* Y_ROUND_L_S_OP  */
    Y_ROUND_W_D_OP = 493,          /* Y_ROUND_W_D_OP  */
    Y_ROUND_W_S_OP = 494,          /* Y_ROUND_W_S_OP  */
    Y_RSQRT_D_OP = 495,            /* Y_RSQRT_D_OP  */
    Y_RSQRT_S_OP = 496,            /* Y_RSQRT_S_OP  */
    Y_SB_OP = 497,                 /* Y_SB_OP  */
    Y_SC_OP = 498,                 /* Y_SC_OP  */
    Y_SDBBP_OP = 499,              /* Y_SDBBP_OP  */
    Y_SDC1_OP = 500,               /* Y_SDC1_OP  */
    Y_SDC2_OP = 501,               /* Y_SDC2_OP  */
    Y_SDXC1_OP = 502,              /* Y_SDXC1_OP  */
    Y_SEB_OP = 503,                /* Y_SEB_OP  */
    Y_SEH_OP = 504,                /* Y_SEH_OP  */
    Y_SH_OP = 505,                 /* Y_SH_OP  */
    Y_SLL_OP = 506,                /* Y_SLL_OP  */
    Y_SLLV_OP = 507,               /* Y_SLLV_OP  */
    Y_SLT_OP = 508,                /* Y_SLT_OP  */
    Y_SLTI_OP = 509,               /* Y_SLTI_OP  */
    Y_SLTIU_OP = 510,              /* Y_SLTIU_OP  */
    Y_SLTU_OP = 511,               /* Y_SLTU_OP  */
    Y_SQRT_D_OP = 512,             /* Y_SQRT_D_OP  */
    Y_SQRT_S_OP = 513,             /* Y_SQRT_S_OP  */
    Y_SRA_OP = 514,                /* Y_SRA_OP  */
    Y_SRAV_OP = 515,               /* Y_SRAV_OP  */
    Y_SRL_OP = 516,                /* Y_SRL_OP  */
    Y_SRLV_OP = 517,               /* Y_SRLV_OP  */
    Y_SSNOP_OP = 518,              /* Y_SSNOP_OP  */
    Y_SUB_D_OP = 519,              /* Y_SUB_D_OP  */
    Y_SUB_OP = 520,                /* Y_SUB_OP  */
    Y_SUB_PS_OP = 521,             /* Y_SUB_PS_OP  */
    Y_SUB_S_OP = 522,              /* Y_SUB_S_OP  */
    Y_SUBU_OP = 523,               /* Y_SUBU_OP  */
    Y_SUXC1_OP = 524,              /* Y_SUXC1_OP  */
    Y_SW_OP = 525,                 /* Y_SW_OP  */
    Y_SWC1_OP = 526,               /* Y_SWC1_OP  */
    Y_SWC2_OP = 527,               /* Y_SWC2_OP  */
    Y_SWL_OP = 528,                /* Y_SWL_OP  */
    Y_SWR_OP = 529,                /* Y_SWR_OP  */
    Y_SWXC1_OP = 530,              /* Y_SWXC1_OP  */
    Y_SYNC_OP = 531,               /* Y_SYNC_OP  */
    Y_SYNCI_OP = 532,              /* Y_SYNCI_OP  */
    Y_SYSCALL_OP = 533,            /* Y_SYSCALL_OP  */
    Y_TEQ_OP = 534,                /* Y_TEQ_OP  */
    Y_TEQI_OP = 535,               /* Y_TEQI_OP  */
    Y_TGE_OP = 536,                /* Y_TGE_OP  */
    Y_TGEI_OP = 537,               /* Y_TGEI_OP  */
    Y_TGEIU_OP = 538,              /* Y_TGEIU_OP  */
    Y_TGEU_OP = 539,               /* Y_TGEU_OP  */
    Y_TLBP_OP = 540,               /* Y_TLBP_OP  */
    Y_TLBR_OP = 541,               /* Y_TLBR_OP  */
    Y_TLBWI_OP = 542,              /* Y_TLBWI_OP  */
    Y_TLBWR_OP = 543,              /* Y_TLBWR_OP  */
    Y_TLT_OP = 544,                /* Y_TLT_OP  */
    Y_TLTI_OP = 545,               /* Y_TLTI_OP  */
    Y_TLTIU_OP = 546,              /* Y_TLTIU_OP  */
    Y_TLTU_OP = 547,               /* Y_TLTU_OP  */
    Y_TNE_OP = 548,                /* Y_TNE_OP  */
    Y_TNEI_OP = 549,               /* Y_TNEI_OP  */
    Y_TRUNC_L_D_OP = 550,          /* Y_TRUNC_L_D_OP  */
    Y_TRUNC_L_S_OP = 551,          /* Y_TRUNC_L_S_OP  */
    Y_TRUNC_W_D_OP = 552,          /* Y_TRUNC_W_D_OP  */
    Y_TRUNC_W_S_OP = 553,          /* Y_TRUNC_W_S_OP  */
    Y_WRPGPR_OP = 554,             /* Y_WRPGPR_OP  */
    Y_WSBH_OP = 555,               /* Y_WSBH_OP  */
    Y_XOR_OP = 556,                /* Y_XOR_OP  */
    Y_XORI_OP = 557,               /* Y_XORI_OP  */
    Y_ABS_POP = 558,               /* Y_ABS_POP  */
    Y_B_POP = 559,                 /* Y_B_POP  */
    Y_BAL_POP = 560,               /* Y_BAL_POP  */
    Y_BEQZ_POP = 561,              /* Y_BEQZ_POP  */
    Y_BGE_POP = 562,               /* Y_BGE_POP  */
    Y_BGEU_POP = 563,              /* Y_BGEU_POP  */
    Y_BGT_POP = 564,               /* Y_BGT_POP  */
    Y_BGTU_POP = 565,              /* Y_BGTU_POP  */
    Y_BLE_POP = 566,               /* Y_BLE_POP  */
    Y_BLEU_POP = 567,              /* Y_BLEU_POP  */
    Y_BLT_POP = 568,               /* Y_BLT_POP  */
    Y_BLTU_POP = 569,              /* Y_BLTU_POP  */
    Y_BNEZ_POP = 570,              /* Y_BNEZ_POP  */
    Y_LA_POP = 571,                /* Y_LA_POP  */
    Y_LD_POP = 572,                /* Y_LD_POP  */
    Y_L_D_POP = 573,               /* Y_L_D_POP  */
    Y_L_S_POP = 574,               /* Y_L_S_POP  */
    Y_LI_D_POP = 575,              /* Y_LI_D_POP  */
    Y_LI_POP = 576,                /* Y_LI_POP  */
    Y_LI_S_POP = 577,              /* Y_LI_S_POP  */
    Y_MFC1_D_POP = 578,            /* Y_MFC1_D_POP  */
    Y_MOVE_POP = 579,              /* Y_MOVE_POP  */
    Y_MTC1_D_POP = 580,            /* Y_MTC1_D_POP  */
    Y_MULO_POP = 581,              /* Y_MULO_POP  */
    Y_MULOU_POP = 582,             /* Y_MULOU_POP  */
    Y_NEG_POP = 583,               /* Y_NEG_POP  */
    Y_NEGU_POP = 584,              /* Y_NEGU_POP  */
    Y_NOP_POP = 585,               /* Y_NOP_POP  */
    Y_NOT_POP = 586,               /* Y_NOT_POP  */
    Y_REM_POP = 587,               /* Y_REM_POP  */
    Y_REMU_POP = 588,              /* Y_REMU_POP  */
    Y_ROL_POP = 589,               /* Y_ROL_POP  */
    Y_ROR_POP = 590,               /* Y_ROR_POP  */
    Y_S_D_POP = 591,               /* Y_S_D_POP  */
    Y_S_S_POP = 592,               /* Y_S_S_POP  */
    Y_SD_POP = 593,                /* Y_SD_POP  */
    Y_SEQ_POP = 594,               /* Y_SEQ_POP  */
    Y_SGE_POP = 595,               /* Y_SGE_POP  */
    Y_SGEU_POP = 596,              /* Y_SGEU_POP  */
    Y_SGT_POP = 597,               /* Y_SGT_POP  */
    Y_SGTU_POP = 598,              /* Y_SGTU_POP  */
    Y_SLE_POP = 599,               /* Y_SLE_POP  */
    Y_SLEU_POP = 600,              /* Y_SLEU_POP  */
    Y_SNE_POP = 601,               /* Y_SNE_POP  */
    Y_ULH_POP = 602,               /* Y_ULH_POP  */
    Y_ULHU_POP = 603,              /* Y_ULHU_POP  */
    Y_ULW_POP = 604,               /* Y_ULW_POP  */
    Y_USH_POP = 605,               /* Y_USH_POP  */
    Y_USW_POP = 606,               /* Y_USW_POP  */
    Y_ALIAS_DIR = 607,             /* Y_ALIAS_DIR  */
    Y_ALIGN_DIR = 608,             /* Y_ALIGN_DIR  */
    Y_ASCII_DIR = 609,             /* Y_ASCII_DIR  */
    Y_ASCIIZ_DIR = 610,            /* Y_ASCIIZ_DIR  */
    Y_ASM0_DIR = 611,              /* Y_ASM0_DIR  */
    Y_BGNB_DIR = 612,              /* Y_BGNB_DIR  */
    Y_BYTE_DIR = 613,              /* Y_BYTE_DIR  */
    Y_COMM_DIR = 614,              /* Y_COMM_DIR  */
    Y_DATA_DIR = 615,              /* Y_DATA_DIR  */
    Y_DOUBLE_DIR = 616,            /* Y_DOUBLE_DIR  */
    Y_END_DIR = 617,               /* Y_END_DIR  */
    Y_ENDB_DIR = 618,              /* Y_ENDB_DIR  */
    Y_ENDR_DIR = 619,              /* Y_ENDR_DIR  */
    Y_ENT_DIR = 620,               /* Y_ENT_DIR  */
    Y_ERR_DIR = 621,               /* Y_ERR_DIR  */
    Y_EXTERN_DIR = 622,            /* Y_EXTERN_DIR  */
    Y_FILE_DIR = 623,              /* Y_FILE_DIR  */
    Y_FLOAT_DIR = 624,             /* Y_FLOAT_DIR  */
    Y_FMASK_DIR = 625,             /* Y_FMASK_DIR  */
    Y_FRAME_DIR = 626,             /* Y_FRAME_DIR  */
    Y_GLOBAL_DIR = 627,            /* Y_GLOBAL_DIR  */
    Y_HALF_DIR = 628,              /* Y_HALF_DIR  */
    Y_K_DATA_DIR = 629,            /* Y_K_DATA_DIR  */
    Y_K_TEXT_DIR = 630,            /* Y_K_TEXT_DIR  */
    Y_LABEL_DIR = 631,             /* Y_LABEL_DIR  */
    Y_LCOMM_DIR = 632,             /* Y_LCOMM_DIR  */
    Y_LIVEREG_DIR = 633,           /* Y_LIVEREG_DIR  */
    Y_LOC_DIR = 634,               /* Y_LOC_DIR  */
    Y_MASK_DIR = 635,              /* Y_MASK_DIR  */
    Y_NOALIAS_DIR = 636,           /* Y_NOALIAS_DIR  */
    Y_OPTIONS_DIR = 637,           /* Y_OPTIONS_DIR  */
    Y_RDATA_DIR = 638,             /* Y_RDATA_DIR  */
    Y_REPEAT_DIR = 639,            /* Y_REPEAT_DIR  */
    Y_SDATA_DIR = 640,             /* Y_SDATA_DIR  */
    Y_SET_DIR = 641,               /* Y_SET_DIR  */
    Y_SPACE_DIR = 642,             /* Y_SPACE_DIR  */
    Y_STRUCT_DIR = 643,            /* Y_STRUCT_DIR  */
    Y_TEXT_DIR = 644,              /* Y_TEXT_DIR  */
    Y_VERSTAMP_DIR = 645,          /* Y_VERSTAMP_DIR  */
    Y_VREG_DIR = 646,              /* Y_VREG_DIR  */
    Y_WORD_DIR = 647               /* Y_WORD_DIR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_YACC_H_INCLUDED  */
