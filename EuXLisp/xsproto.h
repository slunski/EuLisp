///-----------------------------------------------------------------------------
/// ---                 EuLisp System 'EuXLisp'
///-----------------------------------------------------------------------------
///  File: Automatically generated function prototypes by cproto
///  Description: EuXLisp main routine
///-----------------------------------------------------------------------------
#ifndef XSPROTO_H
#define XSPROTO_H

// msstuff.c
extern void osinit(char *banner);
extern void osfinish();
extern void oserror(char *msg);
extern int osrand(int n);
extern FILE *osaopen(char *name, char *mode);
extern FILE *osbopen(char *name, char *mode);
extern int osclose(FILE *fp);
extern long ostell(FILE *fp);
extern int osunlink(char *path);
extern int osseek(FILE *fp, long offset, int whence);
extern int osagetc(FILE *fp);
extern int osaputc(int ch, FILE *fp);
extern int osbgetc(FILE *fp);
extern int osbputc(int ch, FILE *fp);
extern int ostgetc();
extern int osselect(FILE *fp);
extern int ospeekchar(FILE *fp);
extern void ostputc(int ch);
extern void ostputs(char *str);
extern void osflush();
extern void oscheck();
extern void oscheck_int();
extern void set_ticks();
extern LVAL xtime();
extern void check_if_disabled(char *name);
extern LVAL xsystem();
extern LVAL xtmpfile();
extern LVAL xgetenv();
extern LVAL xputenv();
extern void ossymbols();

// xscheme.c
extern void xlmain(int argc, char **argv);
extern void xlload();
extern void xlcontinue();
extern void xlcleanup();
extern void xltoplevel();
extern void xltoplevel_int();
extern void xlfail(char *msg, LVAL err);
extern void xlerror(char *msg, LVAL arg);
extern void set_xlframe(int n);
extern void do_xlerror(char *msg, LVAL arg, LVAL errname, int cc);
extern void xlinterror(char *msg, LVAL arg, LVAL errname);
extern void xlcerror(char *msg, LVAL arg, LVAL errname);
extern void callerrorhandler();
extern void xlabort(char *msg);
extern void xlfatal(char *msg);
extern void xlwrapup(int n);
extern void do_backtrace(LVAL *from);
extern LVAL xbacktrace();
extern LVAL xframe_up();
extern LVAL xframe_down();
extern LVAL xframe_env();
extern LVAL xframe_fun();

// xscom.c
extern LVAL xlcompile(LVAL expr, LVAL ctenv);
extern LVAL xlfunction(LVAL fun, LVAL fargs, LVAL body, LVAL ctenv);
extern int length(LVAL list);
extern LVAL findsym(LVAL symbol, LVAL list);
extern LVAL find_or_load_module(LVAL sym);
extern LVAL xreintern();
extern LVAL xreintern_syntax();
extern LVAL xmodule_directives();
extern LVAL append(LVAL a, LVAL b);
extern LVAL xmacro_error();
extern void decode_procedure(LVAL fptr, LVAL fun);
extern int decode_instruction(LVAL fptr, LVAL code, int lc, LVAL env);

// xsdmem.c
extern LVAL cons(LVAL x, LVAL y);
extern LVAL newframe(LVAL parent, int size);
extern LVAL cvstring(char *str);
extern LVAL cvstring2(char *str, int len);
extern LVAL cvsymbol(char *pname);
extern LVAL cvmodule(char *name);
extern LVAL cvfixnum(long n);
extern LVAL cvflonum(double n);
extern LVAL cvchar(int ch);
extern LVAL cvclosure(LVAL code, LVAL env);
extern LVAL cvpromise(LVAL code, LVAL env);
extern LVAL cvsubr(int type, LVAL (*fcn)(), int offset);
extern LVAL cvstream(FILE *fp, int flags);
extern LVAL cvtable(LVAL comp, LVAL fill);
extern LVAL newvector(int size);
extern LVAL newstring(int size);
extern LVAL newcode(int nlits);
extern LVAL newcontinuation(int size);
extern LVAL newobject(LVAL cls, int size);
extern LVAL newgeneric();
extern LVAL newmethod();
extern LVAL newslot(LVAL name);
extern int nexpand(int size);
extern int checkvmemory(int size);
extern int makevmemory(int size);
extern int vexpand(int size);
extern NSEGMENT *newnsegment(unsigned int n);
extern VSEGMENT *newvsegment(unsigned int n);
extern void pstack();
extern void gc(int reason);
extern void xlminit(unsigned int ssize);

