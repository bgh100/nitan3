// Room: /d/suzhou/toumenshan.c
// Date: May 31, 98  Java

inherit ROOM;

void create()
{
	set("short", "ͷ��ɽ");
        set("long", @LONG
ͷɽ���ڻ���ɽ�����棬���ƻ�ͷ��������ǽ�����š���ӿ���ԡ��ĸ����֣�
��ʾ������󺣵�ԨԴ��ϵ��
LONG );
	set("outdoors", "suzhou");
//	set("no_clean_up", 0);
	set("exits", ([
		"north" : "/d/suzhou/huqiu",
		"west"  : "/d/suzhou/wanjing",
	]));
        set("objects", ([
		"/d/taishan/npc/jian-ke" : 1,
	]));
	set("coor/x", 190);
	set("coor/y", -180);
	set("coor/z", 0);
	setup();
	replace_program(ROOM);
}
