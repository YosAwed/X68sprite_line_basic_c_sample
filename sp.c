#include	<basic0.h>
#include	<mouse.h>
#include	<graph.h>
#include	<sprite.h>
static	int	i;
static	int	x;
static	int	y;
static	int	x1;
static	int	y1;
static	int	xx;
static	int	yy;
static	int	bl;
static	int	br;
static	unsigned char	ca[255+1];
static	unsigned char	_var0000[255+1]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
,0,0,2,0,2,0,2,0,0,2,0,2,0,2,0,0
,0,0,0,3,0,3,0,3,3,0,3,0,3,0,0,0
,0,1,2,0,4,0,0,4,4,0,0,4,0,2,1,0
,0,0,0,3,0,5,0,5,5,0,5,0,3,0,0,0
,0,0,2,0,0,0,6,0,0,6,0,0,0,2,0,0
,0,1,0,3,4,5,0,7,7,0,5,4,3,0,1,0
,0,1,0,3,4,5,0,7,7,0,5,4,3,0,1,0
,0,0,2,0,0,0,6,0,0,6,0,0,0,2,0,0
,0,0,0,3,0,5,0,5,5,0,5,0,3,0,0,0
,0,1,2,0,4,0,0,4,4,0,0,4,0,2,1,0
,0,0,0,3,0,3,0,3,3,0,3,0,3,0,0,0
,0,0,2,0,2,0,2,0,0,2,0,2,0,2,0,0
,0,1,0,0,1,0,0,1,1,0,0,1,0,0,1,0
,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};
/******** program start ********/
void
main(b_argc,b_argv)
int	b_argc;
char	*b_argv[];
{
b_init();
movmem(_var0000,ca,sizeof(ca));
screen(1,3,1,1);
console(0,31,0);
window(0,0,511,511);
mouse(0);
sp_init();
sp_clr('NASI','NASI');
sp_def(16,ca,'NASI');
for (i=0;i<=7;i++){
	sp_color(i,0b1111000000000*i+0xC7,3);
}
sp_on(16,'NASI');
sp_disp(1);
vpage(1);
apage(0);
mspos(&x1,&y1);
while (1){
	mspos(&x,&y);
	sp_set(16,x,y,0x310,'NASI');
	line(x,y,x1,y1,x*y % 65536,'NASI');
	x1=x;
	y1=y;
	msstat(&xx,&yy,&bl,&br);
	if ( bl==-1 ) {
		break;
	}
}
wipe();
console(0,31,1);
sp_disp(0);
b_exit(0);
}
