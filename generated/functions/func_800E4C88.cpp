#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E4C88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r30_addic_src_0 = 0;
    uint32_t r30_addic_src_1 = 0;
    uint32_t r30_addic_src_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800E4C88;

loc_800E4C88:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(51));
}

loc_800E4C94:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80270000u;
    r31 = (r31 + 28752);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E4F94;
    }
}

loc_800E4CBC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4CE4;
    }
}

loc_800E4CC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(10));
}

loc_800E4CC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E4DEC;
    }
}

loc_800E4CC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4CD8;
    }
}

loc_800E4CCC:
{
}

loc_800E4CD0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(8))) {
        goto loc_800E4D0C;
    }
}

loc_800E4CD4:
{
    goto loc_800E54A4;
}

loc_800E4CD8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(50));
}

loc_800E4CDC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4EC0;
    }
}

loc_800E4CE0:
{
    goto loc_800E54A4;
}

loc_800E4CE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(55));
}

loc_800E4CE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E52FC;
    }
}

loc_800E4CEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4D00;
    }
}

loc_800E4CF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(53));
}

loc_800E4CF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E5134;
    }
}

loc_800E4CF8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E5200;
    }
}

loc_800E4CFC:
{
    goto loc_800E5068;
}

loc_800E4D00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(57));
}

loc_800E4D04:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E54A4;
    }
}

loc_800E4D08:
{
    goto loc_800E53D0;
}

loc_800E4D0C:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r30 = MemoryInline::FlatRead32((r3 + 48));
    r30_addic_src_0 = r30;
    r30 = (r30_addic_src_0 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r30_addic_src_0)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_800E4D18:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4D20;
    }
}

loc_800E4D1C:
{
    r30 = 0;
}

loc_800E4D20:
{
    r3 = r29;
    r4 = r30;
    ctx->lr = 0x800E4D2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8010F394u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(51));
}

loc_800E4D30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E4D9C;
    }
}

loc_800E4D34:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4D5C;
    }
}

loc_800E4D38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(10));
}

loc_800E4D3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E4D8C;
    }
}

loc_800E4D40:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4D50;
    }
}

loc_800E4D44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(8));
}

loc_800E4D48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E4D84;
    }
}

loc_800E4D4C:
{
    goto loc_800E4DCC;
}

loc_800E4D50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(50));
}

loc_800E4D54:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4D94;
    }
}

loc_800E4D58:
{
    goto loc_800E4DCC;
}

loc_800E4D5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(55));
}

loc_800E4D60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E4DBC;
    }
}

loc_800E4D64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4D78;
    }
}

loc_800E4D68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(53));
}

loc_800E4D6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E4DAC;
    }
}

loc_800E4D70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4DB4;
    }
}

loc_800E4D74:
{
    goto loc_800E4DA4;
}

loc_800E4D78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(57));
}

loc_800E4D7C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4DCC;
    }
}

loc_800E4D80:
{
    goto loc_800E4DC4;
}

loc_800E4D84:
{
    r6 = (r31 + 8012);
    goto loc_800E4DD0;
}

loc_800E4D8C:
{
    r6 = (r31 + 8024);
    goto loc_800E4DD0;
}

loc_800E4D94:
{
    r6 = (r13 + -32004);
    goto loc_800E4DD0;
}

loc_800E4D9C:
{
    r6 = (r13 + -32000);
    goto loc_800E4DD0;
}

loc_800E4DA4:
{
    r6 = (r13 + -32168);
    goto loc_800E4DD0;
}

loc_800E4DAC:
{
    r6 = (r13 + -31992);
    goto loc_800E4DD0;
}

loc_800E4DB4:
{
    r6 = (r13 + -31984);
    goto loc_800E4DD0;
}

loc_800E4DBC:
{
    r6 = (r13 + -31976);
    goto loc_800E4DD0;
}

loc_800E4DC4:
{
    r6 = (r13 + -31968);
    goto loc_800E4DD0;
}

loc_800E4DCC:
{
    r6 = (r13 + -31960);
}

loc_800E4DD0:
{
    r5 = r28;
    r7 = r30;
    r4 = (r31 + 8040);
    r3 = 512;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800E4DE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800E54FC;
}

