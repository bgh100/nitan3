inherit ROOM;

void create()
{
        set("short", "��ɼ��");
        set("long", @long
������һƬ�����޾��Ĵ��̵����֣����ܵ���ɼ������
��ɡ�����ص�����֦Ѿ��ֻ©�°߰ߵ��ϸ�����Ӱ��������
ʮ���ľ�������ȸҲ�ٷ�����ֻż��������Զ���ļ���������
long);
	set("exits",([
		"north" : __DIR__"houyuan",
		"east"  : __DIR__"shanlin1",
		"south" : __DIR__"shanlin" + (random(5) + 1),
		"west"  : __DIR__"shanlin" + (random(5) + 1),
	]));
	set("outdoors", "kunlun");
	setup();
	replace_program(ROOM);
}