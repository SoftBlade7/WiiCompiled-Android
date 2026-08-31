#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80194CF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80194CF0;

loc_80194CF0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = -4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80194D1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80194EB8;
    }
}

loc_80194D20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80194D24:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80194D4C;
    }
}

loc_80194D28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(8));
}

loc_80194D2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80194D4C;
    }
}

loc_80194D30:
{
    r4 = 0x80340000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r4 = (r4 + 22112);
    r5 = (r4 + r0);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80194D48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80194D54;
    }
}

loc_80194D4C:
{
    r31 = -4;
    goto loc_80194EB8;
}

loc_80194D54:
{
    r0 = (r4 + 16);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
}

loc_80194D5C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80194EB8;
    }
}

loc_80194D60:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r0 = (r4 + r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
}

loc_80194D6C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80194EB8;
    }
}

loc_80194D70:
{
    r4 = MemoryInline::FlatRead32((r30 + -16));
    r6 = (r30 + -16);
    r0 = (r4 + 1161953280);
}

loc_80194D80:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80194D88;
    }
}

loc_80194D84:
{
    r6 = MemoryInline::FlatRead32((r6 + 8));
}

loc_80194D88:
{
    r4 = MemoryInline::FlatRead32(r6);
    r0 = (r4 + 1161953280);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80194D94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80194EB8;
    }
}

loc_80194D98:
{
    r0 = -1161953280;
    MemoryInline::FlatWrite32(r6, r0);
    r4 = MemoryInline::FlatRead32((r5 + 12));
    r7 = r4;
    goto loc_80194DC4;
}

loc_80194DAC:
{
    r0 = MemoryInline::FlatRead32((r7 + 12));
}

loc_80194DB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80194DCC;
    }
}

loc_80194DB8:
{
}

loc_80194DBC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r6))) {
        goto loc_80194DCC;
    }
}

loc_80194DC0:
{
    r7 = r0;
}

loc_80194DC4:
{
}

loc_80194DC8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80194DAC;
    }
}

loc_80194DCC:
{
}

loc_80194DD0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80194E00;
    }
}

loc_80194DD4:
{
}

loc_80194DD8:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(r7))) {
        goto loc_80194E00;
    }
}

loc_80194DDC:
{
    MemoryInline::FlatWrite32((r6 + 8), r7);
    r0 = MemoryInline::FlatRead32((r7 + 12));
    MemoryInline::FlatWrite32((r6 + 12), r0);
    MemoryInline::FlatWrite32((r7 + 12), r6);
    r4 = MemoryInline::FlatRead32((r6 + 12));
}

loc_80194DF4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80194E20;
    }
}

loc_80194DF8:
{
    MemoryInline::FlatWrite32((r4 + 8), r6);
    goto loc_80194E20;
}

loc_80194E00:
{
    MemoryInline::FlatWrite32((r6 + 12), r4);
    r0 = 0;
    MemoryInline::FlatWrite32((r5 + 12), r6);
    MemoryInline::FlatWrite32((r6 + 8), r0);
    r4 = MemoryInline::FlatRead32((r6 + 12));
}

loc_80194E18:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80194E20;
    }
}

loc_80194E1C:
{
    MemoryInline::FlatWrite32((r4 + 8), r6);
}

loc_80194E20:
{
}

loc_80194E24:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80194E68;
    }
}

loc_80194E28:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
    r5 = MemoryInline::FlatRead32((r6 + 12));
    r4 = (r6 + r0);
    r0 = (r4 + 16);
}

loc_80194E3C:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_80194E68;
    }
}

loc_80194E40:
{
    r4 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80194E48:
{
    MemoryInline::FlatWrite32((r6 + 12), r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80194E54;
    }
}

loc_80194E50:
{
    MemoryInline::FlatWrite32((r4 + 8), r6);
}

loc_80194E54:
{
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r4 = (r0 + r4);
    r0 = (r4 + 16);
    MemoryInline::FlatWrite32((r6 + 4), r0);
}

loc_80194E68:
{
    r5 = MemoryInline::FlatRead32((r6 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80194E70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80194EB4;
    }
}

loc_80194E74:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r6 = MemoryInline::FlatRead32((r5 + 12));
    r4 = (r5 + r0);
    r0 = (r4 + 16);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_80194E88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80194EB4;
    }
}

loc_80194E8C:
{
    r4 = MemoryInline::FlatRead32((r6 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80194E94:
{
    MemoryInline::FlatWrite32((r5 + 12), r4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80194EA0;
    }
}

loc_80194E9C:
{
    MemoryInline::FlatWrite32((r4 + 8), r5);
}

loc_80194EA0:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 4));
    r4 = (r0 + r4);
    r0 = (r4 + 16);
    MemoryInline::FlatWrite32((r5 + 4), r0);
}

loc_80194EB4:
{
    r31 = 0;
}

loc_80194EB8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00000FB gpr_write=0xE00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80194CF0 func_80194CF0 preserves=true fpr_mask=0x00000000
