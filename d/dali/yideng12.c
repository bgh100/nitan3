//Cracked by Kafei
// yideng quest room 12

inherit ROOM;
void create()
{
        set("short", "����ʯ��");
        set("long", @LONG
�������ʯ�������ľ����������������ı����������ڲ���֮��
��������С���ϵ���һ¯̴�㣬����һλ��ɮ�����������ϡ�
LONG );

        set("exits", ([
                "south" : __DIR__"yideng11",
        ]));

        set("objects", ([
                CLASS_D("duan") + "/yideng" : 1,
                ]) );

	set("invalid_startroom", 1);
        setup();
}