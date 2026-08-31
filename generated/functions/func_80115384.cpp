#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80115384(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lbzux_80115460_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r29_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80115384;

loc_80115384:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80115390:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801153B4;
    }
}

loc_801153AC:
{
    r3 = 0;
    goto loc_80115510;
}

loc_801153B4:
{
    r30 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801153BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801153C8;
    }
}

loc_801153C0:
{
    r3 = 0;
    goto loc_80115510;
}

loc_801153C8:
{
    r3 = r30;
    r4 = (r13 + -30208);
    r5 = 7;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800133B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801153DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801153F0;
    }
}

loc_801153E0:
{
    r0 = 0;
    r29 = (r30 + 7);
    MemoryInline::FlatWrite32((r31 + 40), r0);
    goto loc_80115424;
}

loc_801153F0:
{
    r4 = 0x80280000u;
    r3 = r30;
    r4 = (r4 + -9864);
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800133B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80115408:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011541C;
    }
}

loc_8011540C:
{
    r0 = 1;
    r29 = (r30 + 8);
    MemoryInline::FlatWrite32((r31 + 40), r0);
    goto loc_80115424;
}

loc_8011541C:
{
    r3 = 0;
    goto loc_80115510;
}

loc_80115424:
{
    r3 = r29;
    r4 = (r13 + -30200);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013428u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r29_addr_1 = (r29 + r3);
    r28 = MemoryInline::FlatRead8(r29_addr_1);
    r0 = 0;
    r30 = r3;
    r29_addr_2 = (r29 + r3);
    MemoryInline::FlatWrite8(r29_addr_2, static_cast<uint8_t>(r0));
    r3 = r29;
    ctx->lr = 0x80115448u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F23F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8011544C:
{
    MemoryInline::FlatWrite32((r31 + 24), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011545C;
    }
}

loc_80115454:
{
    r3 = 0;
    goto loc_80115510;
}

loc_8011545C:
{
    r29_addr_3 = (r29 + r30);
    MemoryInline::FlatWrite8(r29_addr_3, static_cast<uint8_t>(r28));
    addr_lbzux_80115460_loc_0 = (r29 + r30);
    r0 = MemoryInline::FlatRead8(addr_lbzux_80115460_loc_0);
    r29 = addr_lbzux_80115460_loc_0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(58));
}

loc_80115468:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801154A4;
    }
}

loc_8011546C:
{
    r29 = (r29 + 1);
    r3 = r29;
    ctx->lr = 0x80115478u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001543Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011547C:
{
    MemoryInline::FlatWrite16((r31 + 32), static_cast<uint16_t>(r3));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011548C;
    }
}

loc_80115484:
{
    r3 = 0;
    goto loc_80115510;
}

loc_8011548C:
{
    r29 = (r29 + 1);
    r0 = MemoryInline::FlatRead8(r29);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801154C4;
    }
}

loc_80115498:
{
}

loc_8011549C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(47))) {
        goto loc_8011548C;
    }
}

loc_801154A0:
{
    goto loc_801154C4;
}

loc_801154A4:
{
    r0 = MemoryInline::FlatRead32((r31 + 40));
}

loc_801154AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_801154BC;
    }
}

loc_801154B0:
{
    r0 = 443;
    MemoryInline::FlatWrite16((r31 + 32), static_cast<uint16_t>(r0));
    goto loc_801154C4;
}

loc_801154BC:
{
    r0 = 80;
    MemoryInline::FlatWrite16((r31 + 32), static_cast<uint16_t>(r0));
}

loc_801154C4:
{
    r0 = MemoryInline::FlatRead8(r29);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801154D4;
    }
}

loc_801154D0:
{
    r29 = (r13 + -30196);
}

loc_801154D4:
{
    r3 = r29;
    ctx->lr = 0x801154DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F23F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r31 + 36), r3);
    r30 = 43;
    goto loc_801154EC;
}

loc_801154E8:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r30));
}

loc_801154EC:
{
    r29 = MemoryInline::FlatRead32((r31 + 36));
    r4 = 32;
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800133F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80115500:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801154E8;
    }
}

loc_80115504:
{
    r0 = (0 - r29);
    r0 = (r0 | r29);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_80115510:
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80115384 func_80115384 preserves=true fpr_mask=0x00000000