// xsftab.c
extern LVAL xstdin();
extern LVAL xstdout();
extern int eq(LVAL arg1, LVAL arg2);
extern int eqv(LVAL arg1, LVAL arg2);
extern int equal(LVAL arg1, LVAL arg2);
extern int equals(LVAL arg1, LVAL arg2);
extern int vectorequal(LVAL v1, LVAL v2);
extern LVAL xltoofew(char *cfn_name);
extern void xltoofew_int();
extern void xltoomany(char *cfn_name);
extern void xltoomany_int();
extern LVAL xlbadtype(LVAL val, char *name, char *fn);

// xsfun1.c
extern LVAL xcons();
extern LVAL xcar();
extern LVAL xicar();
extern LVAL xcdr();
extern LVAL xicdr();
extern LVAL xcaar();
extern LVAL xcadr();
extern LVAL xcdar();
extern LVAL xcddr();
extern LVAL xcaaar();
extern LVAL xcaadr();
extern LVAL xcadar();
extern LVAL xcaddr();
extern LVAL xcdaar();
extern LVAL xcdadr();
extern LVAL xcddar();
extern LVAL xcdddr();
extern LVAL xcaaaar();
extern LVAL xcaaadr();
extern LVAL xcaadar();
extern LVAL xcaaddr();
extern LVAL xcadaar();
extern LVAL xcadadr();
extern LVAL xcaddar();
extern LVAL xcadddr();
extern LVAL xcdaaar();
extern LVAL xcdaadr();
extern LVAL xcdadar();
extern LVAL xcdaddr();
extern LVAL xcddaar();
extern LVAL xcddadr();
extern LVAL xcdddar();
extern LVAL xcddddr();
extern LVAL xsetcar();
extern LVAL xisetcar();
extern LVAL xsetcdr();
extern LVAL xisetcdr();
extern LVAL xlist();
extern LVAL xliststar();
extern LVAL xappend();
extern LVAL xlreverse(LVAL next);
extern LVAL xreverse();
extern LVAL xlastpair();
extern LVAL xlength();
extern LVAL xmember();
extern LVAL xmemv();
extern LVAL xmemq();
extern LVAL xlmember(LVAL x, LVAL list, int (*fcn)(LVAL a, LVAL b));
extern LVAL member(int (*fcn)(LVAL a, LVAL b));
extern LVAL xassoc();
extern LVAL xassv();
extern LVAL xassq();
extern LVAL assoc(int (*fcn)(LVAL a, LVAL b));
extern LVAL xlistref();
extern LVAL xlisttail();
extern LVAL xboundp();
extern LVAL xsymvalue();
extern LVAL xsetsymvalue();
extern LVAL xsymplist();
extern LVAL xsetsymplist();
extern LVAL xget();
extern LVAL xput();
extern LVAL xgetsyntax();
extern LVAL xputsyntax();
extern LVAL xtheenvironment();
extern LVAL xprocenvironment();
extern LVAL xenvp();
extern LVAL xenvbindings();
extern LVAL xenvparent();
extern LVAL xvector();
extern LVAL xmakevector();
extern LVAL xvlength();
extern LVAL xivlength();
extern LVAL xvref();
extern LVAL xivref();
extern LVAL xvset();
extern LVAL xivset();
extern LVAL xvectlist();
extern LVAL xlistvect();
extern LVAL xmakearray();
extern LVAL makearray1(int argc, LVAL *argv);
extern LVAL xaref();
extern LVAL xaset();
extern LVAL xnull();
extern LVAL xatom();
extern LVAL xlistp();
extern LVAL xnumberp();
extern LVAL xbooleanp();
extern LVAL xpairp();
extern LVAL xsymbolp();
extern LVAL xkeywordp();
extern LVAL xintegerp();
extern LVAL xrealp();
extern LVAL xcharp();
extern LVAL xstringp();
extern LVAL xvectorp();
extern LVAL xprocedurep();
extern LVAL xobjectp();
extern LVAL xdefaultobjectp();
extern LVAL xeq();
extern LVAL xeqv();
extern LVAL xequal();
extern LVAL xgensym();
extern LVAL xsprintf();

