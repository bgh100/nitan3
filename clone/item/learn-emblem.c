#include <ansi.h>
inherit ITEM;

void create()
{
        set_name(MAG "�Ͻ�ѧϰѫ��" NOR, ({ "learn emblem", "emblem" }));
        set_weight(3000);
        if (clonep())
                set_default_object(__FILE__);
        else {
                set("long", MAG "�������Ͽ�������ѧϰ���������ٴΡ�\n" NOR);
                set("unit", "��");
                set("value", 500000);
        }
        setup();
}

int query_autoload()
{
        return 1;
}