loc_800E4DEC:
{
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    r3 = r29;
    r4 = MemoryInline::FlatRead8((r4 + 23));
    ctx->lr = 0x800E4DFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8010F394u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(51));
}

loc_800E4E00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E4E6C;
    }
}

loc_800E4E04:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4E2C;
    }
}

loc_800E4E08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(10));
}

loc_800E4E0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E4E5C;
    }
}

loc_800E4E10:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4E20;
    }
}

loc_800E4E14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(8));
}

loc_800E4E18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E4E54;
    }
}

loc_800E4E1C:
{
    goto loc_800E4E9C;
}

loc_800E4E20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(50));
}

loc_800E4E24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4E64;
    }
}

loc_800E4E28:
{
    goto loc_800E4E9C;
}

loc_800E4E2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(55));
}

loc_800E4E30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E4E8C;
    }
}

loc_800E4E34:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4E48;
    }
}

loc_800E4E38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(53));
}

loc_800E4E3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E4E7C;
    }
}

loc_800E4E40:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4E84;
    }
}

loc_800E4E44:
{
    goto loc_800E4E74;
}

loc_800E4E48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(57));
}

loc_800E4E4C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4E9C;
    }
}

loc_800E4E50:
{
    goto loc_800E4E94;
}

loc_800E4E54:
{
    r6 = (r31 + 8012);
    goto loc_800E4EA0;
}

loc_800E4E5C:
{
    r6 = (r31 + 8024);
    goto loc_800E4EA0;
}

loc_800E4E64:
{
    r6 = (r13 + -32004);
    goto loc_800E4EA0;
}

loc_800E4E6C:
{
    r6 = (r13 + -32000);
    goto loc_800E4EA0;
}

loc_800E4E74:
{
    r6 = (r13 + -32168);
    goto loc_800E4EA0;
}

loc_800E4E7C:
{
    r6 = (r13 + -31992);
    goto loc_800E4EA0;
}

loc_800E4E84:
{
    r6 = (r13 + -31984);
    goto loc_800E4EA0;
}

loc_800E4E8C:
{
    r6 = (r13 + -31976);
    goto loc_800E4EA0;
}

loc_800E4E94:
{
    r6 = (r13 + -31968);
    goto loc_800E4EA0;
}

loc_800E4E9C:
{
    r6 = (r13 + -31960);
}

loc_800E4EA0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r5 = r28;
    r4 = (r31 + 8040);
    r7 = MemoryInline::FlatRead8((r3 + 23));
    r3 = 512;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800E4EBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800E54FC;
}

loc_800E4EC0:
{
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    r3 = r29;
    r4 = MemoryInline::FlatRead32((r4 + 1912));
    ctx->lr = 0x800E4ED0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8010F394u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(51));
}

loc_800E4ED4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E4F40;
    }
}

loc_800E4ED8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4F00;
    }
}

loc_800E4EDC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(10));
}

loc_800E4EE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E4F30;
    }
}

loc_800E4EE4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4EF4;
    }
}

loc_800E4EE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(8));
}

loc_800E4EEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E4F28;
    }
}

loc_800E4EF0:
{
    goto loc_800E4F70;
}

loc_800E4EF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(50));
}

loc_800E4EF8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4F38;
    }
}

loc_800E4EFC:
{
    goto loc_800E4F70;
}

loc_800E4F00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(55));
}

loc_800E4F04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E4F60;
    }
}

loc_800E4F08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4F1C;
    }
}

loc_800E4F0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(53));
}

loc_800E4F10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E4F50;
    }
}

loc_800E4F14:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4F58;
    }
}

loc_800E4F18:
{
    goto loc_800E4F48;
}

loc_800E4F1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(57));
}

loc_800E4F20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4F70;
    }
}

loc_800E4F24:
{
    goto loc_800E4F68;
}

loc_800E4F28:
{
    r6 = (r31 + 8012);
    goto loc_800E4F74;
}

loc_800E4F30:
{
    r6 = (r31 + 8024);
    goto loc_800E4F74;
}

loc_800E4F38:
{
    r6 = (r13 + -32004);
    goto loc_800E4F74;
}

