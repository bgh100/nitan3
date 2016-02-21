// Copyright (C) 2003, by Lonely. All rights reserved.
// This software can not be used, copied, or modified 
// in any form without the written permission from authors.
// sanjue.c  ��Ħ�� ��Ħ������

#include <ansi.h>

inherit F_SSERVER;
 
int perform(object me, object target)
{
        object weapon;
        string msg;

        if (userp(me) && ! me->query("can_perform/damo-jian/sanjue"))
                return notify_fail("�㻹û���ܹ�����ָ�㣬�޷�ʩչ����Ħ����������\n");
 
        if (! target) target = offensive_target(me);

        if (! target || ! me->is_fighting(target))
                return notify_fail("����Ħ��������ֻ����ս���жԶ���ʹ�á�\n");

        if (! objectp(weapon = me->query_temp("weapon")) ||
              (string)weapon->query("skill_type") != "sword")
                return notify_fail("��ʹ�õ��������ԡ�\n");

        if (me->query_dex() < 30)
                return notify_fail("�������������Ŀǰ������ʹ�����������\n");

        if (me->query_skill("force") < 200)
                return notify_fail("����ڹ�����Ϊ����������ʹ����һ������\n");

        if (me->query_skill("dodge") < 200)
                return notify_fail("����Ṧ��Ϊ����������ʹ�ô�Ħ��������\n");
 
        if (me->query_skill("sword") < 200)
                return notify_fail("��Ľ�����Ϊ������Ŀǰ����ʹ�ô�Ħ��������\n");

        if (me->query("neili") < 150)
                return notify_fail("�����������������ʹ�ô�Ħ��������\n");

        if (me->query_skill_mapped("sword") != "damo-jian")
                return notify_fail("��û�м�����Ħ��������ʹ�ô�Ħ��������\n");

        msg = HIC "$N" HIC "ʹ����Ħ���ľ�������Ħ����������������Ȼ�ӿ죡\n" NOR;
        message_combatd(msg, me);

        me->add("neili", -75);

        // The first attack
        me->add_temp("apply/attack", 100);
        COMBAT_D->do_attack(me, target, weapon, 0);

        // The second attack
        me->add_temp("apply/attack", 200);
        COMBAT_D->do_attack(me, target, weapon, 0);

        // The third attack
        me->add_temp("apply/attack", 300);
        COMBAT_D->do_attack(me, target, weapon, 0);

        // Back
        me->add_temp("apply/attack", -600);

        me->start_busy(1 + random(3));

        return 1;
}
