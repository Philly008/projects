# 1 "d:\\hp\\exercises\\pg001\\pg001\\\\combined_PG001.c"
# 1 "D:\\HP\\LR12\\include/lrun.h" 1
 
 












 











# 103 "D:\\HP\\LR12\\include/lrun.h"








































































	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 266 "D:\\HP\\LR12\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 505 "D:\\HP\\LR12\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 508 "D:\\HP\\LR12\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 532 "D:\\HP\\LR12\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 566 "D:\\HP\\LR12\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 589 "D:\\HP\\LR12\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 613 "D:\\HP\\LR12\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 692 "D:\\HP\\LR12\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											int * col_name_len);
# 753 "D:\\HP\\LR12\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 768 "D:\\HP\\LR12\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   int const in_len,
                                   char * * const out_str,
                                   int * const out_len);
# 792 "D:\\HP\\LR12\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 804 "D:\\HP\\LR12\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 812 "D:\\HP\\LR12\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 818 "D:\\HP\\LR12\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char *buffer, long buf_size, unsigned int occurrence,
			    char *search_string, int offset, unsigned int param_val_len, 
			    char *param_name);

 
char *   lr_string (char * str);

 
# 916 "D:\\HP\\LR12\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 923 "D:\\HP\\LR12\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 945 "D:\\HP\\LR12\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1021 "D:\\HP\\LR12\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1050 "D:\\HP\\LR12\\include/lrun.h"


# 1062 "D:\\HP\\LR12\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


