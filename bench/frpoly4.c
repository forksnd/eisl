void init_declare(void){int th=0;
signal(SIGINT, signal_handler_c);
Fsetcatchsymbols(NIL);Fpsetdynenv(Fmakesym("V"),NIL,0);Fpsetdynenv(Fmakesym("*X*"),NIL,0);Fpsetdynenv(Fmakesym("U*"),NIL,0);Fset_cdr(Fmakesym("R"),Fbigxtoparmanent(NIL));Fset_opt(Fmakesym("R"),GLOBAL);
Fset_cdr(Fmakesym("R2"),Fbigxtoparmanent(NIL));Fset_opt(Fmakesym("R2"),GLOBAL);
Fset_cdr(Fmakesym("R3"),Fbigxtoparmanent(NIL));Fset_opt(Fmakesym("R3"),GLOBAL);
Fpeval(Fcons(Fmakesym("EISL-IGNORE-TOPLEVEL-CHECK"),Fcons(T,NIL)),0);
Fpeval(Fcons(Fmakesym("DEFMACRO"),Fcons(Fmakesym("POINTERGP"),Fcons(Fcons(Fmakesym("X"),Fcons(Fmakesym("Y"),NIL)),Fcons(Fcons(Fmakesym("QUASI-QUOTE"),Fcons(Fcons(Fmakesym(">"),Fcons(Fcons(Fmakesym("PROPERTY"),Fcons(Fcons(Fmakesym("UNQUOTE"),Fcons(Fmakesym("X"),NIL)),Fcons(Fcons(Fmakesym("QUOTE"),Fcons(Fmakesym("ORDER"),NIL)),NIL))),Fcons(Fcons(Fmakesym("PROPERTY"),Fcons(Fcons(Fmakesym("UNQUOTE"),Fcons(Fmakesym("Y"),NIL)),Fcons(Fcons(Fmakesym("QUOTE"),Fcons(Fmakesym("ORDER"),NIL)),NIL))),NIL))),NIL)),NIL)))),0);
Fpeval(Fcons(Fmakesym("EISL-IGNORE-TOPLEVEL-CHECK"),Fcons(NIL,NIL)),0);
Fpeval(Fcons(Fmakesym("EISL-IGNORE-TOPLEVEL-CHECK"),Fcons(T,NIL)),0);
Fpeval(Fcons(Fmakesym("DEFMACRO"),Fcons(Fmakesym("PCOEFP"),Fcons(Fcons(Fmakesym("E"),NIL),Fcons(Fcons(Fmakesym("QUASI-QUOTE"),Fcons(Fcons(Fmakesym("NOT"),Fcons(Fcons(Fmakesym("CONSP"),Fcons(Fcons(Fmakesym("UNQUOTE"),Fcons(Fmakesym("E"),NIL)),NIL)),NIL)),NIL)),NIL)))),0);
Fpeval(Fcons(Fmakesym("EISL-IGNORE-TOPLEVEL-CHECK"),Fcons(NIL,NIL)),0);
Fpeval(Fcons(Fmakesym("EISL-IGNORE-TOPLEVEL-CHECK"),Fcons(T,NIL)),0);
Fpeval(Fcons(Fmakesym("DEFMACRO"),Fcons(Fmakesym("PZEROP"),Fcons(Fcons(Fmakesym("X"),NIL),Fcons(Fcons(Fmakesym("QUASI-QUOTE"),Fcons(Fcons(Fmakesym("AND"),Fcons(Fcons(Fmakesym("NUMBERP"),Fcons(Fcons(Fmakesym("UNQUOTE"),Fcons(Fmakesym("X"),NIL)),NIL)),Fcons(Fcons(Fmakesym("="),Fcons(Fcons(Fmakesym("UNQUOTE"),Fcons(Fmakesym("X"),NIL)),Fcons(Fmakeint(0),NIL))),NIL))),NIL)),NIL)))),0);
Fpeval(Fcons(Fmakesym("EISL-IGNORE-TOPLEVEL-CHECK"),Fcons(NIL,NIL)),0);
Fpeval(Fcons(Fmakesym("EISL-IGNORE-TOPLEVEL-CHECK"),Fcons(T,NIL)),0);
Fpeval(Fcons(Fmakesym("DEFMACRO"),Fcons(Fmakesym("PZERO"),Fcons(NIL,Fcons(Fmakeint(0),NIL)))),0);
Fpeval(Fcons(Fmakesym("EISL-IGNORE-TOPLEVEL-CHECK"),Fcons(NIL,NIL)),0);
Fpeval(Fcons(Fmakesym("EISL-IGNORE-TOPLEVEL-CHECK"),Fcons(T,NIL)),0);
Fpeval(Fcons(Fmakesym("DEFMACRO"),Fcons(Fmakesym("CPLUS"),Fcons(Fcons(Fmakesym("X"),Fcons(Fmakesym("Y"),NIL)),Fcons(Fcons(Fmakesym("QUASI-QUOTE"),Fcons(Fcons(Fmakesym("+"),Fcons(Fcons(Fmakesym("UNQUOTE"),Fcons(Fmakesym("X"),NIL)),Fcons(Fcons(Fmakesym("UNQUOTE"),Fcons(Fmakesym("Y"),NIL)),NIL))),NIL)),NIL)))),0);
Fpeval(Fcons(Fmakesym("EISL-IGNORE-TOPLEVEL-CHECK"),Fcons(NIL,NIL)),0);
Fpeval(Fcons(Fmakesym("EISL-IGNORE-TOPLEVEL-CHECK"),Fcons(T,NIL)),0);
Fpeval(Fcons(Fmakesym("DEFMACRO"),Fcons(Fmakesym("CTIMES"),Fcons(Fcons(Fmakesym("X"),Fcons(Fmakesym("Y"),NIL)),Fcons(Fcons(Fmakesym("QUASI-QUOTE"),Fcons(Fcons(Fmakesym("*"),Fcons(Fcons(Fmakesym("UNQUOTE"),Fcons(Fmakesym("X"),NIL)),Fcons(Fcons(Fmakesym("UNQUOTE"),Fcons(Fmakesym("Y"),NIL)),NIL))),NIL)),NIL)))),0);
Fpeval(Fcons(Fmakesym("EISL-IGNORE-TOPLEVEL-CHECK"),Fcons(NIL,NIL)),0);
Fpeval(Fcons(Fmakesym("EISL-IGNORE-TOPLEVEL-CHECK"),Fcons(T,NIL)),0);
Fpeval(Fcons(Fmakesym("DEFMACRO"),Fcons(Fmakesym("QUO"),Fcons(Fcons(Fmakesym("X"),Fcons(Fmakesym("Y"),NIL)),Fcons(Fcons(Fmakesym("QUASI-QUOTE"),Fcons(Fcons(Fmakesym("DIV"),Fcons(Fcons(Fmakesym("UNQUOTE"),Fcons(Fmakesym("X"),NIL)),Fcons(Fcons(Fmakesym("UNQUOTE"),Fcons(Fmakesym("Y"),NIL)),NIL))),NIL)),NIL)))),0);
Fpeval(Fcons(Fmakesym("EISL-IGNORE-TOPLEVEL-CHECK"),Fcons(NIL,NIL)),0);
Fpeval(Fcons(Fmakesym("EISL-IGNORE-TOPLEVEL-CHECK"),Fcons(T,NIL)),0);
Fpeval(Fcons(Fmakesym("DEFMACRO"),Fcons(Fmakesym("ODDP"),Fcons(Fcons(Fmakesym("X"),NIL),Fcons(Fcons(Fmakesym("QUASI-QUOTE"),Fcons(Fcons(Fmakesym("EQ"),Fcons(Fcons(Fmakesym("MOD"),Fcons(Fcons(Fmakesym("UNQUOTE"),Fcons(Fmakesym("X"),NIL)),Fcons(Fmakeint(2),NIL))),Fcons(Fmakeint(1),NIL))),NIL)),NIL)))),0);
Fpeval(Fcons(Fmakesym("EISL-IGNORE-TOPLEVEL-CHECK"),Fcons(NIL,NIL)),0);
Fpeval(Fcons(Fmakesym("EISL-IGNORE-TOPLEVEL-CHECK"),Fcons(T,NIL)),0);
Fpeval(Fcons(Fmakesym("DEFMACRO"),Fcons(Fmakesym("PFLOOR"),Fcons(Fcons(Fmakesym("X"),Fcons(Fmakesym("Y"),NIL)),Fcons(Fcons(Fmakesym("QUASI-QUOTE"),Fcons(Fcons(Fmakesym("DIV"),Fcons(Fcons(Fmakesym("UNQUOTE"),Fcons(Fmakesym("X"),NIL)),Fcons(Fcons(Fmakesym("UNQUOTE"),Fcons(Fmakesym("Y"),NIL)),NIL))),NIL)),NIL)))),0);
Fpeval(Fcons(Fmakesym("EISL-IGNORE-TOPLEVEL-CHECK"),Fcons(NIL,NIL)),0);