loc_800E4F40:
{
    r6 = (r13 + -32000);
    goto loc_800E4F74;
}

loc_800E4F48:
{
    r6 = (r13 + -32168);
    goto loc_800E4F74;
}

loc_800E4F50:
{
    r6 = (r13 + -31992);
    goto loc_800E4F74;
}

loc_800E4F58:
{
    r6 = (r13 + -31984);
    goto loc_800E4F74;
}

loc_800E4F60:
{
    r6 = (r13 + -31976);
    goto loc_800E4F74;
}

loc_800E4F68:
{
    r6 = (r13 + -31968);
    goto loc_800E4F74;
}

loc_800E4F70:
{
    r6 = (r13 + -31960);
}

loc_800E4F74:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r5 = r28;
    r4 = (r31 + 8040);
    r7 = MemoryInline::FlatRead32((r3 + 1912));
    r3 = 512;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800E4F90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800E54FC;
}

loc_800E4F94:
{
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    r3 = r29;
    r4 = MemoryInline::FlatRead8((r4 + 21));
    ctx->lr = 0x800E4FA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8010F394u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(51));
}

loc_800E4FA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E5014;
    }
}

loc_800E4FAC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4FD4;
    }
}

loc_800E4FB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(10));
}

loc_800E4FB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E5004;
    }
}

loc_800E4FB8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4FC8;
    }
}

loc_800E4FBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(8));
}

loc_800E4FC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E4FFC;
    }
}

loc_800E4FC4:
{
    goto loc_800E5044;
}

loc_800E4FC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(50));
}

loc_800E4FCC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E500C;
    }
}

loc_800E4FD0:
{
    goto loc_800E5044;
}

loc_800E4FD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(55));
}

loc_800E4FD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E5034;
    }
}

loc_800E4FDC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4FF0;
    }
}

loc_800E4FE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(53));
}

loc_800E4FE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E5024;
    }
}

loc_800E4FE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E502C;
    }
}

loc_800E4FEC:
{
    goto loc_800E501C;
}

loc_800E4FF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(57));
}

loc_800E4FF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E5044;
    }
}

loc_800E4FF8:
{
    goto loc_800E503C;
}

loc_800E4FFC:
{
    r6 = (r31 + 8012);
    goto loc_800E5048;
}

loc_800E5004:
{
    r6 = (r31 + 8024);
    goto loc_800E5048;
}

loc_800E500C:
{
    r6 = (r13 + -32004);
    goto loc_800E5048;
}

loc_800E5014:
{
    r6 = (r13 + -32000);
    goto loc_800E5048;
}

loc_800E501C:
{
    r6 = (r13 + -32168);
    goto loc_800E5048;
}

loc_800E5024:
{
    r6 = (r13 + -31992);
    goto loc_800E5048;
}

loc_800E502C:
{
    r6 = (r13 + -31984);
    goto loc_800E5048;
}

loc_800E5034:
{
    r6 = (r13 + -31976);
    goto loc_800E5048;
}

loc_800E503C:
{
    r6 = (r13 + -31968);
    goto loc_800E5048;
}

loc_800E5044:
{
    r6 = (r13 + -31960);
}

loc_800E5048:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r5 = r28;
    r4 = (r31 + 8040);
    r7 = MemoryInline::FlatRead8((r3 + 21));
    r3 = 512;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800E5064u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800E54FC;
}

loc_800E5068:
{
    r3 = r29;
    r4 = 90;
    ctx->lr = 0x800E5074u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8010F394u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(51));
}

loc_800E5078:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E50E4;
    }
}

loc_800E507C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E50A4;
    }
}

loc_800E5080:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(10));
}

loc_800E5084:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E50D4;
    }
}

loc_800E5088:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E5098;
    }
}

loc_800E508C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(8));
}

loc_800E5090:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E50CC;
    }
}

loc_800E5094:
{
    goto loc_800E5114;
}

loc_800E5098:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(50));
}

loc_800E509C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E50DC;
    }
}

loc_800E50A0:
{
    goto loc_800E5114;
}

loc_800E50A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(55));
}

loc_800E50A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E5104;
    }
}

loc_800E50AC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E50C0;
    }
}

loc_800E50B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(53));
}

loc_800E50B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E50F4;
    }
}

