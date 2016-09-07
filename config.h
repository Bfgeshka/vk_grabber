/*
 * For generation of token getting link.
 * Create your own application, get its ID and insert it here.
 *
 * For creating your application visit https://vk.com/editapp?act=create.
 * Choose "standalone application" and give it a name you like.
 *
 * After if go to "My apps": https://vk.com/apps?act=manage
 * Go to 'manage' on the right side.
 *
 * Choose 'settings', and there you can see your application id.
 * Copy it and replace value of APPLICATION_ID.
 */
#define APPLICATION_ID 0




/* 1L - verbose curl connection, 0L - silent */
#define CRL_VERBOSITY 0L

/* Limitations for number of photos per request. Current is 1000 */
#define LIMIT_A 1000

/* Limitations for number of wall posts per request. Current is 100 */
#define LIMIT_W 100

/* Limitations for number of videos per request. Current is 200, default is 100 */
#define LIMIT_V 200

/* File and directory naming for constant values */
#define DIRNAME_DOCS "alb_docs"
#define DIRNAME_WALL "alb_attachments"
#define DIRNAME_ALB_PROF "alb_profile"
#define DIRNAME_ALB_WALL "alb_wall"
#define DIRNAME_ALB_SAVD "alb_saved"
#define DIRNAME_AUDIO "alb_tracks"
#define DIRNAME_VIDEO "alb_videos"
#define FILNAME_POSTS "wall.txt"
#define FILNAME_DOCS "documents.txt"
#define FILNAME_FRIENDS "friends.txt"
#define FILNAME_GROUPS "communities.txt"
#define FILNAME_VIDEOS "videos.txt"
#define FILNAME_IDNAME "description.txt"

/* Sometimes program runs too fast and VK returns errors because of too often api requests.
 * This timer slows program down before making a request. It wouldn't be applied to file downloading.
 * Default value is 100000, which means 0.1s. */
#define USLEEP_INT 100000

/* Defines which file types would be downloaded; 0 means skip, 1 means download
 * These are default values, can be overriden. Read vkgrab -h for more info */
#define DOGET_AUD 0
#define DOGET_VID 1
#define DOGET_DOC 1
#define DOGET_PIC 1

/* Size for usual string */
#define bufs 512
#define a_field 32

/*
 * Better use vkgrab -T for getting temporary token! Read above.
 *
 * How to get access token:
 * https://new.vk.com/dev/auth_mobile
 * recommended permissions: audio,video,docs,photos
 *
 * Example:
 * char TOKEN[bufs] "&access_token=blahblahblah"
 */
#define permissions "audio,video,docs,photos"
#define TOKEN_HEAD "&access_token="
char TOKEN[bufs] = TOKEN_HEAD;