int vtc_connect(char * servername, int portnum, int options);
int vtc_disconnect(int pvci);
int vtc_get_last_error(int pvci);
int vtc_query_column(int pvci, char * columnName, int columnIndex, char * *outvalue);
int vtc_query_row(int pvci, int rowIndex, char * **outcolumns, char * **outvalues);
int vtc_send_message(int pvci, char * column, char * message, unsigned short *outRc);
int vtc_send_if_unique(int pvci, char * column, char * message, unsigned short *outRc);
int vtc_send_row1(int pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
int vtc_update_message(int pvci, char * column, int index , char * message, unsigned short *outRc);
int vtc_update_message_ifequals(int pvci, char	*columnName, int index,	char * message, char	*ifmessage,	unsigned short 	*outRc);
int vtc_update_row1(int pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
int vtc_retrieve_message(int pvci, char * column, char * *outvalue);
int vtc_retrieve_messages1(int pvci, char * columnNames, char * delimiter, char * **outvalues);
int vtc_retrieve_row(int pvci, char * **outcolumns, char * **outvalues);
int vtc_increment(int pvci, char * column, int index , int incrValue, int *outValue);
int vtc_clear_message(int pvci, char * column, int index , unsigned short *outRc);
int vtc_clear_column(int pvci, char * column, unsigned short *outRc);
int vtc_ensure_index(int pvci, char * column, unsigned short *outRc);
int vtc_drop_index(int pvci, char * column, unsigned short *outRc);
int vtc_clear_row(int pvci, int rowIndex, unsigned short *outRc);
int vtc_create_column(int pvci, char * column,unsigned short *outRc);
int vtc_column_size(int pvci, char * column, int *size);
void vtc_free(char * msg);
void vtc_free_list(char * *msglist);
int lrvtc_connect(char * servername, int portnum, int options);
int lrvtc_disconnect();
int lrvtc_query_column(char * columnName, int columnIndex);
int lrvtc_query_row(int columnIndex);
int lrvtc_send_message(char * columnName, char * message);
int lrvtc_send_if_unique(char * columnName, char * message);
int lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
int lrvtc_update_message(char * columnName, int index , char * message);
int lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
int lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
int lrvtc_retrieve_message(char * columnName);
int lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
int lrvtc_retrieve_row();
int lrvtc_increment(char * columnName, int index , int incrValue);
int lrvtc_clear_message(char * columnName, int index);
int lrvtc_clear_column(char * columnName); 
int lrvtc_ensure_index(char * columnName); 
int lrvtc_drop_index(char * columnName); 
int lrvtc_clear_row(int rowIndex);
int lrvtc_create_column(char * columnName);
int lrvtc_column_size(char * columnName);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char *sourceString, char *fromEncoding, char *toEncoding, char *paramName);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 

















# 1 "d:\\hp\\exercises\\pg001\\pg001\\\\combined_PG001.c" 2

# 1 "D:\\HP\\LR12\\include/SharedParameter.h" 1



 
 
 
 
# 100 "D:\\HP\\LR12\\include/SharedParameter.h"





typedef int PVCI2;
typedef int VTCERR2;

 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(int pvci);
extern VTCERR2  vtc_get_last_error(int pvci);

 
extern VTCERR2  vtc_query_column(int pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(int pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(int pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(int pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(int pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(int pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(int pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(int pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(int pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(int pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(int pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_increment(int pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(int pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(int pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(int pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(int pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(int pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(int pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(int pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(int pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern int     lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern int     lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "d:\\hp\\exercises\\pg001\\pg001\\\\combined_PG001.c" 2

# 1 "globals.h" 1



 
 

# 1 "D:\\HP\\LR12\\include/web_api.h" 1







# 1 "D:\\HP\\LR12\\include/as_web.h" 1























































 




 








 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);










# 716 "D:\\HP\\LR12\\include/as_web.h"


# 729 "D:\\HP\\LR12\\include/as_web.h"



























# 767 "D:\\HP\\LR12\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 835 "D:\\HP\\LR12\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

 
 
 






# 9 "D:\\HP\\LR12\\include/web_api.h" 2

















 







 














  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2



 
 



# 3 "d:\\hp\\exercises\\pg001\\pg001\\\\combined_PG001.c" 2

# 1 "vuser_init.c" 1
 







vuser_init()
{

	web_url("home.action", 
		"URL=http://192.168.14.35/PG/home.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("login.action", 
		"URL=http://192.168.14.35/PG/login.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/home.action", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=images/pic_login_01.png", "Referer=http://192.168.14.35/PG/css/master.css", "ENDITEM", 
		"Url=images/btn_login_go_over.jpg", "Referer=http://192.168.14.35/PG/css/master.css", "ENDITEM", 
		"Url=images/pic_login_pad_bg.jpg", "Referer=http://192.168.14.35/PG/css/master.css", "ENDITEM", 
		"Url=images/btn_login_go.jpg", "Referer=http://192.168.14.35/PG/css/master.css", "ENDITEM", 
		"Url=images/btn_login_go1.jpg", "Referer=http://192.168.14.35/PG/css/master.css", "ENDITEM", 
		"Url=images/pic_top_bg.gif", "Referer=http://192.168.14.35/PG/css/master.css", "ENDITEM", 
		"Url=images/pic_top_meue_left.png", "Referer=http://192.168.14.35/PG/css/master.css", "ENDITEM", 
		"Url=images/pic_top_meue_right.png", "Referer=http://192.168.14.35/PG/css/master.css", "ENDITEM", 
		"Url=images/pic_login.png", "Referer=http://192.168.14.35/PG/css/master.css", "ENDITEM", 
		"Url=images/pic_cent_02.jpg", "Referer=http://192.168.14.35/PG/css/master.css", "ENDITEM", 
		"Url=images/pic_top_bg1.jpg", "Referer=http://192.168.14.35/PG/css/master.css", "ENDITEM", 
		"Url=images/pic_logo1.png", "Referer=http://192.168.14.35/PG/css/master.css", "ENDITEM", 
		"LAST");

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_url("seed", 
		"URL=http://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=68", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		"LAST");

	lr_start_transaction("登录");

	web_submit_data("login.action_2", 
		"Action=http://192.168.14.35/PG/login.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/login.action", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=userName", "Value=xxb", "ENDITEM", 
		"Name=password", "Value=daan123", "ENDITEM", 
		"Name=validateCode", "Value=请在此输入验证码", "ENDITEM", 
		"EXTRARES", 
		"Url=images/pic_top_menu_bg.png", "Referer=http://192.168.14.35/PG/css/topmenu.css", "ENDITEM", 
		"Url=css/images/tabs_icons.png", "Referer=http://192.168.14.35/PG/css/easyUI.css", "ENDITEM", 
		"Url=images/top_menu_over.png", "Referer=http://192.168.14.35/PG/css/topmenu.css", "ENDITEM", 
		"Url=images/submenu_shadow.png", "Referer=http://192.168.14.35/PG/css/topmenu.css", "ENDITEM", 
		"LAST");

	lr_end_transaction("登录",2);

	return 0;
}
# 4 "d:\\hp\\exercises\\pg001\\pg001\\\\combined_PG001.c" 2

# 1 "lingliaosq.c" 1
lingliaosq()
{

	lr_think_time(5);

	lr_start_transaction("打开领料申请页面");
	
	

	web_url("salesorder.action", 
		"URL=http://192.168.14.35/PG/spe/salesorder.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/home.action", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../scripts/datepicker/skin/WdatePicker.css", "ENDITEM", 
		"Url=../images/div_bg.png", "Referer=http://192.168.14.35/PG/css/master.css", "ENDITEM", 
		"Url=../images/busy.gif", "ENDITEM", 
		"Url=../pages/test/images/loading.gif", "Referer=http://192.168.14.35/PG/pages/test/css/text_grid.css", "ENDITEM", 
		"Url=../pages/test/images/clear-basic.jpg", "Referer=http://192.168.14.35/PG/pages/test/css/text_grid.css", "ENDITEM", 
		"Url=../pages/test/images/select-basic.jpg", "Referer=http://192.168.14.35/PG/pages/test/css/text_grid.css", "ENDITEM", 
		"Url=../pages/spe/salesorder/scripts/plansEdit.js?_=1542010310039", "ENDITEM", 
		"Url=../pages/test/images/ico_01.jpg", "Referer=http://192.168.14.35/PG/pages/test/css/style.css", "ENDITEM", 
		"Url=../pages/test/images/select-hover.jpg", "Referer=http://192.168.14.35/PG/pages/test/css/text_grid.css", "ENDITEM", 
		"Url=../pages/test/images/select-click.jpg", "Referer=http://192.168.14.35/PG/pages/test/css/text_grid.css", "ENDITEM", 
		"Url=../pages/test/images/clear-hover.jpg", "Referer=http://192.168.14.35/PG/pages/test/css/text_grid.css", "ENDITEM", 
		"Url=../images/dd.jpg", "ENDITEM", 
		"LAST");

	web_url("outBoundDetail.action", 
		"URL=http://192.168.14.35/PG/spe/outBoundDetail.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("salesorderList.action", 
		"URL=http://192.168.14.35/PG/spe/salesorderList.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../images/group_2.png", "Referer=http://192.168.14.35/PG/css/master.css", "ENDITEM", 
		"Url=../images/group_1.png", "Referer=http://192.168.14.35/PG/css/master.css", "ENDITEM", 
		"LAST");

	web_url("salesorderInfo.action", 
		"URL=http://192.168.14.35/PG/spe/salesorderInfo.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../images/group_5.png", "Referer=http://192.168.14.35/PG/css/master.css", "ENDITEM", 
		"Url=../images/group_3.png", "Referer=http://192.168.14.35/PG/css/master.css", "ENDITEM", 
		"Url=../scripts/datepicker/skin/datePicker.gif", "Referer=http://192.168.14.35/PG/scripts/datepicker/skin/WdatePicker.css", "ENDITEM", 
		"LAST");

	web_url("findSalesOrderByConditions.action", 
		"URL=http://192.168.14.35/PG/spe/findSalesOrderByConditions.action?applyTime_start=&applyTime_end=&searchdto.applyUserid=&searchdto.areaid=&detaildto.productId=&page.pageNo=1&searchdto.name=&searchdto.state=&row=13", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("打开领料申请页面",2);

	lr_think_time(15);

	lr_start_transaction("新增");

	lr_save_datetime("%Y-%m-%d %H:%M:%S", 0, "timenow");	 
	
	web_reg_save_param_ex(
		"ParamName=apply_number",
		"LB=",
		"RB=",
		"SEARCH_FILTERS",
		"Scope=BODY",
		"LAST");

	web_custom_request("getApplyNumber.action", 
		"URL=http://192.168.14.35/PG/spe/getApplyNumber.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_submit_data("PlansComJson.action", 
		"Action=http://192.168.14.35/PG/spe/PlansComJson.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=productId", "Value=ff8080815d7e6a77015da74e239e0059", "ENDITEM", 
		"Name=time", "Value=", "ENDITEM", 
		"LAST");

	web_submit_data("saveSalesOrder.action", 
		"Action=http://192.168.14.35/PG/spe/saveSalesOrder.action?dto.id=&plansInfo=ff8080815d7e6a77015da74e239e0059:2&time={timenow}", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=dto.name", "Value={lingliaohao}", "ENDITEM", 
		"Name=dto.areaid", "Value=4028908b53a3282d0153ac85930f364f", "ENDITEM", 
		"Name=dto.applyUserid", "Value=4af4e88a53df21e50153e509d7c6117c", "ENDITEM", 
		"Name=dto.estimateArrivalTime", "Value=", "ENDITEM", 
		"Name=dto.customersOrderid", "Value=4028908b4b1fa6eb014b29d6fb3900ae", "ENDITEM", 
		"Name=dto.agency", "Value=", "ENDITEM", 
		"Name=dto.businessArea", "Value=", "ENDITEM", 
		"Name=dto.productId", "Value=", "ENDITEM", 
		"Name=dto.signUserName", "Value=说到底", "ENDITEM", 
		"Name=dto.signUserPhone", "Value=13556453456", "ENDITEM", 
		"Name=dto.receiveAddress", "Value=ddddee是是是", "ENDITEM", 
		"Name=dto.applyNumber", "Value={apply_number}", "ENDITEM", 
		"Name=dto.remark", "Value=", "ENDITEM", 
		"LAST");
	
	web_reg_save_param_ex(
		"ParamName=search_id",
		"LB=<tr id=\"",
		"RB=\" class=\"oddbg\">",
		"SEARCH_FILTERS",
		"Scope=BODY",
		"LAST");

	web_url("findSalesOrderByConditions.action_2", 
		"URL=http://192.168.14.35/PG/spe/findSalesOrderByConditions.action?applyTime_start=&applyTime_end=&searchdto.applyUserid=&searchdto.areaid=&detaildto.productId=&status=310&status=310&status=320&page.pageNo=1&searchdto.name={lingliaohao}&searchdto.state=&row=13", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("新增",2);

	lr_think_time(29);
	


	lr_start_transaction("财务审核");

	web_submit_data("findOrderStatusByIds.action", 
		"Action=http://192.168.14.35/PG/spe/findOrderStatusByIds.action?flag=audit&time={timenow}", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=arrayIds", "Value={search_id}", "ENDITEM", 
		"LAST");

	web_submit_data("FinancialAudit.action", 
		"Action=http://192.168.14.35/PG/spe/FinancialAudit.action?time={timenow}", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=arrayIds", "Value={search_id}", "ENDITEM", 
		"LAST");

	web_url("findSalesOrderByConditions.action_3", 
		"URL=http://192.168.14.35/PG/spe/findSalesOrderByConditions.action?applyTime_start=&applyTime_end=&searchdto.applyUserid=&searchdto.areaid=&detaildto.productId=&checkbutton=on&status=300&status=310&status=310&status=320&page.pageNo=1&searchdto.name=&searchdto.state=&row=13", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(5);

	web_submit_data("findSetmealDetailbyId.action", 
		"Action=http://192.168.14.35/PG/spe/findSetmealDetailbyId.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=orderid", "Value={search_id}", "ENDITEM", 
		"LAST");

	web_url("findOutBoundDetail.action", 
		"URL=http://192.168.14.35/PG/spe/findOutBoundDetail.action?page.pageNo=1&orderId={search_id}&row=20", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		"LAST");


	web_submit_data("loadSalesOrderMessage.action", 
		"Action=http://192.168.14.35/PG/spe/loadSalesOrderMessage.action", 
		"Method=POST", 
		"RecContentType=text/json", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=id", "Value={search_id}", "ENDITEM", 
		"LAST");

	lr_end_transaction("财务审核",2);

	return 0;
}
# 5 "d:\\hp\\exercises\\pg001\\pg001\\\\combined_PG001.c" 2

# 1 "chanpinck.c" 1
chanpinck()
{

	lr_think_time(43);

	lr_start_transaction("打开产品出库页面");

	web_url("productsOutbound.action", 
		"URL=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/home.action", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("productsOutboundInfo.action", 
		"URL=http://192.168.14.35/PG/spe/productsOutboundInfo.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("productsOutboundLeft.action", 
		"URL=http://192.168.14.35/PG/spe/productsOutboundLeft.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("productsOutboundPlansCombo.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundPlansCombo.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=salesOrderId", "Value=", "ENDITEM", 
		"LAST");

	lr_end_transaction("打开产品出库页面",2);

	lr_think_time(7);

	lr_start_transaction("出库申请");

	web_url("productsOutboundPlansCombo.action_2", 
		"URL=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundPlansCombo.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t107.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(5);

	web_submit_data("productsOutboundSalesOrderChange.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundSalesOrderChange.action?time=1542010466941", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=salesOrderId", "Value=ff80808166ce6340016706fd050d0354", "ENDITEM", 
		"LAST");

	web_submit_data("productsOutboundPlansCombo.action_3", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundPlansCombo.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t109.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=salesOrderId", "Value=ff80808166ce6340016706fd050d0354", "ENDITEM", 
		"LAST");

	lr_think_time(37);

	web_submit_data("productsOutboundPlansComJson.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundPlansComJson.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t110.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=plansId", "Value=ff8080815d7e6a77015da74e239e0059", "ENDITEM", 
		"Name=orderId", "Value=ff80808166ce6340016706fd050d0354", "ENDITEM", 
		"Name=type", "Value=edit", "ENDITEM", 
		"Name=time", "Value=1542010505039", "ENDITEM", 
		"LAST");

	web_custom_request("productsOutboundStateCheck.action", 
		"URL=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundStateCheck.action?id=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t111.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_submit_data("productsOutboundApplyStore.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundApplyStore.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t112.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=dto.id", "Value=", "ENDITEM", 
		"Name=dto.barCode", "Value=201811125200", "ENDITEM", 
		"Name=dto.salesOrderId", "Value=ff80808166ce6340016706fd050d0354", "ENDITEM", 
		"Name=salesOrderId", "Value=", "ENDITEM", 
		"Name=dto.salesOrderName", "Value=201811125300", "ENDITEM", 
		"Name=dto.applicant", "Value=4af4e88a53df21e50153e509d7c6117c", "ENDITEM", 
		"Name=dto.applicantName", "Value=信息部专用", "ENDITEM", 
		"Name=dto.signUserName", "Value=说到底", "ENDITEM", 
		"Name=dto.customerId", "Value=4028908b4b1fa6eb014b29d6fb3900ae", "ENDITEM", 
		"Name=dto.customerName", "Value=杭州蓝胜健康咨询有限公司", "ENDITEM", 
		"Name=dto.agency", "Value=", "ENDITEM", 
		"Name=dto.businessArea", "Value=", "ENDITEM", 
		"Name=dto.whereaboutsAreaId", "Value=4028908b53a3282d0153ac85930f364f", "ENDITEM", 
		"Name=dto.whereaboutsAreaName", "Value=亮剑", "ENDITEM", 
		"Name=dto.warehouse", "Value=4028908b4b1fa6eb014b2a83437e00e2", "ENDITEM", 
		"Name=dto.warehouseName", "Value=南仓", "ENDITEM", 
		"Name=dto.signUserPhone", "Value=13556453456", "ENDITEM", 
		"Name=dto.expressNum", "Value=22233444", "ENDITEM", 
		"Name=dto.sendExpressCompany", "Value=尔尔v让他", "ENDITEM", 
		"Name=dto.sendBackExpressNum", "Value=", "ENDITEM", 
		"Name=dto.returnExpressCompany", "Value=", "ENDITEM", 
		"Name=dto.productId", "Value=ff8080815d7e6a77015da74e239e0059", "ENDITEM", 
		"Name=dto.productName", "Value=PZ", "ENDITEM", 
		"Name=dto.seriesId", "Value=ff8080815d7e6a77015da74ea631005b", "ENDITEM", 
		"Name=dto.seriesName", "Value=PAC系列", "ENDITEM", 
		"Name=dto.materielCode", "Value=", "ENDITEM", 
		"Name=dto.systemOrder", "Value=", "ENDITEM", 
		"Name=dto.receiveAddress", "Value=ddddee是是是", "ENDITEM", 
		"LAST");

	lr_end_transaction("出库申请",2);

	lr_think_time(26);

	lr_start_transaction("查询条码");

	web_submit_data("productsOutboundList.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundList.action?row=12", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t113.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=applyTime_start", "Value=2018-11-12 00:00:00", "ENDITEM", 
		"Name=applyTime_end", "Value=2018-11-12 23:59:59", "ENDITEM", 
		"Name=searchDto.applicant", "Value=4af4e88a53df21e50153e509d7c6117c", "ENDITEM", 
		"Name=searchDto.salesOrderId", "Value=", "ENDITEM", 
		"Name=searchDto.warehouse", "Value=", "ENDITEM", 
		"Name=searchDto.status", "Value=", "ENDITEM", 
		"Name=searchDto.productId", "Value=", "ENDITEM", 
		"Name=searchDto.expressNum", "Value=", "ENDITEM", 
		"Name=searchDto.barCode", "Value=201811125200", "ENDITEM", 
		"Name=searchDto.customerId", "Value=", "ENDITEM", 
		"Name=page.pageNo", "Value=1", "ENDITEM", 
		"LAST");

	web_url("productsOutboundPlansCombo.action_4", 
		"URL=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundPlansCombo.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t114.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("productsOutboundDataLoad.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundDataLoad.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t115.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=id", "Value=ff80808166ce6340016706ff58900358", "ENDITEM", 
		"LAST");

	web_url("productsOutboundPlansCombo.action_5", 
		"URL=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundPlansCombo.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("productsOutboundPlansComJson.action_2", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundPlansComJson.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t117.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=plansId", "Value=ff8080815d7e6a77015da74e239e0059", "ENDITEM", 
		"Name=orderId", "Value=ff80808166ce6340016706fd050d0354", "ENDITEM", 
		"Name=type", "Value=load", "ENDITEM", 
		"Name=time", "Value=1542010536373", "ENDITEM", 
		"LAST");

	web_submit_data("productsOutboundSalesOrderChange.action_2", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundSalesOrderChange.action?time=1542010536442", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t118.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=salesOrderId", "Value=ff80808166ce6340016706fd050d0354", "ENDITEM", 
		"LAST");

	web_submit_data("productsOutboundPlansCombo.action_6", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundPlansCombo.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t119.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=salesOrderId", "Value=ff80808166ce6340016706fd050d0354", "ENDITEM", 
		"LAST");

	lr_end_transaction("查询条码",2);

	lr_think_time(19);

	lr_start_transaction("确认出库");

	web_submit_data("productsOutboundSure.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundSure.action?OutboundType=1&time=1542010556277", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t120.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=arrayIds", "Value=ff80808166ce6340016706ff58900358", "ENDITEM", 
		"LAST");

	web_submit_data("productsOutboundList.action_2", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundList.action?row=12", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=applyTime_start", "Value=2018-11-12 00:00:00", "ENDITEM", 
		"Name=applyTime_end", "Value=2018-11-12 23:59:59", "ENDITEM", 
		"Name=searchDto.applicant", "Value=4af4e88a53df21e50153e509d7c6117c", "ENDITEM", 
		"Name=searchDto.salesOrderId", "Value=", "ENDITEM", 
		"Name=searchDto.warehouse", "Value=", "ENDITEM", 
		"Name=searchDto.status", "Value=", "ENDITEM", 
		"Name=searchDto.productId", "Value=", "ENDITEM", 
		"Name=searchDto.expressNum", "Value=", "ENDITEM", 
		"Name=searchDto.barCode", "Value=201811125200", "ENDITEM", 
		"Name=searchDto.customerId", "Value=", "ENDITEM", 
		"Name=checkbutton", "Value=on", "ENDITEM", 
		"Name=page.pageNo", "Value=1", "ENDITEM", 
		"LAST");

	web_url("productsOutboundPlansCombo.action_7", 
		"URL=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundPlansCombo.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("productsOutboundDataLoad.action_2", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundDataLoad.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=id", "Value=ff80808166ce6340016706ff58900358", "ENDITEM", 
		"LAST");

	web_url("productsOutboundPlansCombo.action_8", 
		"URL=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundPlansCombo.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("productsOutboundPlansComJson.action_3", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundPlansComJson.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=plansId", "Value=ff8080815d7e6a77015da74e239e0059", "ENDITEM", 
		"Name=orderId", "Value=ff80808166ce6340016706fd050d0354", "ENDITEM", 
		"Name=type", "Value=load", "ENDITEM", 
		"Name=time", "Value=1542010557483", "ENDITEM", 
		"LAST");

	web_submit_data("productsOutboundSalesOrderChange.action_3", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundSalesOrderChange.action?time=1542010557536", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=salesOrderId", "Value=", "ENDITEM", 
		"LAST");

	web_submit_data("productsOutboundPlansCombo.action_9", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundPlansCombo.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=salesOrderId", "Value=", "ENDITEM", 
		"LAST");

	lr_end_transaction("确认出库",2);

	return 0;
}
# 6 "d:\\hp\\exercises\\pg001\\pg001\\\\combined_PG001.c" 2

# 1 "yiganjiyinlr.c" 1
yiganjiyinlr()
{

	lr_think_time(26);

	lr_start_transaction("打开易感基因录入页面");

	web_url("speInputMain.action", 
		"URL=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/home.action", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../scripts/tree/jquery.ztree.core-3.5.js?_=1542010590915", "ENDITEM", 
		"Url=../scripts/tree/jquery.ztree.excheck-3.5.js?_=1542010590916", "ENDITEM", 
		"Url=../scripts/datepicker/lang/zh-cn.js", "ENDITEM", 
		"Url=../scripts/datepicker/skin/default/datepicker.css", "ENDITEM", 
		"Url=../scripts/datepicker/calendar.js", "ENDITEM", 
		"LAST");

	web_url("speInputList.action", 
		"URL=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/speInputList.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("speInputInfo.action", 
		"URL=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/speInputInfo.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("打开易感基因录入页面",2);

	lr_think_time(67);

	lr_start_transaction("新增易感基因");

	web_submit_data("speSendoutCustomersCombo.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/speSendoutCustomersCombo.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=sourceOrg", "Value=local", "ENDITEM", 
		"LAST");

	web_custom_request("update2", 
		"URL=http://update.googleapis.com/service/update2?cup2key=8:3023100404&cup2hreq=5c1b182689fd948da09483c08fa45017bf2a165a6457e9317f4f3aa5ddfb1d05", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t132.inf", 
		"Mode=HTML", 
		"EncType=application/xml", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><request protocol=\"3.1\" dedup=\"cr\" acceptformat=\"crx2,crx3\" sessionid=\"{3aa44128-7679-4d1a-88ad-7afb453b9dac}\" requestid=\"{902729f0-cfc8-41a1-afb4-a5faefba0d3c}\" updater=\"chrome\" updaterversion=\"68.0.3440.106\" prodversion=\"68.0.3440.106\" lang=\"zh-CN\" updaterchannel=\"\" prodchannel=\"\" os=\"win\" arch=\"x64\" nacl_arch=\"x86-64\" domainjoined=\"0\"><hw physmemory=\"8\"/><os platform=\"Windows\" arch=\"x86_64\" version=\""
		"10.0.17134.228\"/><updater autoupdatecheckenabled=\"1\" ismachine=\"1\" lastchecked=\"408\" laststarted=\"408\" name=\"Omaha\" updatepolicy=\"-1\" version=\"1.3.33.17\"/><app appid=\"mimojjlkmoijpicakmndhoigimigcmbb\" version=\"31.0.0.122\" brand=\"GGLS\" cohort=\"1:d0j:\" cohortname=\"Chrome [M50... M99]\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{9e34c27f-c73c-4fb7-bf55-311d13461676}\"/><packages><package fp=\""
		"1.3a7ce0ba53183c7bf53a06df4d5c9158e8ee521d8d82d80fa5943eff2b160c05\"/></packages></app><app appid=\"oimompecagnajdejgnnjijobebaeigek\" version=\"4.10.1146.0\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{62fc4a84-47c5-4483-948f-90f538f54208}\"/></app><app appid=\"hnimpnehoodheedghdeeijklkeaacbdc\" version=\"0.57.44.2492\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{133d59c5-b9cb-4ecf-88f8-ecfb2e1b6813}\"/><packages><package fp=\""
		"1.1cd7dc2056afaa0f6a705c9a17d22bba6578b33f5dae9e2d6518a0bfcced2396\"/></packages></app><app appid=\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\" version=\"9.0\" brand=\"GGLS\" cohort=\"1:bm1:pxf@0.1\" cohortname=\"M54ToM70\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{1e82c944-2277-46b5-86dd-eac95e2399ba}\"/><packages><package fp=\"1.e75ebe461cdf7b3b2347c538adf621f7f6c3de6f4ab9dfa2b6b2a72774229852\"/></packages></app><app appid=\"hfnkpimlhhgieaddgfemjhofmfblmnib\" version=\"4813\" brand="
		"\"GGLS\" cohort=\"1:jcl:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{9b17889b-eab8-4a9f-92ac-6087fb4a31e3}\"/><packages><package fp=\"1.c77b10e749e9cee41b551a43673185db9880d959252c72b9f73ba51898d0f8e8\"/></packages></app><app appid=\"ojjgnpkioondelmggbekfhllhdaimnho\" version=\"934\" brand=\"GGLS\" cohort=\"1:0:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{02f5334d-10dd-4ee6-b3c7-66ac27844058}\"/><packages><package "
		"fp=\"1.ed36b76c2421a3dce0cb6f4f47f5132aa0ab598f0a501e50ef96966563160de7\"/></packages></app><app appid=\"llkgjffcdpffmhiakmfcdcblohccpfmo\" version=\"0.0.0.0\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{b75fbb5d-4f2c-4df9-9c0d-3eedb35a41f4}\"/></app><app appid=\"khaoiebndkojlmppeemjhbpbandiljpe\" version=\"21\" brand=\"GGLS\" cohort=\"1:cux:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{363768e6-ad67-4eac-81cf-4048f19b24b5"
		"}\"/><packages><package fp=\"1.d14e4e9ea653227bcd79027da2a426c9a1beb507bedd219593febac2b97799cb\"/></packages></app><app appid=\"giekcmmlnklenlaomppkphknjmnnpneh\" version=\"4\" brand=\"GGLS\" cohort=\"1:j5l:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{9952e9cf-f998-4e7a-ad1f-4da5d3a2abe0}\"/><packages><package fp=\"1.3e0bc577e6a70f1ee3aea6e88b1d6e9390695692881a998f4c0e3c6d7cab7ad5\"/></packages></app><app appid=\"aemomkdncapdnfajjbbcbdebjljbpmpj\" version"
		"=\"1.0.3.0\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{1e552523-71bb-45d0-bd21-b4e2b283f077}\"/></app><app appid=\"gkmgaooipdjhmangpemjhigmamcehddo\" version=\"35.179.201\" brand=\"GGLS\" tag=\"stable_eset\" cohort=\"1:lsl:\" cohortname=\"ESET Stable\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{c370dcb6-1c39-4845-b355-0a35d438c698}\"/><packages><package fp=\"1.f0bfae041419e9b216fd8944b14eef5e87805bee40aec4d670c48a4ed54deb60\"/></packages></"
		"app><app appid=\"npdjjkjlcidkjlamlmmdelcjbcpdjocm\" version=\"0.0.0.0\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{5df14eaf-129a-4dfe-8202-5395a44a83a3}\"/></app></request>", 
		"LAST");

	lr_think_time(20);

	web_submit_data("speInputLoadSpecimenInfo.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/speInputLoadSpecimenInfo.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=barCode", "Value=201811125200", "ENDITEM", 
		"LAST");

	web_submit_data("getPlansInfo.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/getPlansInfo.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=plansid", "Value=ff8080815d7e6a77015da755cc5e0060", "ENDITEM", 
		"LAST");

	web_submit_data("getCityByProvince.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/getCityByProvince.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=province", "Value=", "ENDITEM", 
		"LAST");

	web_submit_data("getTestItem.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/getTestItem.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=plansid", "Value=ff8080815d7e6a77015da755cc5e0060", "ENDITEM", 
		"LAST");

	web_submit_data("plansdeatil.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/plansdeatil.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t137.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=plansid", "Value=ff8080815d7e6a77015da755cc5e0060", "ENDITEM", 
		"LAST");

	web_submit_data("getCityByProvince.action_2", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/getCityByProvince.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t138.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=province", "Value=", "ENDITEM", 
		"LAST");

	web_submit_data("getTestItem.action_2", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/getTestItem.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t139.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=plansid", "Value=ff8080815d7e6a77015da755cc5e0060", "ENDITEM", 
		"LAST");

	web_submit_data("getRegionByCity.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/getRegionByCity.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t140.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=city", "Value=", "ENDITEM", 
		"Name=province", "Value=", "ENDITEM", 
		"LAST");

	web_submit_data("getBarCodeState.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/getBarCodeState.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t141.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=searchBarCode", "Value=201811125200", "ENDITEM", 
		"LAST");

	web_submit_data("getRegionByCity.action_2", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/getRegionByCity.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t142.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=city", "Value=", "ENDITEM", 
		"Name=province", "Value=", "ENDITEM", 
		"LAST");

	lr_think_time(6);

	web_submit_data("speInputSexLinkagePlans.action", 
		"Action=http://192.168.14.35/PG/spe/speInputSexLinkagePlans.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t143.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=dto.barCode", "Value=201811125200", "ENDITEM", 
		"Name=dto.sex", "Value=male", "ENDITEM", 
		"LAST");

	web_submit_data("getTestItem.action_3", 
		"Action=http://192.168.14.35/PG/spe/getTestItem.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t144.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=plansid", "Value=ff8080815f4c6938015f4d417db402ca", "ENDITEM", 
		"LAST");

	web_submit_data("plansdeatil.action_2", 
		"Action=http://192.168.14.35/PG/spe/plansdeatil.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t145.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=plansid", "Value=ff8080815f4c6938015f4d417db402ca", "ENDITEM", 
		"EXTRARES", 
		"Url=../scripts/datepicker/skin/default/img.gif", "Referer=http://192.168.14.35/PG/scripts/datepicker/skin/default/datepicker.css", "ENDITEM", 
		"LAST");

	lr_think_time(11);

	web_submit_data("getCityByProvince.action_3", 
		"Action=http://192.168.14.35/PG/spe/getCityByProvince.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t146.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=province", "Value=黑龙江省", "ENDITEM", 
		"LAST");

	web_submit_data("getRegionByCity.action_3", 
		"Action=http://192.168.14.35/PG/spe/getRegionByCity.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t147.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=city", "Value=哈尔滨市", "ENDITEM", 
		"Name=province", "Value=黑龙江省", "ENDITEM", 
		"LAST");

	lr_think_time(17);

	web_custom_request("checkTestItemSex.action", 
		"URL=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/checkTestItemSex.action?ids=ff8080815d7e6a77015da76d0f690094,ff8080815d7e6a77015dac601524016e,ff8080815f48dc1e015f4c20dd73003d,ff8080815f48dc1e015f4c2df394005d,ff8080815f48dc1e015f4c319c640067,ff8080815f48dc1e015f4c38983c0079,ff8080815f4c6938015f4d2ead85027c&planId=ff8080815f4c6938015f4d417db402ca&patientSex=male", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t148.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_submit_data("saveSpeInputSpecimen.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/saveSpeInputSpecimen.action?ids=ff8080815d7e6a77015da76d0f690094,ff8080815d7e6a77015dac601524016e,ff8080815f48dc1e015f4c20dd73003d,ff8080815f48dc1e015f4c2df394005d,ff8080815f48dc1e015f4c319c640067,ff8080815f48dc1e015f4c38983c0079,ff8080815f4c6938015f4d2ead85027c&isDefault=y&customerName=%E6%9D%AD%E5%B7%9E%E8%93%9D%E8%83%9C%E5%81%A5%E5%BA%B7%E5%92%A8%E8%AF%A2%E6%9C%89%E9%99%90%E5%85%AC%E5%8F%B8", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t149.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=dto.status", "Value=100", "ENDITEM", 
		"Name=dto.taiKangId", "Value=", "ENDITEM", 
		"Name=dto.id", "Value=ff80808166ce6340016706ff58900359", "ENDITEM", 
		"Name=dto.barCode", "Value=201811125200", "ENDITEM", 
		"Name=dto.expressNum", "Value=22233444", "ENDITEM", 
		"Name=dto.patientName", "Value=0511", "ENDITEM", 
		"Name=dto.province", "Value=黑龙江省", "ENDITEM", 
		"Name=dto.sex", "Value=male", "ENDITEM", 
		"Name=dto.city", "Value=哈尔滨市", "ENDITEM", 
		"Name=dto.familyHistory", "Value=", "ENDITEM", 
		"Name=dto.birthday", "Value=2013-11-05", "ENDITEM", 
		"Name=dto.region", "Value=道里区", "ENDITEM", 
		"Name=dto.customerAddress", "Value=", "ENDITEM", 
		"Name=dto.age", "Value=", "ENDITEM", 
		"Name=dto.reportAddress", "Value=黑龙江省哈尔滨市道里区", "ENDITEM", 
		"Name=dto.receiveDate", "Value=2018-11-12 16:20:00", "ENDITEM", 
		"Name=dto.mobileNumber", "Value=", "ENDITEM", 
		"Name=dto.reportReceiveBy", "Value=www2", "ENDITEM", 
		"Name=dto.mobilePhone", "Value=13554453456", "ENDITEM", 
		"Name=dto.reportReceivePhone", "Value=13456787656", "ENDITEM", 
		"Name=dto.remark", "Value=套餐共有：7个项目。\r\n具体项目为：PAC胃癌3、PAC前列腺癌2、PAC肝癌3、PAC结直肠癌4、PAC食管癌3、PAC胰腺癌3、PAC肺癌4\r\n", "ENDITEM", 
		"Name=dto.plans", "Value=ff8080815f4c6938015f4d417db402ca", "ENDITEM", 
		"Name=dto.sendBackDate", "Value=2018-10-29", "ENDITEM", 
		"Name=dto.insuranceUser", "Value=", "ENDITEM", 
		"Name=dto.customer", "Value=4028908b4b1fa6eb014b29d6fb3900ae", "ENDITEM", 
		"Name=dto.idCardNum", "Value=", "ENDITEM", 
		"Name=dto.agency", "Value=", "ENDITEM", 
		"Name=dto.appendRemark", "Value=", "ENDITEM", 
		"Name=dto.businessArea", "Value=", "ENDITEM", 
		"Name=kscode", "Value=", "ENDITEM", 
		"Name=dto.reportSource", "Value=pg", "ENDITEM", 
		"LAST");

	web_url("speInputPlansCombo.action", 
		"URL=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/speInputPlansCombo.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t150.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("speSendoutCustomersCombo.action_2", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/speSendoutCustomersCombo.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t151.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=sourceOrg", "Value=local", "ENDITEM", 
		"LAST");

	lr_end_transaction("新增易感基因",2);

	lr_think_time(22);

	lr_start_transaction("内勤接收");

	web_submit_data("speInputAuditSpecimen.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/speInputAuditSpecimen.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t152.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=currentID", "Value=ff80808166ce6340016706ff58900359", "ENDITEM", 
		"LAST");

	lr_end_transaction("内勤接收",2);

	return 0;
}
# 7 "d:\\hp\\exercises\\pg001\\pg001\\\\combined_PG001.c" 2

# 1 "shiyanshijs.c" 1
shiyanshijs()
{

	lr_think_time(34);

	lr_start_transaction("打开实验室接收页面");

	web_url("speReceiveMain.action", 
		"URL=http://192.168.14.35/PG/spe/speReceiveMain.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/home.action", 
		"Snapshot=t153.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("打开实验室接收页面",2);

	lr_think_time(26);

	lr_start_transaction("扫描条码");

	web_submit_data("scanCheckSpecimen.action", 
		"Action=http://192.168.14.35/PG/spe/scanCheckSpecimen.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speReceiveMain.action", 
		"Snapshot=t154.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=barCode", "Value=201811125200", "ENDITEM", 
		"Name=expressNum", "Value=", "ENDITEM", 
		"LAST");

	web_submit_data("speReceiveScan.action", 
		"Action=http://192.168.14.35/PG/spe/speReceiveScan.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speReceiveMain.action", 
		"Snapshot=t155.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=barCode", "Value=201811125200", "ENDITEM", 
		"LAST");

	web_submit_data("speReceiveList.action", 
		"Action=http://192.168.14.35/PG/spe/speReceiveList.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speReceiveMain.action", 
		"Snapshot=t156.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=barCode", "Value=201811125200", "ENDITEM", 
		"Name=userID", "Value=4af4e88a53df21e50153e509d7c6117c", "ENDITEM", 
		"Name=plansID", "Value=", "ENDITEM", 
		"Name=expressNum", "Value=22233444", "ENDITEM", 
		"LAST");

	lr_end_transaction("扫描条码",2);

	lr_think_time(34);

	lr_start_transaction("接收");

	web_submit_data("speReceiveAcceptSpecimen.action", 
		"Action=http://192.168.14.35/PG/spe/speReceiveAcceptSpecimen.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speReceiveMain.action", 
		"Snapshot=t157.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=IDs", "Value=ff80808166ce6340016706ff58900359", "ENDITEM", 
		"Name=userID", "Value=4af4e88a53df21e50153e509d7c6117c", "ENDITEM", 
		"Name=password", "Value=daan123", "ENDITEM", 
		"LAST");

	web_submit_data("speReceiveArea.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/speReceiveArea.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speReceiveMain.action", 
		"Snapshot=t158.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=userID", "Value=4af4e88a53df21e50153e509d7c6117c", "ENDITEM", 
		"LAST");

	lr_end_transaction("接收",2);

	return 0;
}
# 8 "d:\\hp\\exercises\\pg001\\pg001\\\\combined_PG001.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 9 "d:\\hp\\exercises\\pg001\\pg001\\\\combined_PG001.c" 2