// xsfun2.c
extern void xapply();
extern void xcallcc();
extern void xmap();
extern void xmap1();
extern void xforeach();
extern void xforeach1();
extern void xcallwi();
extern void xcallwo();
extern void xwithfile1();
extern void xload();
extern void xloadnoisily();
extern void xload1();
extern void xforce();
extern void xforce1();
extern LVAL xsymstr();
extern LVAL xstrsym();
extern LVAL xread();
extern LVAL xrdchar();
extern LVAL xrdbyte();
extern LVAL xrdshort();
extern LVAL xrdlong();
extern LVAL xpeek_char();
extern LVAL xchar_readyp();
extern LVAL xeofobjectp();
extern LVAL xwrite();
extern LVAL xprint();
extern LVAL xwrchar();
extern LVAL xwrbyte();
extern LVAL xwrshort();
extern LVAL xwrlong();
extern LVAL xdisplay();
extern LVAL xnewline();
extern LVAL xprbreadth();
extern LVAL xprdepth();
extern LVAL xopeni();
extern LVAL xopeno();
extern LVAL xopena();
extern LVAL xopenu();
extern LVAL xclose();
extern LVAL xclosei();
extern LVAL xcloseo();
extern LVAL xgetfposition();
extern LVAL xsetfposition();
extern LVAL xunlink();
extern LVAL xstreamp();
extern LVAL xinputstreamp();
extern LVAL xoutputstreamp();
extern LVAL xtranson();
extern LVAL xtransoff();
extern LVAL xmakestring();
extern LVAL xstrlen();
extern LVAL xstrnullp();
extern LVAL xstrappend();
extern LVAL xstrref();
extern LVAL xstrset();
extern LVAL xsubstring();
extern LVAL xstrlist();
extern LVAL xliststring();
extern LVAL xstrlss();
extern LVAL xstrleq();
extern LVAL xstreql();
extern LVAL xstrgeq();
extern LVAL xstrgtr();
extern LVAL xstrilss();
extern LVAL xstrileq();
extern LVAL xstrieql();
extern LVAL xstrigeq();
extern LVAL xstrigtr();
extern LVAL xcharint();
extern LVAL xintchar();
extern LVAL xstringnum();
extern LVAL xnumstring();
extern LVAL xchrlss();
extern LVAL xchrleq();
extern LVAL xchreql();
extern LVAL xchrgeq();
extern LVAL xchrgtr();
extern LVAL xchrilss();
extern LVAL xchrileq();
extern LVAL xchrieql();
extern LVAL xchrigeq();
extern LVAL xchrigtr();
extern LVAL xcompile();
extern LVAL xdecompile();
extern LVAL xsave();
extern LVAL xrestore();
extern LVAL xgc();
extern LVAL xerror();
extern LVAL default_handler();
extern LVAL xreset();
extern LVAL xgetarg();
extern LVAL xexit();

// xsimage.c
extern int xlisave(char *fname);
extern FILE *path_open(char *fname, char *env_var_name, char **builtin_path, char *found);
extern int xlirestore(char *fname);
extern OFFTYPE cvoptr(LVAL p);

