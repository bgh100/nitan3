//hamigua.c

inherit ITEM;
inherit F_FOOD;

void create()
{
        set_name("���ܹ�", ({"hami gua", "hamigua", "gua"}));
        set_weight(80);
  	if (clonep())
  		set_default_object(__FILE__);
  	else 
	{
  		set("long", "һ��ɢ������Ĺ��ܹϡ��\n");
  		set("unit", "��");
  		set("value", 120);
  		set("food_remaining", 4);
  		set("food_supply", 30);
	}
}
