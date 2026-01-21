/*File: a container in a storage device
to store data
Stored in Hard disks
File I/O is fetching files fomr ram and hard dish
Program runned in ram
Files are used to presist the data*/

/*Operations on File------->
create a file
open a file
close a file
read a file 
write a file */

/*Types of files----->
Text files -- Textual data -> .c, .txt
Binary file -- Binary data -> .exe, .mp3, .jpg*/

/*File Pointer ------>
FILE is a (hidden) structure that needs to be created for opeing 
a file
A FILE ptr that points to this structure and is used to access the 
file

FILE *fptr //syntax
fptr = fopen("filename",mode);

fclose(fptr); // closing a file
*/

/*File opening Modes
"r" - open to read //null is stored if file does not exist
"rb" - open to read in binary //null is stored if file does not exist
"w" - open to write // file is created if not there //overwrites
"wb" - open to write in binary // file is created if not there //overwrites
"a" - open to append*/ // Add in file without overwriting

/*Two imp functions:
fgetc(fptr) -> fetch char (read)
fputc('A',fptr) -put char (write)*/


/*EOF (end of file):
fgetc returrns EOF to show that the file has ended */
