//Cracked by Kafei
// yijing.c

inherit ITEM;

void create()
{
	set_name( "�׾�������ƪ��", ({ "jing", "yi jing" }));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "����һ���׾�������д�ţ�\n
��������أ�Ȼ������� �����Ȼ������Ů�� ����Ů��Ȼ���з򸾣�
�з򸾣�Ȼ���и��ӣ��и���Ȼ���о������о�����Ȼ�������£������£�
Ȼ�������������� ��֮���������Բ���Ҳ������֮�Ժ㣻�ﲻ����Ҳ��
����֮��δ�����ɡ�
\n");
		set("value", 200);
		set("material", "paper");
		set("skill", ([
			"name":	"qimen-wuxing",	// name of the skill
			"exp_required":	0,	// minimum combat experience required
			"jing_cost": 10, 	// jing cost every time study this
			"difficulty":	20,	// the base int to learn this skill
			"max_skill":	30,	// the maximum level you can learn
		]) );
	}
}