// xsinit.c
extern void xlinitws(unsigned int ssize);
extern void xlsymbols();

// xsint.c
extern LVAL xtraceon();
extern LVAL xtraceoff();
extern void xlexecute(LVAL fun);
extern void xlapply();
extern void xlreturn();
extern LVAL current_continuation(int cc);
extern void gc_protect(void (*protected_fcn)(void));
extern void xlstkover();

// xsio.c
extern int xlgetc(LVAL fptr);
extern void xlungetc(LVAL fptr, int ch);
extern int xlpeekchar(LVAL fptr);
extern void xlputc(LVAL fptr, int ch);
extern void xlflush();
extern void stdputstr(char *str);
extern void errprint(LVAL expr);
extern void errprin(LVAL expr);
extern void errputstr(char *str);

// xsmath.c
extern LVAL xexactp();
extern LVAL xinexactp();
extern LVAL xatan();
extern LVAL xfloor();
extern LVAL xceiling();
extern LVAL xround();
extern LVAL xtruncate();
extern LVAL xadd();
extern LVAL xmul();
extern LVAL xsub();
extern LVAL xdiv();
extern LVAL xquo();
extern LVAL xrem();
extern LVAL xmin();
extern LVAL xmax();
extern LVAL xexpt();
extern LVAL xlogand();
extern LVAL xlogior();
extern LVAL xlogxor();
extern LVAL xlognot();
extern LVAL xabs();
extern LVAL xadd1();
extern LVAL xsub1();
extern LVAL xsin();
extern LVAL xcos();
extern LVAL xtan();
extern LVAL xasin();
extern LVAL xacos();
extern LVAL xxexp();
extern LVAL xsqrt();
extern LVAL xxlog();
extern LVAL xrandom();
extern LVAL xgcd();
extern LVAL xnegativep();
extern LVAL xzerop();
extern LVAL xpositivep();
extern LVAL xevenp();
extern LVAL xoddp();
extern LVAL xlss();
extern LVAL xleq();
extern LVAL xeql();
extern LVAL xgeq();
extern LVAL xgtr();

// xsmodule.c
extern void init_root_module();
extern void init_root_exports();
extern LVAL module_symbols();
extern LVAL module_exports();
extern LVAL symbol_module();
extern LVAL current_mod();
extern LVAL mod_list();
extern LVAL unintern();
extern LVAL xkeyword_array();
extern LVAL xset_module();
extern LVAL find_module(LVAL sym);
extern LVAL xfind_module();
extern LVAL get_module(char *name);

// xsobj.c
extern LVAL class_of(LVAL obj);
extern LVAL xclassof();
extern void xldescribe(LVAL obj);
extern LVAL xdescribe();
extern LVAL xallocate();
extern LVAL find_key(LVAL key, LVAL inits, LVAL deefault);
extern LVAL xfind_key();
extern LVAL xtelos_error();
extern void xinitloop1();
extern void xinitialize_object();
extern LVAL xinitialize_class();
extern LVAL xclass_name();
extern LVAL xclass_superclasses();
extern LVAL xclass_subclasses();
extern LVAL xclass_slots();
extern LVAL xclass_keywords();
extern LVAL xset_class_keywords();
extern LVAL xclass_instsize();
extern LVAL xclass_abstractp();
extern LVAL xclass_cpl();
extern LVAL xclassp();
extern int xlsubclassp(LVAL cl1, LVAL cl2);
extern LVAL xsubclassp();
extern LVAL xsetivar();
extern LVAL xgetivar();
extern LVAL xgf_name();
extern LVAL xgf_args();
extern LVAL xgf_setargs();
extern LVAL xgf_optargs();
extern LVAL xgf_methods();
extern LVAL xgf_cache1();
extern LVAL xgf_cache2();
extern LVAL xmethod_gf();
extern LVAL xmethod_fun();
extern LVAL xmethod_domain();
extern LVAL xslot_name();
extern LVAL xslot_keyword();
extern LVAL xslot_default();
extern LVAL xset_slot_default();
extern LVAL xslot_requiredp();
extern LVAL xset_slot_requiredp();
extern LVAL xfind_slot_index();
extern void xloinit();
extern LVAL find_and_cache_methods(LVAL gf, LVAL arglist);
extern LVAL xmake_and_add_method();
extern LVAL xmake_method();
extern LVAL xadd_method();
extern LVAL xmake_generic();
extern void telos_bad_ref_error(LVAL object, LVAL wanted, int interp);
extern LVAL xcheck_ref();