loc_800E50B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E50FC;
    }
}

loc_800E50BC:
{
    goto loc_800E50EC;
}

loc_800E50C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(57));
}

loc_800E50C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E5114;
    }
}

loc_800E50C8:
{
    goto loc_800E510C;
}

loc_800E50CC:
{
    r6 = (r31 + 8012);
    goto loc_800E5118;
}

loc_800E50D4:
{
    r6 = (r31 + 8024);
    goto loc_800E5118;
}

loc_800E50DC:
{
    r6 = (r13 + -32004);
    goto loc_800E5118;
}

loc_800E50E4:
{
    r6 = (r13 + -32000);
    goto loc_800E5118;
}

loc_800E50EC:
{
    r6 = (r13 + -32168);
    goto loc_800E5118;
}

loc_800E50F4:
{
    r6 = (r13 + -31992);
    goto loc_800E5118;
}

loc_800E50FC:
{
    r6 = (r13 + -31984);
    goto loc_800E5118;
}

loc_800E5104:
{
    r6 = (r13 + -31976);
    goto loc_800E5118;
}

loc_800E510C:
{
    r6 = (r13 + -31968);
    goto loc_800E5118;
}

loc_800E5114:
{
    r6 = (r13 + -31960);
}

loc_800E5118:
{
    r5 = r28;
    r4 = (r31 + 8040);
    r3 = 512;
    r7 = 90;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800E5130u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800E54FC;
}

loc_800E5134:
{
    r3 = r29;
    r4 = 1;
    ctx->lr = 0x800E5140u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8010F394u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(51));
}

loc_800E5144:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E51B0;
    }
}

loc_800E5148:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E5170;
    }
}

loc_800E514C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(10));
}

loc_800E5150:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E51A0;
    }
}

loc_800E5154:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E5164;
    }
}

loc_800E5158:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(8));
}

loc_800E515C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E5198;
    }
}

loc_800E5160:
{
    goto loc_800E51E0;
}

loc_800E5164:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(50));
}

loc_800E5168:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E51A8;
    }
}

loc_800E516C:
{
    goto loc_800E51E0;
}

loc_800E5170:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(55));
}

loc_800E5174:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E51D0;
    }
}

loc_800E5178:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E518C;
    }
}

loc_800E517C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(53));
}

loc_800E5180:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E51C0;
    }
}

loc_800E5184:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E51C8;
    }
}

loc_800E5188:
{
    goto loc_800E51B8;
}

loc_800E518C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(57));
}

loc_800E5190:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E51E0;
    }
}

loc_800E5194:
{
    goto loc_800E51D8;
}

loc_800E5198:
{
    r6 = (r31 + 8012);
    goto loc_800E51E4;
}

loc_800E51A0:
{
    r6 = (r31 + 8024);
    goto loc_800E51E4;
}

loc_800E51A8:
{
    r6 = (r13 + -32004);
    goto loc_800E51E4;
}

loc_800E51B0:
{
    r6 = (r13 + -32000);
    goto loc_800E51E4;
}

loc_800E51B8:
{
    r6 = (r13 + -32168);
    goto loc_800E51E4;
}

loc_800E51C0:
{
    r6 = (r13 + -31992);
    goto loc_800E51E4;
}

loc_800E51C8:
{
    r6 = (r13 + -31984);
    goto loc_800E51E4;
}

loc_800E51D0:
{
    r6 = (r13 + -31976);
    goto loc_800E51E4;
}

loc_800E51D8:
{
    r6 = (r13 + -31968);
    goto loc_800E51E4;
}

loc_800E51E0:
{
    r6 = (r13 + -31960);
}

loc_800E51E4:
{
    r5 = r28;
    r4 = (r31 + 8040);
    r3 = 512;
    r7 = 1;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800E51FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800E54FC;
}

loc_800E5200:
{
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    r3 = r29;
    r0 = MemoryInline::FlatRead8((r4 + 22));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_800E5210:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E521C;
    }
}

loc_800E5214:
{
    r4 = MemoryInline::FlatRead32((r4 + 2192));
    goto loc_800E5220;
}

loc_800E521C:
{
    r4 = 0;
}

