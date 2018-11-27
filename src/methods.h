#ifndef METHODS_H_
#define METHODS_H_

#include <curl/curl.h>
#include <jansson.h>
#include "../config.h"

struct data_account
{
	long long id;
	char screenname[BUFSIZ/2];
	char usr_fname[BUFSIZ/2];
	char usr_lname[BUFSIZ/2];
	char grp_name[BUFSIZ/2];
	char grp_type[BUFSIZ/4];

	/* 0 means ok: */
	short grp_ok;
	short usr_ok;
} acc;

struct data_album
{
	long long aid;
	long long size;
	char title[BUFSIZ];
};

struct control_datatypes
{
	short docmt;
	short pictr;
	short video;
	short comts;
	short ldate;
} types;

long long photos_count;
struct data_album * albums;

const char * js_get_str        ( json_t *, char * );
int          readable_date     ( long long, FILE * );
long long    get_id            ( int, char ** );
long long    js_get_int        ( json_t *, char * );
short        group             ( char * );
short        user              ( char * );
size_t       get_albums        ( void );
void         api_request_pause ( void );
void         prepare           ( void );
void         dl_document       ( char *, char *, json_t *, FILE *, long long, long long );
void         dl_photo          ( char *, char *, json_t *, FILE *, long long, long long );
void         dl_video          ( char *, char *, json_t *, FILE *, long long, long long );
void         fix_filename      ( char * );
void         get_albums_files  ( size_t, char * );
void         get_comments      ( char *, char *, FILE *, long long );
void         get_docs          ( char * );
void         get_friends       ( char * );
void         get_groups        ( char * );
void         get_videos        ( char * );
void         get_wall          ( char * );
void         help_print        ( void );
void         parse_attachments ( char *, char *, json_t *, FILE *, long long, long long );


#endif
