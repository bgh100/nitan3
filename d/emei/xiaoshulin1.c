inherit ROOM;

void create()
{
        set("short","С����");
        set("long",@LONG
���Ƕ���ɽ�𶥻��������һƬС���֡�����û��·����
������ϡ��Щ�㼣���ƺ��������߹���������һ��С����
LONG);
        set("outdoors", "emei");
        set("exits", ([
                "south"   : __DIR__"xiaoshulin2", 
        ]));
        set("no_clean_up", 0);
        setup();
}

void init()
{
        add_action("do_jump", "jump");
}

int do_jump(string arg)
{
        object me = this_player();

        if (! arg || arg != "chuang")
                return 0;

        message_vision("$N���˲�ע�⣬�������\n", me);
        me->move(__DIR__"hcawest");
        message_vision("$N�ӻ�����������������\n", me);
        return 1;
}