// xsprint.c
extern void xlprin1(LVAL expr, LVAL file);
extern void xlprinc(LVAL expr, LVAL file);
extern void xlterpri(LVAL fptr);
extern void xlputstr(LVAL fptr, char *str);

// xsread.c
extern int xlread(LVAL fptr, LVAL *pval);

// xssym.c
extern void xlsubr(char *sname, int type, LVAL (*fcn)(), int offset);
extern LVAL xlenter_keyword(char *name);
extern LVAL xlenter_module(char *name, LVAL module);
extern LVAL xlgetprop(LVAL sym, LVAL prp);
extern void xlputprop(LVAL sym, LVAL val, LVAL prp);
extern LVAL xlgetsyntax(LVAL sym, LVAL prp);
extern void xlputsyntax(LVAL sym, LVAL val, LVAL prp);
extern int hash(char *str, int len);

// xstable.c
extern LVAL xmake_table();
extern LVAL xtable_ref();
extern LVAL xtable_set();
extern LVAL xtable_comparator();
extern LVAL xtable_delete();
extern LVAL xtable_length();
extern LVAL xtable_keys();
extern LVAL xtable_values();
extern LVAL xtable_fill();
extern LVAL xtable_setfill();
extern LVAL xtable_clear();

// xsocket.c
#ifdef SOCK
extern void xlsockerror(char *msg, LVAL val);
extern LVAL socket_socket();
extern LVAL socket_connect();
extern LVAL socket_bind();
extern LVAL socket_listen();
extern LVAL socket_accept();
extern LVAL socket_block();
extern LVAL socket_nonblock();
extern LVAL socket_reuse();
extern LVAL socket_noreuse();
extern LVAL socket_close();
extern LVAL socket_shutdown();
extern LVAL socket_peeraddr();
extern LVAL socket_peerstream();
extern LVAL socket_sockaddr();
extern LVAL socket_sockstream();
extern LVAL socket_host_to_ip();
extern LVAL socket_ip_to_host();
extern LVAL socket_convert_to_stream();
extern LVAL stream_fd();
extern LVAL stream_unbuffered();
extern LVAL stream_block_buffered();
extern LVAL stream_line_buffered();
extern LVAL socket_fd_zero_read();
extern LVAL socket_fd_set_read();
extern LVAL socket_fd_isset_read();
extern LVAL socket_select_read();
extern LVAL socket_fd_zero_write();
extern LVAL socket_fd_set_write();
extern LVAL socket_fd_isset_write();
extern LVAL socket_select_write();
extern int xdr_send_int(FILE *handle, int i);
extern int xdr_recv_int(FILE *handle, int *ip);
extern int xdr_send_double(FILE *handle, double i);
extern int xdr_recv_double(FILE *handle, double *ip);
extern int xdr_send_string(FILE *handle, char *i, int len);
extern int xdr_recv_string(FILE *handle, char **ip, int len);
extern LVAL stream_xdr_send_int();
extern LVAL stream_xdr_recv_int();
extern LVAL stream_xdr_send_float();
extern LVAL stream_xdr_recv_float();
extern LVAL stream_xdr_send_string();
extern LVAL stream_xdr_recv_string();
#endif

///-----------------------------------------------------------------------------
#endif // XSPROTO_H
///-----------------------------------------------------------------------------