loc_800E5220:
{
    ctx->lr = 0x800E5224u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8010F394u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(51));
}

loc_800E5228:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E5294;
    }
}

loc_800E522C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E5254;
    }
}

loc_800E5230:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(10));
}

loc_800E5234:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E5284;
    }
}

loc_800E5238:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E5248;
    }
}

loc_800E523C:
{
}

loc_800E5240:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(8))) {
        goto loc_800E527C;
    }
}

loc_800E5244:
{
    goto loc_800E52C4;
}

loc_800E5248:
{
}

loc_800E524C:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(50))) {
        goto loc_800E528C;
    }
}

loc_800E5250:
{
    goto loc_800E52C4;
}

loc_800E5254:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(55));
}

loc_800E5258:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E52B4;
    }
}

loc_800E525C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E5270;
    }
}

loc_800E5260:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(53));
}

loc_800E5264:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E52A4;
    }
}

loc_800E5268:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E52AC;
    }
}

loc_800E526C:
{
    goto loc_800E529C;
}

loc_800E5270:
{
}

loc_800E5274:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(57))) {
        goto loc_800E52C4;
    }
}

loc_800E5278:
{
    goto loc_800E52BC;
}

loc_800E527C:
{
    r6 = (r31 + 8012);
    goto loc_800E52C8;
}

loc_800E5284:
{
    r6 = (r31 + 8024);
    goto loc_800E52C8;
}

loc_800E528C:
{
    r6 = (r13 + -32004);
    goto loc_800E52C8;
}

loc_800E5294:
{
    r6 = (r13 + -32000);
    goto loc_800E52C8;
}

loc_800E529C:
{
    r6 = (r13 + -32168);
    goto loc_800E52C8;
}

loc_800E52A4:
{
    r6 = (r13 + -31992);
    goto loc_800E52C8;
}

loc_800E52AC:
{
    r6 = (r13 + -31984);
    goto loc_800E52C8;
}

loc_800E52B4:
{
    r6 = (r13 + -31976);
    goto loc_800E52C8;
}

loc_800E52BC:
{
    r6 = (r13 + -31968);
    goto loc_800E52C8;
}

loc_800E52C4:
{
    r6 = (r13 + -31960);
}

loc_800E52C8:
{
    r7 = MemoryInline::FlatRead32((r13 + -26868));
    r5 = r28;
    r4 = (r31 + 8040);
    r3 = 512;
    r0 = MemoryInline::FlatRead8((r7 + 22));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_800E52E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E52EC;
    }
}

loc_800E52E4:
{
    r7 = MemoryInline::FlatRead32((r7 + 2192));
    goto loc_800E52F0;
}

loc_800E52EC:
{
    r7 = 0;
}

loc_800E52F0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800E52F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800E54FC;
}

loc_800E52FC:
{
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    r3 = r29;
    r4 = MemoryInline::FlatRead8((r4 + 22));
    ctx->lr = 0x800E530Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8010F394u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(51));
}

loc_800E5310:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E537C;
    }
}

loc_800E5314:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E533C;
    }
}

loc_800E5318:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(10));
}

loc_800E531C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E536C;
    }
}

loc_800E5320:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E5330;
    }
}

loc_800E5324:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(8));
}

loc_800E5328:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E5364;
    }
}

loc_800E532C:
{
    goto loc_800E53AC;
}

loc_800E5330:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(50));
}

loc_800E5334:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E5374;
    }
}

loc_800E5338:
{
    goto loc_800E53AC;
}

loc_800E533C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(55));
}

loc_800E5340:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E539C;
    }
}

loc_800E5344:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E5358;
    }
}

loc_800E5348:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(53));
}

loc_800E534C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E538C;
    }
}

loc_800E5350:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E5394;
    }
}

loc_800E5354:
{
    goto loc_800E5384;
}

loc_800E5358:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(57));
}

loc_800E535C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E53AC;
    }
}

loc_800E5360:
{
    goto loc_800E53A4;
}

loc_800E5364:
{
    r6 = (r31 + 8012);
    goto loc_800E53B0;
}

loc_800E536C:
{
    r6 = (r31 + 8024);
    goto loc_800E53B0;
}

