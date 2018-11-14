# 1 "d:\\hp\\exercises\\sample3\\\\combined_sample3.c"
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







 
 

















# 1 "d:\\hp\\exercises\\sample3\\\\combined_sample3.c" 2

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

 
 
 

                               


 
 
 





















# 2 "d:\\hp\\exercises\\sample3\\\\combined_sample3.c" 2

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


 
 


# 3 "d:\\hp\\exercises\\sample3\\\\combined_sample3.c" 2

# 1 "vuser_init.c" 1
 







vuser_init()
{

	web_url("login.action", 
		"URL=http://202.116.104.161/NIP/login.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=images/new/bgd_login_2.jpg", "ENDITEM", 
		"Url=images/new/bgd_login3_0.jpg", "ENDITEM", 
		"Url=images/new/input.gif", "ENDITEM", 
		"Url=images/new/btn_login.png", "ENDITEM", 
		"LAST");

	web_submit_form("login.action_2", 
		"Snapshot=t2.inf", 
		"ITEMDATA", 
		"Name=userName", "Value=daan", "ENDITEM", 
		"Name=password", "Value=123@abc", "ENDITEM", 
		"EXTRARES", 
		"Url=scripts/pdfobject.js?_=1541395994665", "Referer=http://202.116.104.161/NIP/home.action", "ENDITEM", 
		"Url=scripts/jquery-1.8.2.min.js?_=1541395994666", "Referer=http://202.116.104.161/NIP/home.action", "ENDITEM", 
		"Url=scripts/pdfobject.js?_=1541395994667", "Referer=http://202.116.104.161/NIP/home.action", "ENDITEM", 
		"Url=scripts/jquery-1.8.2.min.js?_=1541395994668", "Referer=http://202.116.104.161/NIP/home.action", "ENDITEM", 
		"Url=scripts/jquery.blockUI.js?_=1541395994669", "Referer=http://202.116.104.161/NIP/home.action", "ENDITEM", 
		"Url=scripts/common.js?_=1541395994670", "Referer=http://202.116.104.161/NIP/home.action", "ENDITEM", 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/dhtmlx.js?_=1541395994671", "Referer=http://202.116.104.161/NIP/home.action", "ENDITEM", 
		"Url=images/new/main_top_bgd.jpg", "Referer=http://202.116.104.161/NIP/home.action", "ENDITEM", 
		"Url=images/new/main_top.jpg", "Referer=http://202.116.104.161/NIP/home.action", "ENDITEM", 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/imgs/csh_bluebooks/iconUncheckAll.gif", "Referer=http://202.116.104.161/NIP/home.action", "ENDITEM", 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/imgs/csh_bluebooks/line3.gif", "Referer=http://202.116.104.161/NIP/home.action", "ENDITEM", 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/imgs/csh_bluebooks/line2.gif", "Referer=http://202.116.104.161/NIP/home.action", "ENDITEM", 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/imgs/csh_bluebooks/plus3.gif", "Referer=http://202.116.104.161/NIP/home.action", "ENDITEM", 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/imgs/csh_bluebooks/plus2.gif", "Referer=http://202.116.104.161/NIP/home.action", "ENDITEM", 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/imgs/csh_bluebooks/plus4.gif", "Referer=http://202.116.104.161/NIP/home.action", "ENDITEM", 
		"LAST");

	web_url("welcome.jsp", 
		"URL=http://202.116.104.161/NIP/pages/welcome.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("top.jsp", 
		"URL=http://202.116.104.161/NIP/pages/common/top.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("left.jsp", 
		"URL=http://202.116.104.161/NIP/pages/common/left.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("searchdanger.action", 
		"URL=http://202.116.104.161/NIP/rpt/searchdanger.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("noticeNewSearch.action", 
		"URL=http://202.116.104.161/NIP/ref/noticeNewSearch.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/pages/welcome.jsp", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("searchdelay.action", 
		"URL=http://202.116.104.161/NIP/rpt/searchdelay.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("rateMatured.action", 
		"URL=http://202.116.104.161/NIP/ref/rateMatured.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	return 0;
}
# 4 "d:\\hp\\exercises\\sample3\\\\combined_sample3.c" 2

# 1 "sample_add.c" 1
sample_add()
{

	lr_think_time(10);

	web_url("minus3.gif", 
		"URL=http://202.116.104.161/NIP/scripts/dhtmlxSuite/dhtmlx_std_full/imgs/csh_bluebooks/minus3.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t10.inf", 
		"LAST");

	web_url("line1.gif", 
		"URL=http://202.116.104.161/NIP/scripts/dhtmlxSuite/dhtmlx_std_full/imgs/csh_bluebooks/line1.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t11.inf", 
		"LAST");

	web_url("sky_blue_sel_tree.png", 
		"URL=http://202.116.104.161/NIP/scripts/dhtmlxSuite/dhtmlx_std_full/imgs/sky_blue_sel_tree.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t12.inf", 
		"LAST");

	web_url("speInput.action", 
		"URL=http://202.116.104.161/NIP/dis/speInput.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../pages/test/images/button01a.jpg", "ENDITEM", 
		"Url=../pages/test/images/button02a.jpg", "ENDITEM", 
		"Url=../pages/test/images/line_01.jpg", "ENDITEM", 
		"Url=../pages/test/images/button_bg1a.jpg", "ENDITEM", 
		"Url=../pages/test/images/ico_lock_2.jpg", "ENDITEM", 
		"Url=../pages/test/images/select-basic.jpg", "ENDITEM", 
		"Url=../pages/test/images/clear-basic.jpg", "ENDITEM", 
		"Url=../pages/test/images/loading.gif", "ENDITEM", 
		"Url=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/dhtmlxcalendar_dhx_skyblue/bg_main.png", "ENDITEM", 
		"Url=../pages/test/images/ico_01.jpg", "ENDITEM", 
		"Url=../pages/test/images/select-hover.jpg", "ENDITEM", 
		"Url=../pages/test/images/select-click.jpg", "ENDITEM", 
		"Url=../pages/test/images/button_bg1b.jpg", "ENDITEM", 
		"Url=../pages/test/images/clear-hover.jpg", "ENDITEM", 
		"Url=../images/busy.gif", "ENDITEM", 
		"LAST");

	lr_think_time(19);
	
 
	
	lr_save_string("1100", "barCode_add1");		 
 
	lr_save_string(lr_eval_string("{barCode_add2}{barCode_add1}"), "barCode_add");
	lr_output_message(lr_eval_string("{barCode_add}"));
	
	lr_save_string(lr_eval_string("{barCode_add}"),"barCode_add");

	

	lr_start_transaction("保存");

	web_submit_data("speInputLoadDetailByBarCode.action", 
		"Action=http://202.116.104.161/NIP/dis/${ctx}/dis/speInputLoadDetailByBarCode.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speInput.action", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=barCode", "Value={barCode_add}", "ENDITEM", 
		"LAST");

	web_submit_data("speInputCustomerInputTips.action", 
		"Action=http://202.116.104.161/NIP/dis/speInputCustomerInputTips.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speInput.action", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=customerId", "Value=f2b7c0b75d5526aa015d5da979192e9b", "ENDITEM", 
		"LAST");

	web_submit_data("speInputLocation.action", 
		"Action=http://202.116.104.161/NIP/dis/speInputLocation.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speInput.action", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=customerId", "Value=f2b7c0b75d5526aa015d5da979192e9b", "ENDITEM", 
		"LAST");

	web_submit_data("speInputDoctor.action", 
		"Action=http://202.116.104.161/NIP/dis/speInputDoctor.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speInput.action", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=customerId", "Value=f2b7c0b75d5526aa015d5da979192e9b", "ENDITEM", 
		"LAST");

	web_submit_data("speInputItem.action", 
		"Action=http://202.116.104.161/NIP/dis/speInputItem.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speInput.action", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=customerId", "Value=f2b7c0b75d5526aa015d5da979192e9b", "ENDITEM", 
		"LAST");

	lr_think_time(16);

	web_submit_data("speInputInfoTestItem.action", 
		"Action=http://202.116.104.161/NIP/dis/${ctx}/dis/speInputInfoTestItem.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speInput.action", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=testItemCentreId", "Value=111019", "ENDITEM", 
		"Name=currentId", "Value=", "ENDITEM", 
		"Name=currentSex", "Value=male", "ENDITEM", 
		"Name=type", "Value=单项", "ENDITEM", 
		"LAST");
	
	 
	web_reg_save_param_ex(
		"ParamName=spe_id",
		"LB=\",id:\"",
		"RB=\",deliveryType:",
		"SEARCH_FILTERS",
		"Scope=BODY",
		"LAST");

	web_reg_save_param_ex(
		"ParamName=bar_code",
		"LB=deliveryType:\"\",barCode:\"",
		"RB=\",",
		"SEARCH_FILTERS",
		"Scope=BODY",
		"LAST");

	lr_save_datetime("%Y-%m-%d %H:%M:%S", 0 +0, "time1");	 
	lr_save_datetime("%Y-%m-%d %H:%M:%S", 0 +0 -86400, "time2");	 

	

	web_submit_data("speInputValidateSetLab.action", 
		"Action=http://202.116.104.161/NIP/dis/${ctx}/dis/speInputValidateSetLab.action", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speInput.action", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=specimenInputDto.id", "Value=", "ENDITEM", 
		"Name=specimenInputDto.singleItemTypes", "Value=CERX1000001007-201134-40281281401ec28f01401ec53f690003,", "ENDITEM",  
		"Name=specimenInputDto.groupItemTypes", "Value=", "ENDITEM", 
		"Name=specimenInputDto.setItemTypes", "Value=", "ENDITEM", 
		"Name=specimenInputDto.testItemUCode", "Value=CERX1000001007", "ENDITEM", 
		"Name=specimenInputDto.barCode", "Value={barCode_add}", "ENDITEM", 
		"Name=specimenInputDto.patientType", "Value=", "ENDITEM", 
		"Name=specimenInputDto.specimenStatusId", "Value=1026", "ENDITEM", 
		"Name=specimenInputDto.customer", "Value=f2b7c0b75d5526aa015d5da979192e9b", "ENDITEM", 
		"Name=specimenInputDto.mergeReport", "Value=true", "ENDITEM", 
		"Name=specimenInputDto.reportLanType", "Value=cnReport", "ENDITEM", 
		"Name=specimenInputDto.applyNo", "Value=", "ENDITEM", 
		"Name=specimenInputDto.idCard", "Value=", "ENDITEM", 
		"Name=specimenInputDto.clinicalRemark", "Value=", "ENDITEM", 
		"Name=specimenInputDto.takeDate", "Value={time1}", "ENDITEM", 
		"Name=specimenInputDto.doctorPhone", "Value=", "ENDITEM", 
		"Name=specimenInputDto.patientPhone", "Value=", "ENDITEM", 
		"Name=specimenInputDto.collectDate", "Value={time2}", "ENDITEM", 
		"Name=specimenInputDto.patientWeight", "Value=", "ENDITEM", 
		"Name=specimenInputDto.patientHeight", "Value=", "ENDITEM", 
		"Name=specimenInputDto.patientName", "Value=perf2", "ENDITEM", 
		"Name=specimenInputDto.sexType", "Value=male", "ENDITEM", 
		"Name=specimenInputDto.ageType", "Value=", "ENDITEM", 
		"Name=specimenInputDto.ageYear", "Value=23", "ENDITEM", 
		"Name=specimenInputDto.ageMonth", "Value=", "ENDITEM", 
		"Name=specimenInputDto.ageDay", "Value=", "ENDITEM", 
		"Name=specimenInputDto.ageHour", "Value=", "ENDITEM", 
		"Name=specimenInputDto.patientNo", "Value=", "ENDITEM", 
		"Name=specimenInputDto.bed", "Value=", "ENDITEM", 
		"Name=specimenInputDto.birthday", "Value=", "ENDITEM", 
		"Name=specimenInputDto.babyCount", "Value=", "ENDITEM", 
		"Name=specimenInputDto.urineVolume", "Value=", "ENDITEM", 
		"Name=specimenInputDto.bodyStyle", "Value=", "ENDITEM", 
		"Name=specimenInputDto.seminalVolume", "Value=", "ENDITEM", 
		"Name=specimenInputDto.remark", "Value=", "ENDITEM", 
		"Name=specimenInputDto.location", "Value=", "ENDITEM", 
		"Name=specimenInputDto.doctor", "Value=", "ENDITEM", 
		"Name=specimenInputDto.testTubeBaby", "Value=", "ENDITEM", 
		"Name=specimenInputDto.bloodTransfusion", "Value=", "ENDITEM", 
		"Name=specimenInputDto.transplantation", "Value=", "ENDITEM", 
		"Name=specimenInputDto.stemCellTreatment", "Value=", "ENDITEM", 
		"Name=specimenInputDto.inspectCustomer", "Value=", "ENDITEM", 
		"Name=specimenInputDto.samplingCustomer", "Value=", "ENDITEM", 
		"Name=specimenInputDto.immune", "Value=", "ENDITEM", 
		"Name=specimenInputDto.tumour", "Value=", "ENDITEM", 
		"Name=specimenInputDto.twentOneBodyRisk", "Value=", "ENDITEM", 
		"Name=specimenInputDto.eighteenBodyRisk", "Value=", "ENDITEM", 
		"Name=specimenInputDto.ontdRisk", "Value=", "ENDITEM", 
		"Name=specimenInputDto.specimenStatusName", "Value=正常", "ENDITEM", 	 
		"Name=specimenInputDto.patientTypeName", "Value=", "ENDITEM", 
		"Name=specimenInputDto.samplingDay", "Value=", "ENDITEM", 
		"Name=specimenInputDto.lastmenstrualperiod", "Value=", "ENDITEM", 
		"Name=specimenInputDto.pregnancy", "Value=", "ENDITEM", 
		"Name=specimenInputDto.examinationDay", "Value=", "ENDITEM", 
		"Name=specimenInputDto.examinationChild", "Value=", "ENDITEM", 
		"Name=specimenInputDto.crownrumpLength", "Value=", "ENDITEM", 
		"Name=specimenInputDto.race", "Value=", "ENDITEM", 
		"Name=specimenInputDto.biparietaldiameter", "Value=", "ENDITEM", 
		"Name=specimenInputDto.nuchaltranslucency", "Value=", "ENDITEM", 
		"Name=specimenInputDto.nasalbone", "Value=", "ENDITEM", 
		"Name=specimenInputDto.nasalboneType", "Value=", "ENDITEM", 
		"Name=specimenInputDto.week", "Value=", "ENDITEM", 
		"Name=specimenInputDto.day", "Value=", "ENDITEM", 
		"Name=specimenInputDto.implantdate", "Value=", "ENDITEM", 
		"Name=specimenInputDto.takeeggsdate", "Value=", "ENDITEM", 
		"Name=specimenInputDto.iddm", "Value=", "ENDITEM", 
		"Name=specimenInputDto.is_smoke", "Value=", "ENDITEM", 
		"Name=specimenInputDto.pregnancyway", "Value=", "ENDITEM", 
		"Name=specimenInputDto.abnormalpregnancy", "Value=", "ENDITEM", 
		"Name=specimenInputDto.setUCodes", "Value=", "ENDITEM", 
		"Name=specimenInputDto.uniqueCodeKeys", "Value=CERX1000001007", "ENDITEM", 
		"LAST");

	lr_end_transaction("保存",2);

	lr_think_time(12);

	lr_start_transaction("信息审核");

	web_submit_data("speInputLoadDetailByBarCode.action_2",
		"Action=http://202.116.104.161/NIP/dis/${ctx}/dis/speInputLoadDetailByBarCode.action",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/dis/speInput.action",
		"Snapshot=t21.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=barCode", "Value={bar_code}", "ENDITEM",
		"LAST");

	web_submit_data("speInputLocation.action_2", 
		"Action=http://202.116.104.161/NIP/dis/${ctx}/dis/speInputLocation.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speInput.action", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=customerId", "Value=f2b7c0b75d5526aa015d5da979192e9b", "ENDITEM", 
		"LAST");

	web_submit_data("speInputDoctor.action_2", 
		"Action=http://202.116.104.161/NIP/dis/${ctx}/dis/speInputDoctor.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speInput.action", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=customerId", "Value=f2b7c0b75d5526aa015d5da979192e9b", "ENDITEM", 
		"LAST");

	web_submit_data("speInputVerifyAuditBarCode.action", 
		"Action=http://202.116.104.161/NIP/dis/${ctx}/dis/speInputVerifyAuditBarCode.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speInput.action", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=specimenIds", "Value={spe_id}", "ENDITEM", 
		"LAST");

	web_submit_data("speInputListAudit.action", 
		"Action=http://202.116.104.161/NIP/dis/${ctx}/dis/speInputListAudit.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speInput.action", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=specimenIds", "Value={spe_id}", "ENDITEM", 
		"LAST");

	lr_end_transaction("信息审核",2);

	return 0;
}
# 5 "d:\\hp\\exercises\\sample3\\\\combined_sample3.c" 2

# 1 "sample_receive.c" 1
sample_receive()
{

	lr_think_time(23);

	lr_start_transaction("样本核收");

	web_url("speCheck.action", 
		"URL=http://202.116.104.161/NIP/dis/speCheck.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/dhx_skyblue/bg_top.png", "ENDITEM", 
		"Url=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/dhx_skyblue/dhx_skyblue_top.gif", "ENDITEM", 
		"Url=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/icons_greenfolders/sort_desc.gif", "ENDITEM", 
		"Url=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/sky_blue_grid.gif", "ENDITEM", 
		"LAST");

	lr_think_time(27);

	lr_start_transaction("扫描条码");

	web_submit_data("speCheckScan.action",
		"Action=http://202.116.104.161/NIP/dis/speCheckScan.action",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/dis/speCheck.action",
		"Snapshot=t27.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=barCode", "Value={bar_code}", "ENDITEM",
		"LAST");

	lr_end_transaction("扫描条码",2);

	lr_think_time(31);

	lr_start_transaction("核收人");

	web_submit_data("speCheckAffirm.action",
		"Action=http://202.116.104.161/NIP/dis/speCheckAffirm.action",
		"Method=POST",
		"EncodeAtSign=YES",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/dis/speCheck.action",
		"Snapshot=t28.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=barCodes", "Value={bar_code}", "ENDITEM",
		"Name=userID", "Value=4af4e88a47617eea0147625b464a05d6", "ENDITEM",
		"Name=password", "Value=123@abc", "ENDITEM",
		"LAST");

	lr_end_transaction("核收人",2);

	lr_end_transaction("样本核收",2);

	return 0;
}
# 6 "d:\\hp\\exercises\\sample3\\\\combined_sample3.c" 2

# 1 "sample_distribute.c" 1
sample_distribute()
{

	lr_think_time(17);

	web_url("specimenDispatch.action", 
		"URL=http://202.116.104.161/NIP/dis/specimenDispatch.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=getSpecimenDetailsBylabDept.action?labDeptId=40281281401ec28f01401ec53f690003&dispatcherId=&queryBeginDate=1541383283401&queryEndDate=1541383283401&time=1541383426334", "ENDITEM", 
		"Url=getSpecimenDetailsBylabDept.action?labDeptId=40281281401ec28f01401ec53f690003,16&dispatcherId=4af4e88a47617eea0147625b464a05d6&queryBeginDate=1541383283401&queryEndDate=1541383296000&time=1541383437597", "ENDITEM", 
		"Url=getSpecimenDetailsBylabDept.action?labDeptId=40281281401ec28f01401ec53f690003,16&dispatcherId=4af4e88a47617eea0147625b464a05d6&queryBeginDate=1541383283401&queryEndDate=1541383296000&time=1541383446806", "ENDITEM", 
		"Url=getDispatchedSpecimenByUser.action?dispatcherId=4af4e88a47617eea0147625b464a05d6&time=1541383446830", "ENDITEM", 
		"Url=getSpecimenDetailsBylabDept.action?labDeptId=40281281401ec28f01401ec53f690003,16&dispatcherId=4af4e88a47617eea0147625b464a05d6&queryBeginDate=1541383306061&queryEndDate=1541383306061&time=1541383447349", "ENDITEM", 
		"LAST");

	web_url("specimenDispatchInfo.action", 
		"URL=http://202.116.104.161/NIP/dis/specimenDispatchInfo.action?time=1541383424140", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/specimenDispatch.action", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("dispatchSpecimenQuery.action", 
		"Action=http://202.116.104.161/NIP/dis/dispatchSpecimenQuery.action", 
		"Method=POST", 
		"RecContentType=application/xml", 
		"Referer=http://202.116.104.161/NIP/dis/specimenDispatch.action", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=userId", "Value=", "ENDITEM", 
		"Name=linId", "Value=", "ENDITEM", 
		"Name=currPage", "Value=", "ENDITEM", 
		"Name=comboCurrPage", "Value=1", "ENDITEM", 
		"Name=comboPageSize", "Value=30", "ENDITEM", 
		"LAST");

	web_custom_request("dispatchSpecimenQueryCounttNumber.action", 
		"URL=http://202.116.104.161/NIP/dis/dispatchSpecimenQueryCounttNumber.action?queryType=1&userId=4af4e88a47617eea0147625b464a05d6&linId=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/specimenDispatch.action", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	lr_think_time(4);

	web_custom_request("dispatchSpecimen.action",
		"URL=http://202.116.104.161/NIP/dis/dispatchSpecimen.action?barCode={bar_code}&queryType=1&userId=4af4e88a47617eea0147625b464a05d6&tuberackTypeId=4&forcedDispatch=undefined&time=",	 
		"Method=POST",
		"Resource=1",
		"Referer=http://202.116.104.161/NIP/dis/specimenDispatch.action",
		"Snapshot=t30.inf",
		"EncType=",
		"LAST");

	lr_think_time(8);

	web_custom_request("receiveSpecimen.action", 
		"URL=http://202.116.104.161/NIP/dis/receiveSpecimen.action?userId=4af4e88a47617eea0147625b464a05d6&pwd=123@abc&labDeptId=40281281401ec28f01401ec53f690003,16&dispatcherId=4af4e88a47617eea0147625b464a05d6&queryBeginDate=&queryEndDate=&time=",	 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/specimenDispatch.action", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	return 0;
}
# 7 "d:\\hp\\exercises\\sample3\\\\combined_sample3.c" 2

# 1 "sample_prepare.c" 1
sample_prepare()
{

	lr_think_time(32);

	web_url("samplePrepare.action", 
		"URL=http://202.116.104.161/NIP/lab/samplePrepare.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=specimenPrepareList.action?instrumentId=20192&time=1541383490573", "ENDITEM", 
		"Url=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/item_chk0.gif", "ENDITEM", 
		"LAST");

	web_custom_request("specimenPrepareInitDate.action", 
		"URL=http://202.116.104.161/NIP/lab/specimenPrepareInitDate.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/samplePrepare.action", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");
	
	 
	web_reg_save_param_ex(
		"ParamName=max_seq",
		"LB={maxSeq:",
		"RB=}",
		"SEARCH_FILTERS",
		"Scope=BODY",
		"LAST");

	

	web_submit_data("specimenPrepareMaxSeq.action", 
		"Action=http://202.116.104.161/NIP/lab/specimenPrepareMaxSeq.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/samplePrepare.action", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=instrumentId", "Value=20192", "ENDITEM", 
		"LAST");

	web_submit_data("specimenPrepareCheck.action",
		"Action=http://202.116.104.161/NIP/lab/specimenPrepareCheck.action?time=1541383494528",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/lab/samplePrepare.action",
		"Snapshot=t35.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=instrumentId", "Value=20192", "ENDITEM",
		"Name=subarCode", "Value={bar_code}", "ENDITEM",
		"Name=seq", "Value={max_seq}", "ENDITEM",
		"Name=preSeq", "Value=", "ENDITEM",
		"LAST");

	web_submit_data("specimenPrepareLocalAndNonLocal.action",
		"Action=http://202.116.104.161/NIP/lab/specimenPrepareLocalAndNonLocal.action?time=1541383494579",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/lab/samplePrepare.action",
		"Snapshot=t36.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=instrumentId", "Value=20192", "ENDITEM",
		"Name=subarCode", "Value={bar_code}", "ENDITEM",
		"Name=seq", "Value={max_seq}", "ENDITEM",
		"Name=preSeq", "Value=", "ENDITEM",
		"LAST");

	return 0;
}
# 8 "d:\\hp\\exercises\\sample3\\\\combined_sample3.c" 2

# 1 "sample_result.c" 1
sample_result()
{

	lr_think_time(23);

	web_url("speResult.action", 
		"URL=http://202.116.104.161/NIP/lab/speResult.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../scripts/json2.js?_=1541383524438", "ENDITEM", 
		"Url=../pages/test/scripts/txlr.js?_=1541383524437", "ENDITEM", 
		"Url=../pages/test/scripts/mblr.js?_=1541383524439", "ENDITEM", 
		"LAST");

	web_link("Q", 
		"Text=Q", 
		"Snapshot=t38.inf", 
		"LAST");

	lr_think_time(5);

	web_submit_data("speResultLeft.action", 
		"Action=http://202.116.104.161/NIP/lab/${ctx}/lab/speResultLeft.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/speResult.action", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=instrumentId", "Value=20192", "ENDITEM", 
		"Name=customerId", "Value=", "ENDITEM", 
		"LAST");

	web_submit_data("speResultDetails.action", 
		"Action=http://202.116.104.161/NIP/lab/${ctx}/lab/speResultDetails.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/speResult.action", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=subBarCode", "Value={bar_code}", "ENDITEM", 
		"Name=instrumentId", "Value=20192", "ENDITEM", 
		"LAST");

	web_url("speResultPatientInfo.action", 
		"URL=http://202.116.104.161/NIP/lab/${ctx}/lab/speResultPatientInfo.action?subBarCodeForPatient={bar_code}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/speResult.action", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("speResultPatientInfo.action_2",
		"URL=http://202.116.104.161/NIP/lab/${ctx}/lab/speResultPatientInfo.action?subBarCodeForPatient={bar_code}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/lab/speResult.action",
		"Snapshot=t42.inf",
		"Mode=HTML",
		"LAST");

	 
	web_reg_save_param_ex(
		"ParamName=spe_instrument_item_id",
		"LB=message:\"\",id:\"",
		"RB=\",result:\"",
		"SEARCH_FILTERS",
		"Scope=BODY",
		"LAST");
	
	web_submit_data("speResultDetails.action_2",
		"Action=http://202.116.104.161/NIP/lab/${ctx}/lab/speResultDetails.action",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/lab/speResult.action",
		"Snapshot=t43.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=subBarCode", "Value={bar_code}", "ENDITEM",
		"Name=instrumentId", "Value=20192", "ENDITEM",
		"LAST");
	
	 
	web_reg_save_param_ex(
		"ParamName=spe_result_id",
		"LB=\"statusInfo\":{\"id\":\"",
		"RB=\",\"subBarCode\":\"",
		"SEARCH_FILTERS",
		"Scope=BODY",
		"LAST");
	
	
	web_custom_request("speResultSaveResult.action",
		"URL=http://202.116.104.161/NIP/lab/${ctx}/lab/speResultSaveResult.action",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/lab/speResult.action",
		"Snapshot=t44.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=resultTypeName=%E6%95%B0%E5%80%BC%E5%9E%8B&subBarCode={bar_code}&uniqueCode=CERX1000001007&testItemResult=1.00&instrumentId=20192&itemName=%E8%A1%80%E6%B8%85C%E8%82%BD%E6%B5%8B%E5%AE%9A(CP)",
		"LAST");

	web_submit_data("speResultSubmitSpecimen.action", 
		"Action=http://202.116.104.161/NIP/lab/${ctx}/lab/speResultSubmitSpecimen.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/speResult.action", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=speInstrumentItemIds", "Value={spe_instrument_item_id}", "ENDITEM", 
		"Name=currentSpeId", "Value={spe_result_id}", "ENDITEM", 
		"Name=instrumentId", "Value=20192", "ENDITEM", 
		"LAST");

	web_url("speResultPatientInfo.action_3", 
		"URL=http://202.116.104.161/NIP/lab/${ctx}/lab/speResultPatientInfo.action?subBarCodeForPatient={bar_code}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/speResult.action", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("speResultDetails.action_3", 
		"Action=http://202.116.104.161/NIP/lab/${ctx}/lab/speResultDetails.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/speResult.action", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=subBarCode", "Value={bar_code}", "ENDITEM", 
		"Name=instrumentId", "Value=20192", "ENDITEM", 
		"LAST");

	return 0;
}
# 9 "d:\\hp\\exercises\\sample3\\\\combined_sample3.c" 2

# 1 "relogin.c" 1
relogin()
{

	web_submit_data("login.action_3", 
		"Action=http://202.116.104.161/NIP/login.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/login.action", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		"ITEMDATA", 
		"Name=userName", "Value=sh", "ENDITEM", 
		"Name=password", "Value=123@abc", "ENDITEM", 
		"EXTRARES", 
		"Url=scripts/pdfobject.js?_=1541383609637", "Referer=http://202.116.104.161/NIP/home.action", "ENDITEM", 
		"Url=scripts/jquery-1.8.2.min.js?_=1541383609638", "Referer=http://202.116.104.161/NIP/home.action", "ENDITEM", 
		"Url=scripts/pdfobject.js?_=1541383609639", "Referer=http://202.116.104.161/NIP/home.action", "ENDITEM", 
		"Url=scripts/jquery-1.8.2.min.js?_=1541383609640", "Referer=http://202.116.104.161/NIP/home.action", "ENDITEM", 
		"Url=scripts/jquery.blockUI.js?_=1541383609641", "Referer=http://202.116.104.161/NIP/home.action", "ENDITEM", 
		"Url=scripts/common.js?_=1541383609642", "Referer=http://202.116.104.161/NIP/home.action", "ENDITEM", 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/dhtmlx.js?_=1541383609643", "Referer=http://202.116.104.161/NIP/home.action", "ENDITEM", 
		"LAST");

	web_url("top.jsp_2", 
		"URL=http://202.116.104.161/NIP/pages/common/top.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("welcome.jsp_2", 
		"URL=http://202.116.104.161/NIP/pages/welcome.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("left.jsp_2", 
		"URL=http://202.116.104.161/NIP/pages/common/left.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("searchdanger.action_2", 
		"URL=http://202.116.104.161/NIP/rpt/searchdanger.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("searchdelay.action_2", 
		"URL=http://202.116.104.161/NIP/rpt/searchdelay.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("noticeNewSearch.action_2", 
		"URL=http://202.116.104.161/NIP/ref/noticeNewSearch.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/pages/welcome.jsp", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("rateMatured.action_2", 
		"URL=http://202.116.104.161/NIP/ref/rateMatured.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	return 0;
}
# 10 "d:\\hp\\exercises\\sample3\\\\combined_sample3.c" 2

# 1 "sample_confirm.c" 1
sample_confirm()
{

	lr_think_time(71);

	web_url("specimenAuditMain.action", 
		"URL=http://202.116.104.161/NIP/lab/specimenAuditMain.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../pages/test/scripts/txlr.js?_=1541383684606", "ENDITEM", 
		"Url=../scripts/json2.js?_=1541383684607", "ENDITEM", 
		"Url=../pages/test/scripts/mblr.js?_=1541383684608", "ENDITEM", 
		"LAST");

	web_link("Q_2", 
		"Text=Q", 
		"Snapshot=t58.inf", 
		"LAST");

	lr_think_time(5);

	web_submit_data("specimenAuditLeft.action", 
		"Action=http://202.116.104.161/NIP/lab/${ctx}/lab/specimenAuditLeft.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/specimenAuditMain.action", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=instrumentId", "Value=20192", "ENDITEM", 
		"Name=customerId", "Value=", "ENDITEM", 
		"LAST");

	web_url("specimenAuditPatientInfo.action", 
		"URL=http://202.116.104.161/NIP/lab/${ctx}/lab/specimenAuditPatientInfo.action?subBarCodeForPatient={bar_code}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/specimenAuditMain.action", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("specimenAuditDetails.action", 
		"Action=http://202.116.104.161/NIP/lab/${ctx}/lab/specimenAuditDetails.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/specimenAuditMain.action", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=subBarCode", "Value={bar_code}", "ENDITEM", 
		"Name=instrumentId", "Value=20192", "ENDITEM", 
		"LAST");

	web_url("specimenAuditPatientInfo.action_2",
		"URL=http://202.116.104.161/NIP/lab/${ctx}/lab/specimenAuditPatientInfo.action?subBarCodeForPatient={bar_code}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/lab/specimenAuditMain.action",
		"Snapshot=t62.inf",
		"Mode=HTML",
		"LAST");

	web_submit_data("specimenAuditDetails.action_2",
		"Action=http://202.116.104.161/NIP/lab/${ctx}/lab/specimenAuditDetails.action",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/lab/specimenAuditMain.action",
		"Snapshot=t63.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=subBarCode", "Value={bar_code}", "ENDITEM",
		"Name=instrumentId", "Value=20192", "ENDITEM",
		"LAST");

	web_submit_data("specimenAuditAudit.action", 
		"Action=http://202.116.104.161/NIP/lab/${ctx}/lab/specimenAuditAudit.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/specimenAuditMain.action", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=speInstrumentItemIds", "Value={spe_instrument_item_id}", "ENDITEM", 
		"Name=currentSpeId", "Value={spe_result_id}", "ENDITEM", 
		"Name=instrumentId", "Value=20192", "ENDITEM", 
		"Name=instrumentName", "Value=西门子2", "ENDITEM", 
		"LAST");

	web_url("specimenAuditPatientInfo.action_3", 
		"URL=http://202.116.104.161/NIP/lab/${ctx}/lab/specimenAuditPatientInfo.action?subBarCodeForPatient={bar_code}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/specimenAuditMain.action", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("specimenAuditDetails.action_3", 
		"Action=http://202.116.104.161/NIP/lab/${ctx}/lab/specimenAuditDetails.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/specimenAuditMain.action", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=subBarCode", "Value={bar_code}", "ENDITEM", 
		"Name=instrumentId", "Value=20192", "ENDITEM", 
		"LAST");

	return 0;
}
# 11 "d:\\hp\\exercises\\sample3\\\\combined_sample3.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 12 "d:\\hp\\exercises\\sample3\\\\combined_sample3.c" 2

