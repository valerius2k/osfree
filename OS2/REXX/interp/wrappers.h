/* This file contains the redefines of the global function names which should
 * not been exported in their regular names. Since we don't want to write
 * "__regina_" in front of each function we use the hiding technique of
 * redefining the pure name.
 * Be sure to include this file before other Regina header files or source
 * lines are processed.
 */
#ifndef REGINA_WRAPPERS_H_INCLUDED
#define REGINA_WRAPPERS_H_INCLUDED

#define BIFname                      __regina_BIFname
#define CallInternalFunction         __regina_CallInternalFunction
#define CloseOpenFiles               __regina_CloseOpenFiles
#define ConfigStreamQualified        __regina_ConfigStreamQualified
#define DestroyInternalParsingTree   __regina_DestroyInternalParsingTree
#define EndProg                      __regina_EndProg
#define ExpandTinnedTree             __regina_ExpandTinnedTree
#define FreshLine                    __regina_FreshLine
#define FreshNode                    __regina_FreshNode
#define IfcAddQueue                  __regina_IfcAddQueue
#define IfcAllocateMemory            __regina_IfcAllocateMemory
#define IfcCreateQueue               __regina_IfcCreateQueue
#define IfcDelExit                   __regina_IfcDelExit
#define IfcDelFunc                   __regina_IfcDelFunc
#define IfcDelSubcom                 __regina_IfcDelSubcom
#define IfcDeleteQueue               __regina_IfcDeleteQueue
#define IfcDoExit                    __regina_IfcDoExit
#define IfcExecCallBack              __regina_IfcExecCallBack
#define IfcExecFunc                  __regina_IfcExecFunc
#define IfcExecScript                __regina_IfcExecScript
#define IfcFreeMemory                __regina_IfcFreeMemory
#define IfcHaveFunctionExit          __regina_IfcHaveFunctionExit
#define IfcPullQueue                 __regina_IfcPullQueue
#define IfcQueryExit                 __regina_IfcQueryExit
#define IfcQueryFunc                 __regina_IfcQueryFunc
#define IfcQueryQueue                __regina_IfcQueryQueue
#define IfcQuerySubcom               __regina_IfcQuerySubcom
#define IfcRegExit                   __regina_IfcRegExit
#define IfcRegFunc                   __regina_IfcRegFunc
#define IfcRegSubcom                 __regina_IfcRegSubcom
#define IfcReginaCleanup             __regina_IfcReginaCleanup
#define IfcStartUp                   __regina_IfcStartUp
#define IfcSubCmd                    __regina_IfcSubCmd
#define IfcVarPool                   __regina_IfcVarPool
#define IsValidTin                   __regina_IsValidTin
#define Isalnum                      __regina_Isalnum
#define Isalpha                      __regina_Isalpha
#define Iscntrl                      __regina_Iscntrl
#define Isdigit                      __regina_Isdigit
#define Isgraph                      __regina_Isgraph
#define Islower                      __regina_Islower
#define Isprint                      __regina_Isprint
#define Ispunct                      __regina_Ispunct
#define Isspace                      __regina_Isspace
#define Isupper                      __regina_Isupper
#define Isxdigit                     __regina_Isxdigit
#define NewProg                      __regina_NewProg
#define ReginaInitializeProcess      __regina_ReginaInitializeProcess
#define ReginaInitializeThread       __regina_ReginaInitializeThread
#define ReginaSetMutex               __regina_ReginaSetMutex
#define ReginaUnsetMutex             __regina_ReginaUnsetMutex
#define RejectNode                   __regina_RejectNode
#define RestoreInterpreterStatus     __regina_RestoreInterpreterStatus
#define SaveInterpreterStatus        __regina_SaveInterpreterStatus
#define Str_cat                      __regina_Str_cat
#define Str_cat_TSD                  __regina_Str_cat_TSD
#define Str_catstr                   __regina_Str_catstr
#define Str_catstr_TSD               __regina_Str_catstr_TSD
#define Str_ccmp                     __regina_Str_ccmp
#define Str_cmp                      __regina_Str_cmp
#define Str_cncmp                    __regina_Str_cncmp
#define Str_cnocmp                   __regina_Str_cnocmp
#define Str_cre                      __regina_Str_cre
#define Str_cre_TSD                  __regina_Str_cre_TSD
#define Str_crestr                   __regina_Str_crestr
#define Str_crestr_TSD               __regina_Str_crestr_TSD
#define Str_dup                      __regina_Str_dup
#define Str_dup_TSD                  __regina_Str_dup_TSD
#define Str_dupstr                   __regina_Str_dupstr
#define Str_dupstr_TSD               __regina_Str_dupstr_TSD
#define Str_lower                    __regina_Str_lower
#define Str_ncat                     __regina_Str_ncat
#define Str_ncat_TSD                 __regina_Str_ncat_TSD
#define Str_ncatstr                  __regina_Str_ncatstr
#define Str_ncatstr_TSD              __regina_Str_ncatstr_TSD
#define Str_ncmp                     __regina_Str_ncmp
#define Str_ncpy                     __regina_Str_ncpy
#define Str_ncpy_TSD                 __regina_Str_ncpy_TSD
#define Str_ncre                     __regina_Str_ncre
#define Str_ncre_TSD                 __regina_Str_ncre_TSD
#define Str_ndup                     __regina_Str_ndup
#define Str_ndup_TSD                 __regina_Str_ndup_TSD
#define Str_nocat                    __regina_Str_nocat
#define Str_nocat_TSD                __regina_Str_nocat_TSD
#define Str_nodup                    __regina_Str_nodup
#define Str_nodup_TSD                __regina_Str_nodup_TSD
#define Str_strp                     __regina_Str_strp
#define Str_upper                    __regina_Str_upper
#define SubCom                       __regina_SubCom
#define SymbolDetect                 __regina_SymbolDetect
#define TinTree                      __regina_TinTree
#define Tolower                      __regina_Tolower
#define Toupper                      __regina_Toupper
#ifndef __GNUC__
# define __yy_memcpy                  __regina___yy_memcpy
#endif
#define add_envir                    __regina_add_envir
#define addr_close_queue             __regina_addr_close_queue
#define addr_file_info               __regina_addr_file_info
#define addr_io_file                 __regina_addr_io_file
#define addr_io_queue                __regina_addr_io_queue
#define addr_purge_queue             __regina_addr_purge_queue
#define addr_redir_queue             __regina_addr_redir_queue
#define addr_reopen_file             __regina_addr_reopen_file
#define addr_reopen_queue            __regina_addr_reopen_queue
#define addr_reset_file              __regina_addr_reset_file
#define addr_same_queue              __regina_addr_same_queue
#define arexx_b2c                    __regina_arexx_b2c
#define arexx_bitchg                 __regina_arexx_bitchg
#define arexx_bitclr                 __regina_arexx_bitclr
#define arexx_bitset                 __regina_arexx_bitset
#define arexx_bittst                 __regina_arexx_bittst
#define arexx_bitcomp                __regina_arexx_bitcomp
#define arexx_compress               __regina_arexx_compress
#define arexx_c2b                    __regina_arexx_c2b
#define arexx_close                  __regina_arexx_close
#define arexx_eof                    __regina_arexx_eof
#define arexx_exists                 __regina_arexx_exists
#define arexx_export                 __regina_arexx_export
#define arexx_freespace              __regina_arexx_freespace
#define arexx_getspace               __regina_arexx_getspace
#define arexx_hash                   __regina_arexx_hash
#define arexx_import                 __regina_arexx_import
#define arexx_open                   __regina_arexx_open
#define arexx_pragma                 __regina_arexx_pragma
#define arexx_randu                  __regina_arexx_randu
#define arexx_readch                 __regina_arexx_readch
#define arexx_readln                 __regina_arexx_readln
#define arexx_seek                   __regina_arexx_seek
#define arexx_show                   __regina_arexx_show
#define arexx_storage                __regina_arexx_storage
#define arexx_trim                   __regina_arexx_trim
#define arexx_upper                  __regina_arexx_upper
#define arexx_writech                __regina_arexx_writech
#define arexx_writeln                __regina_arexx_writeln
#define argv0                        __regina_argv0
#define atopos                       __regina_atopos
#define atoposrx64                   __regina_atoposrx64
#define atoposorzero                 __regina_atoposorzero
#define atozpos                      __regina_atozpos
#define atozposrx64                  __regina_atozposrx64
#define basedays                     __regina_basedays
#define bmstrstr                     __regina_bmstrstr
#define buildtinfunc                 __regina_buildtinfunc
#define calcul                       __regina_calcul
#define call_known_external          __regina_call_known_external
#define call_unknown_external        __regina_call_unknown_external
#define char_info                    __regina_char_info
#define checkparam                   __regina_checkparam
#define cleanup_envirpart            __regina_cleanup_envirpart
#define clear_ignore_novalue         __regina_clear_ignore_novalue
#define clear_queue_on_rxstack       __regina_clear_queue_on_rxstack
#define cms_buftype                  __regina_cms_buftype
#define cms_desbuf                   __regina_cms_desbuf
#define cms_dropbuf                  __regina_cms_dropbuf
#define cms_find                     __regina_cms_find
#define cms_index                    __regina_cms_index
#define cms_justify                  __regina_cms_justify
#define cms_makebuf                  __regina_cms_makebuf
#define cms_sleep                    __regina_cms_sleep
#define cms_state                    __regina_cms_state
#define closefile                    __regina_closefile
#define condition_hook               __regina_condition_hook
#define connect_to_rxstack           __regina_connect_to_rxstack
#define convert_date                 __regina_convert_date
#define convert_time                 __regina_convert_time
#define copy_stem                    __regina_copy_stem
#define count_params                 __regina_count_params
#define cpu_time                     __regina_cpu_time
#define creat_sysinfo                __regina_creat_sysinfo
#define create_new_varpool           __regina_create_new_varpool
#define create_queue                 __regina_create_queue
#define create_queue_on_rxstack      __regina_create_queue_on_rxstack
#define dbg_allocated                __regina_dbg_allocated
#define dbg_dumpfiles                __regina_dbg_dumpfiles
#define dbg_dumptree                 __regina_dbg_dumptree
#define dbg_dumpvars                 __regina_dbg_dumpvars
#define dbg_freelists                __regina_dbg_freelists
#define dbg_listleaked               __regina_dbg_listleaked
#define dbg_memorystats              __regina_dbg_memorystats
#define dbg_traceback                __regina_dbg_traceback
#define deallocplink                 __regina_deallocplink
#define default_external_address     __regina_default_external_address
#define default_external_name        __regina_default_external_name
#define default_port_number          __regina_default_port_number
#define deinit_rexxsaa               __regina_deinit_rexxsaa
#define del_envir                    __regina_del_envir
#define delete_queue_from_rxstack    __regina_delete_queue_from_rxstack
#define delete_an_internal_queue     __regina_delete_an_internal_queue
#define delete_queue                 __regina_delete_queue
#define descr_copy                   __regina_descr_copy
#define descr_sign                   __regina_descr_sign
#define descr_to_int                 __regina_descr_to_int
#define destroyargs                  __regina_destroyargs
#define destroytree                  __regina_destroytree
#define detach                       __regina_detach
#define disconnect_from_rxstack      __regina_disconnect_from_rxstack
#define do_instore                   __regina_do_instore
#define do_options                   __regina_do_options
#define dointerpret                  __regina_dointerpret
#define doparse                      __regina_doparse
#define dos_do_command               __regina_dos_do_command
#define drop_buffer                  __regina_drop_buffer
#define drop_dirvar                  __regina_drop_dirvar
#define drop_var                     __regina_drop_var
#define dumptree                     __regina_dumptree
#define dumpvarcontent               __regina_dumpvarcontent
#define dumpvars                     __regina_dumpvars
#define enter_macro                  __regina_enter_macro
#define envir_exists                 __regina_envir_exists
#define errortext                    __regina_errortext
#define clear_errortext_buffers      __regina_clear_errortext_buffers
#define external_queues_used         __regina_external_queues_used
#define ext_pool_value               __regina_ext_pool_value
#define evaluate                     __regina_evaluate
#define execute_external             __regina_execute_external
#define exit_hook                    __regina_exit_hook
#define exiterror                    __regina_exiterror
#define expand_to_str                __regina_expand_to_str
#define expose_var                   __regina_expose_var
#define fetch_file                   __regina_fetch_file
#define fetch_string                 __regina_fetch_string
#define filename_cmp                 __regina_filename_cmp
#define fill_input_queue_stem        __regina_fill_input_queue_stem
#define fill_input_queue_stream      __regina_fill_input_queue_stream
#define fill_queue_name              __regina_fill_queue_name
#define find_free_slot               __regina_find_free_slot
#define find_library                 __regina_find_library
#define find_shared_library          __regina_find_shared_library
#define find_stack_direction         __regina_find_stack_direction
#define firstmacro                   __regina_firstmacro
#define fix_compound                 __regina_fix_compound
#define fix_compoundnum              __regina_fix_compoundnum
#define fixup_file                   __regina_fixup_file
#define flush_stack                  __regina_flush_stack
#define flush_trace_chars            __regina_flush_trace_chars
#define free_a_descr                 __regina_free_a_descr
#define free_orphaned_libs           __regina_free_orphaned_libs
#define getGlobalTSD                 __regina_getGlobalTSD
#define get_a_chunk                  __regina_get_a_chunk
#define get_a_chunkTSD               __regina_get_a_chunkTSD
#define get_a_descr                  __regina_get_a_descr
#define get_a_streng                 __regina_get_a_streng
#define get_a_strengTSD              __regina_get_a_strengTSD
#define get_default_port_number      __regina_get_default_port_number
#define get_default_server_address   __regina_get_default_server_address
#define get_envir_details            __regina_get_envir_details
#define get_external_routine         __regina_get_external_routine
#define get_it_anyway                __regina_get_it_anyway
#define get_it_anyway_compound       __regina_get_it_anyway_compound
#define get_length_from_header       __regina_get_length_from_header
#define get_line_from_rxstack        __regina_get_line_from_rxstack
#define get_next_variable            __regina_get_next_variable
#define get_number_in_queue_from_rxstack __regina_get_number_in_queue_from_rxstack
#define get_options_flag             __regina_get_options_flag
#define get_parameter                __regina_get_parameter
#define get_queue                    __regina_get_queue
#define get_queue_from_rxstack       __regina_get_queue_from_rxstack
#define get_subcomed_envir           __regina_get_subcomed_envir
#define get_sys_errlist              __regina_get_sys_errlist
#define getdescr                     __regina_getdescr
#define getdirvalue                  __regina_getdirvalue
#define getlabel                     __regina_getlabel
#define getonechar                   __regina_getonechar
#define getoptionchar                __regina_getoptionchar
#define getsecs                      __regina_getsecs
#define getsigs                      __regina_getsigs
#define getsourceline                __regina_getsourceline
#define getsym                       __regina_getsym
#define gettraps                     __regina_gettraps
#define getvalue                     __regina_getvalue
#define give_a_chunk                 __regina_give_a_chunk
#define give_a_chunkTSD              __regina_give_a_chunkTSD
#define give_a_streng                __regina_give_a_streng
#define give_a_strengTSD             __regina_give_a_strengTSD
#define halt_raised                  __regina_halt_raised
#define hashvalue                    __regina_hashvalue
#define hashvalue_ic                 __regina_hashvalue_ic
#define hashvalue_var                __regina_hashvalue_var
#define have_allocated               __regina_have_allocated
#define hookup                       __regina_hookup
#define hookup_input                 __regina_hookup_input
#define hookup_input_output          __regina_hookup_input_output
#define hookup_output                __regina_hookup_output
#define hookup_output2               __regina_hookup_output2
#define identify_trap                __regina_identify_trap
#define initargs                     __regina_initargs
#define init_arexxf                  __regina_init_arexxf
#define init_builtin                 __regina_init_builtin
#define init_client                  __regina_init_client
#define init_envir                   __regina_init_envir
#define init_error                   __regina_init_error
#define init_expr                    __regina_init_expr
#define init_external_queue          __regina_init_external_queue
#define init_filetable               __regina_init_filetable
#define init_library                 __regina_init_library
#define init_math                    __regina_init_math
#define init_memory                  __regina_init_memory
#define init_rexxsaa                 __regina_init_rexxsaa
#define init_shell                   __regina_init_shell
#define init_spec_vars               __regina_init_spec_vars
#define init_stacks                  __regina_init_stacks
#define init_tracing                 __regina_init_tracing
#define init_vars                    __regina_init_vars
#define init_vmf                     __regina_init_vmf
#define init_vms                     __regina_init_vms
#define initplist                    __regina_initplist
#define int_to_streng                __regina_int_to_streng
#define interpret                    __regina_interpret
#define intertrace                   __regina_intertrace
#define invo_strings                 __regina_invo_strings
#define is_a_descr                   __regina_is_a_descr
#define isboolean                    __regina_isboolean
#define isvariable                   __regina_isvariable
#define jump_interpreter_exit        __regina_jump_interpreter_exit
#define jump_rexx_signal             __regina_jump_rexx_signal
#define jump_script_exit             __regina_jump_script_exit
#define kill_lines                   __regina_kill_lines
#define kill_variables               __regina_kill_variables
#define killsystem                   __regina_killsystem
#define known_reserved_variable      __regina_known_reserved_variable
#define l_to_u                       __regina_l_to_u
#define lineno_of                    __regina_lineno_of
#define lines_in_stack               __regina_lines_in_stack
#define listleaked                   __regina_listleaked
#define loaded_lib_func              __regina_loaded_lib_func
#define make_buffer                  __regina_make_buffer
#define makeargs                     __regina_makeargs
#define makesimpleargs               __regina_makesimpleargs
#define mark_descrs                  __regina_mark_descrs
#define mark_filetable               __regina_mark_filetable
#define mark_listleaked_params       __regina_mark_listleaked_params
#define mark_param_cache             __regina_mark_param_cache
#define mark_signals                 __regina_mark_signals
#define mark_stack                   __regina_mark_stack
#define mark_systeminfo              __regina_mark_systeminfo
#define markmemory                   __regina_markmemory
#define marksource                   __regina_marksource
#define marksubtree                  __regina_marksubtree
#define markvariables                __regina_markvariables
#define mem_cmpic                    __regina_mem_cmpic
#define mem_lower                    __regina_mem_lower
#define mem_upper                    __regina_mem_upper
#define mem_lowerrx64                __regina_mem_lowerrx64
#define mem_upperrx64                __regina_mem_upperrx64
#define memory_stats                 __regina_memory_stats
#define months                       __regina_months
#define my_fullpath                  __regina_my_fullpath
#define my_fullpathstreng            __regina_my_fullpathstreng
#define my_splitpath2                __regina_my_splitpath2
#define myatof                       __regina_myatof
#define myatol                       __regina_myatol
#define myfree                       __regina_myfree
#define myfreeTSD                    __regina_myfreeTSD
#define mygetenv                     __regina_mygetenv
#define myisinteger                  __regina_myisinteger
#define myisnumber                   __regina_myisnumber
#define myiswnumber                  __regina_myiswnumber
#define mymalloc                     __regina_mymalloc
#define mymallocTSD                  __regina_mymallocTSD
#define newlabel                     __regina_newlabel
#define newlevel                     __regina_newlevel
#define numeric_forms                __regina_numeric_forms
#define os2_beep                     __regina_os2_beep
#define os2_directory                __regina_os2_directory
#define os2_filespec                 __regina_os2_filespec
#define parse_queue                  __regina_parse_queue
#define parseargtree                 __regina_parseargtree
#define parser_data                  __regina_parser_data
#define perform                      __regina_perform
#define popcallstack                 __regina_popcallstack
#define popline                      __regina_popline
#define posix_do_command             __regina_posix_do_command
#define posix_run_as_child           __regina_posix_run_as_child
#define post_process_system_call     __regina_post_process_system_call
#define purge_filetable              __regina_purge_filetable
#define purge_flists                 __regina_purge_flists
#define purge_library                __regina_purge_library
#define purge_stacks                 __regina_purge_stacks
#define pushcallstack                __regina_pushcallstack
#define put_stem                     __regina_put_stem
#define queue_line_fifo_to_rxstack   __regina_queue_line_fifo_to_rxstack
#define queue_line_lifo_to_rxstack   __regina_queue_line_lifo_to_rxstack
#define queue_trace_char             __regina_queue_trace_char
#define read_result_from_rxstack     __regina_read_result_from_rxstack
#define readkbdline                  __regina_readkbdline
#define regina_signal                __regina_regina_signal
#define regmarker                    __regina_regmarker
#define removelevel                  __regina_removelevel
#define restore_variable_state       __regina_restore_variable_state
#define retlength                    __regina_retlength
#define retvalue                     __regina_retvalue
#define rex_getcaller                __regina_rex_getcaller
#define rex_getcallstack             __regina_rex_getcallstack
#define rex_gciprefixchar            __regina_rex_gciprefixchar
#define rex_lower                    __regina_rex_lower
#define rex_poolid                   __regina_rex_poolid
#define rex_rxfuncadd                __regina_rex_rxfuncadd
#define rex_rxfuncdefine             __regina_rex_rxfuncdefine
#define rex_rxfuncdrop               __regina_rex_rxfuncdrop
#define rex_rxfuncerrmsg             __regina_rex_rxfuncerrmsg
#define rex_rxfuncquery              __regina_rex_rxfuncquery
#define rex_rxqueue                  __regina_rex_rxqueue
#define rex_userid                   __regina_rex_userid
#define run_popen                    __regina_run_popen
#define rx64_to_streng               __regina_rx64_to_streng
#define set_err_message              __regina_set_err_message
#define send_command_to_rxstack      __regina_send_command_to_rxstack
#define setGlobalTSD                 __regina_setGlobalTSD
#define set_envir                    __regina_set_envir
#define set_ignore_novalue           __regina_set_ignore_novalue
#define set_locale_info              __regina_set_locale_info
#define set_options_flag             __regina_set_options_flag
#define set_pause_at_exit            __regina_set_pause_at_exit
#define set_queue                    __regina_set_queue
#define set_queue_in_rxstack         __regina_set_queue_in_rxstack
#define set_reserved_value           __regina_set_reserved_value
#define set_rexx_halt                __regina_set_rexx_halt
#define set_trace                    __regina_set_trace
#define set_trace_char               __regina_set_trace_char
#define set_subcomed_envir           __regina_set_subcomed_envir
#define setdirvalue                  __regina_setdirvalue
#define setshortcut                  __regina_setshortcut
#define setshortcutnum               __regina_setshortcutnum
#define setup_system                 __regina_setup_system
#define setvalue                     __regina_setvalue
#define shortcut                     __regina_shortcut
#define shortcutnum                  __regina_shortcutnum
#define showerror                    __regina_showerror
#define show_free_lists              __regina_show_free_lists
#define signal_setup                 __regina_signal_setup
#define signalnames                  __regina_signalnames
#define splitoffarg                  __regina_splitoffarg
#define stack_fifo                   __regina_stack_fifo
#define stack_lifo                   __regina_stack_lifo
#define stack_to_line                __regina_stack_to_line
#define starttrace                   __regina_starttrace
#if defined(DYNAMIC_STATIC)
#define static_dlopen                __regina_static_dlopen
#define static_dlsym                 __regina_static_dlsym
#define static_list_packages         __regina_static_list_packages
#endif
#define std_abbrev                   __regina_std_abbrev
#define std_abs                      __regina_std_abs
#define std_address                  __regina_std_address
#define std_arg                      __regina_std_arg
#define std_b2x                      __regina_std_b2x
#define std_bitand                   __regina_std_bitand
#define std_bitor                    __regina_std_bitor
#define std_bitxor                   __regina_std_bitxor
#define std_c2d                      __regina_std_c2d
#define std_c2x                      __regina_std_c2x
#define std_center                   __regina_std_center
#define std_changestr                __regina_std_changestr
#define std_charin                   __regina_std_charin
#define std_charout                  __regina_std_charout
#define std_chars                    __regina_std_chars
#define std_compare                  __regina_std_compare
#define std_condition                __regina_std_condition
#define std_copies                   __regina_std_copies
#define std_countstr                 __regina_std_countstr
#define std_d2c                      __regina_std_d2c
#define std_d2x                      __regina_std_d2x
#define std_datatype                 __regina_std_datatype
#define std_date                     __regina_std_date
#define std_delstr                   __regina_std_delstr
#define std_delword                  __regina_std_delword
#define std_digits                   __regina_std_digits
#define std_errortext                __regina_std_errortext
#define std_form                     __regina_std_form
#define std_format                   __regina_std_format
#define std_fuzz                     __regina_std_fuzz
#define std_insert                   __regina_std_insert
#define std_lastpos                  __regina_std_lastpos
#define std_left                     __regina_std_left
#define std_length                   __regina_std_length
#define std_linein                   __regina_std_linein
#define std_lineout                  __regina_std_lineout
#define std_lines                    __regina_std_lines
#define std_max                      __regina_std_max
#define std_min                      __regina_std_min
#define std_overlay                  __regina_std_overlay
#define std_pos                      __regina_std_pos
#define std_qualify                  __regina_std_qualify
#define std_queued                   __regina_std_queued
#define std_random                   __regina_std_random
#define std_reverse                  __regina_std_reverse
#define std_right                    __regina_std_right
#define std_sign                     __regina_std_sign
#define std_sourceline               __regina_std_sourceline
#define std_space                    __regina_std_space
#define std_stream                   __regina_std_stream
#define std_strip                    __regina_std_strip
#define std_substr                   __regina_std_substr
#define std_subword                  __regina_std_subword
#define std_symbol                   __regina_std_symbol
#define std_time                     __regina_std_time
#define std_trace                    __regina_std_trace
#define std_translate                __regina_std_translate
#define std_trunc                    __regina_std_trunc
#define std_value                    __regina_std_value
#define std_verify                   __regina_std_verify
#define std_word                     __regina_std_word
#define std_wordindex                __regina_std_wordindex
#define std_wordlength               __regina_std_wordlength
#define std_wordpos                  __regina_std_wordpos
#define std_words                    __regina_std_words
#define std_x2b                      __regina_std_x2b
#define std_x2c                      __regina_std_x2c
#define std_x2d                      __regina_std_x2d
#define std_xrange                   __regina_std_xrange
#define str_abs                      __regina_str_abs
#define str_binerize                 __regina_str_binerize
#define str_digitize                 __regina_str_digitize
#define str_format                   __regina_str_format
#define str_format_orig              __regina_str_format_orig
#define str_norm                     __regina_str_norm
#define str_normalize                __regina_str_normalize
#define str_of                       __regina_str_of
#define str_round                    __regina_str_round
#define str_round_lostdigits         __regina_str_round_lostdigits
#define str_sign                     __regina_str_sign
#define str_strip                    __regina_str_strip
#define str_true                     __regina_str_true
#define str_trunc                    __regina_str_trunc
#define streng_to_int                __regina_streng_to_int
#define streng_to_rx64               __regina_streng_to_rx64
#define string_add                   __regina_string_add
#define string_div                   __regina_string_div
#define string_incr                  __regina_string_incr
#define string_mul                   __regina_string_mul
#define string_pow                   __regina_string_pow
#define string_test                  __regina_string_test
#define subcom_hook                  __regina_subcom_hook
#define suberrortext                 __regina_suberrortext
#define system_setup                 __regina_system_setup
#define system_type                  __regina_system_type
#define term_external_queue          __regina_term_external_queue
#define timeout_queue                __regina_timeout_queue
#define timeout_queue_on_rxstack     __regina_timeout_queue_on_rxstack
#define tmpstr_of                    __regina_tmpstr_of
#define traceback                    __regina_traceback
#define tracebool                    __regina_tracebool
#define tracecompound                __regina_tracecompound
#define traceerror                   __regina_traceerror
#define traceline                    __regina_traceline
#define tracenumber                  __regina_tracenumber
#define tracevalue                   __regina_tracevalue
#define treadit                      __regina_treadit
#define type_buffer                  __regina_type_buffer
#define u_to_l                       __regina_u_to_l
#define unx_chdir                    __regina_unx_chdir
#define unx_close                    __regina_unx_close
#define unx_crypt                    __regina_unx_crypt
#define unx_eof                      __regina_unx_eof
#define unx_fork                     __regina_unx_fork
#define unx_getenv                   __regina_unx_getenv
#define unx_getpid                   __regina_unx_getpid
#define unx_gettid                   __regina_unx_gettid
#define unx_open                     __regina_unx_open
#define unx_popen                    __regina_unx_popen
#define unx_putenv                   __regina_unx_putenv
#define unx_uname                    __regina_unx_uname
#define unx_unixerror                __regina_unx_unixerror
#define update_envirs                __regina_update_envirs
#define upper_var                    __regina_upper_var
#define valid_var_symbol             __regina_valid_var_symbol
#define var_was_found                __regina_var_was_found
#define variables_per_SAA            __regina_variables_per_SAA
#define vms_do_command               __regina_vms_do_command
#define vms_f_cvsi                   __regina_vms_f_cvsi
#define vms_f_cvtime                 __regina_vms_f_cvtime
#define vms_f_cvui                   __regina_vms_f_cvui
#define vms_f_directory              __regina_vms_f_directory
#define vms_f_element                __regina_vms_f_element
#define vms_f_extract                __regina_vms_f_extract
#define vms_f_fao                    __regina_vms_f_fao
#define vms_f_file_attributes        __regina_vms_f_file_attributes
#define vms_f_getdvi                 __regina_vms_f_getdvi
#define vms_f_getjpi                 __regina_vms_f_getjpi
#define vms_f_getqui                 __regina_vms_f_getqui
#define vms_f_getsyi                 __regina_vms_f_getsyi
#define vms_f_identifier             __regina_vms_f_identifier
#define vms_f_integer                __regina_vms_f_integer
#define vms_f_length                 __regina_vms_f_length
#define vms_f_locate                 __regina_vms_f_locate
#define vms_f_logical                __regina_vms_f_logical
#define vms_f_message                __regina_vms_f_message
#define vms_f_mode                   __regina_vms_f_mode
#define vms_f_parse                  __regina_vms_f_parse
#define vms_f_pid                    __regina_vms_f_pid
#define vms_f_privilege              __regina_vms_f_privilege
#define vms_f_process                __regina_vms_f_process
#define vms_f_search                 __regina_vms_f_search
#define vms_f_setprv                 __regina_vms_f_setprv
#define vms_f_string                 __regina_vms_f_string
#define vms_f_time                   __regina_vms_f_time
#define vms_f_trnlnm                 __regina_vms_f_trnlnm
#define vms_f_type                   __regina_vms_f_type
#define vms_f_user                   __regina_vms_f_user
#define vms_killproc                 __regina_vms_killproc
#define vms_resolv_symbol            __regina_vms_resolv_symbol
#define wrapper_dummy_for_aix        __regina_wrapper_dummy_for_aix
#define wrapper_get_addr             __regina_wrapper_get_addr
#define wrapper_load                 __regina_wrapper_load
#define wrapper_unload               __regina_wrapper_unload

#endif /* REGINA_WRAPPERS_H_INCLUDED */