loc_800E5374:
{
    r6 = (r13 + -32004);
    goto loc_800E53B0;
}

loc_800E537C:
{
    r6 = (r13 + -32000);
    goto loc_800E53B0;
}

loc_800E5384:
{
    r6 = (r13 + -32168);
    goto loc_800E53B0;
}

loc_800E538C:
{
    r6 = (r13 + -31992);
    goto loc_800E53B0;
}

loc_800E5394:
{
    r6 = (r13 + -31984);
    goto loc_800E53B0;
}

loc_800E539C:
{
    r6 = (r13 + -31976);
    goto loc_800E53B0;
}

loc_800E53A4:
{
    r6 = (r13 + -31968);
    goto loc_800E53B0;
}

loc_800E53AC:
{
    r6 = (r13 + -31960);
}

loc_800E53B0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r5 = r28;
    r4 = (r31 + 8040);
    r7 = MemoryInline::FlatRead8((r3 + 22));
    r3 = 512;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800E53CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800E54FC;
}

loc_800E53D0:
{
    ctx->lr = 0x800E53D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800D49B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r30 = r3;
    r3 = r29;
    r4 = r30;
    ctx->lr = 0x800E53E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8010F394u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(51));
}

loc_800E53E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E5454;
    }
}

loc_800E53EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E5414;
    }
}

loc_800E53F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(10));
}

loc_800E53F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E5444;
    }
}

loc_800E53F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E5408;
    }
}

loc_800E53FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(8));
}

loc_800E5400:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E543C;
    }
}

loc_800E5404:
{
    goto loc_800E5484;
}

loc_800E5408:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(50));
}

loc_800E540C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E544C;
    }
}

loc_800E5410:
{
    goto loc_800E5484;
}

loc_800E5414:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(55));
}

loc_800E5418:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E5474;
    }
}

loc_800E541C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E5430;
    }
}

loc_800E5420:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(53));
}

loc_800E5424:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E5464;
    }
}

loc_800E5428:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E546C;
    }
}

loc_800E542C:
{
    goto loc_800E545C;
}

loc_800E5430:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(57));
}

loc_800E5434:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E5484;
    }
}

loc_800E5438:
{
    goto loc_800E547C;
}

loc_800E543C:
{
    r6 = (r31 + 8012);
    goto loc_800E5488;
}

loc_800E5444:
{
    r6 = (r31 + 8024);
    goto loc_800E5488;
}

loc_800E544C:
{
    r6 = (r13 + -32004);
    goto loc_800E5488;
}

loc_800E5454:
{
    r6 = (r13 + -32000);
    goto loc_800E5488;
}

loc_800E545C:
{
    r6 = (r13 + -32168);
    goto loc_800E5488;
}

loc_800E5464:
{
    r6 = (r13 + -31992);
    goto loc_800E5488;
}

loc_800E546C:
{
    r6 = (r13 + -31984);
    goto loc_800E5488;
}

loc_800E5474:
{
    r6 = (r13 + -31976);
    goto loc_800E5488;
}

loc_800E547C:
{
    r6 = (r13 + -31968);
    goto loc_800E5488;
}

loc_800E5484:
{
    r6 = (r13 + -31960);
}

loc_800E5488:
{
    r5 = r28;
    r7 = r30;
    r4 = (r31 + 8040);
    r3 = 512;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800E54A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800E54FC;
}

loc_800E54A4:
{
    r0 = (r3 + -100);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(-100)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800E54A8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800E54FC;
    }
}

loc_800E54AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(154));
}

loc_800E54B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E54FC;
    }
}

loc_800E54B4:
{
    r4 = (r0 * 12);
    r3 = 0x802F0000u;
    r3 = (r3 + 5376);
    r3_addr_1 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800E54C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E54FC;
    }
}

loc_800E54CC:
{
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800E54D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E54EC;
    }
}

loc_800E54DC:
{
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r3 = r29;
    ctx->lr = 0x800E54E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8010F434u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800E54FC;
}

loc_800E54EC:
{
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r3 = r29;
    r4 = MemoryInline::FlatRead32(r4);
    ctx->lr = 0x800E54FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8010F394u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800E54FC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800E4C88 func_800E4C88 preserves=true fpr_mask=0x00000000
