#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80194AE8(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80194AE8;

loc_80194AE8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80194B1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80194CC4;
    }
}

loc_80194B20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80194B24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80194CC4;
    }
}

loc_80194B28:
{
    r0 = (r30 + -1);
    r0 = (r30 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80194CC4;
    }
}

loc_80194B34:
{
}

loc_80194B38:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(32))) {
        goto loc_80194B40;
    }
}

loc_80194B3C:
{
    r30 = 32;
}

loc_80194B40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80194B44:
{
    r0 = (r29 + 31);
    r29 = (r0 & -32);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80194B70;
    }
}

loc_80194B50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(8));
}

loc_80194B54:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80194B70;
    }
}

loc_80194B58:
{
    r4 = 0x80340000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r4 = (r4 + 22112);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_1);
    r4 = r4_addr_1;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80194B6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80194B78;
    }
}

loc_80194B70:
{
    r31 = 0;
    goto loc_80194CC4;
}

loc_80194B78:
{
    r8 = MemoryInline::FlatRead32((r4 + 12));
    r6 = (r30 + -1);
    r5 = 0;
    goto loc_80194BDC;
}

loc_80194B88:
{
    r7 = MemoryInline::FlatRead32((r8 + 4));
    r0 = (r8 + 16);
    r0 = (r0 & r6);
}

loc_80194B98:
{
    r0 = (r30 - r0);
    r0 = (r6 & r0);
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r29))) {
        goto loc_80194BB4;
    }
}

loc_80194BA4:
{
}

loc_80194BA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80194BB4;
    }
}

loc_80194BAC:
{
    r5 = r8;
    goto loc_80194BE4;
}

loc_80194BB4:
{
    r0 = (r29 + r0);
}

loc_80194BBC:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(r0))) {
        goto loc_80194BD8;
    }
}

loc_80194BC0:
{
}

loc_80194BC4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80194BD4;
    }
}

loc_80194BC8:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_80194BD0:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r0))) {
        goto loc_80194BD8;
    }
}

loc_80194BD4:
{
    r5 = r8;
}

loc_80194BD8:
{
    r8 = MemoryInline::FlatRead32((r8 + 12));
}

loc_80194BDC:
{
}

loc_80194BE0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80194B88;
    }
}

loc_80194BE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80194BE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80194CC4;
    }
}

loc_80194BEC:
{
    r7 = (r30 + -1);
    r0 = (r5 + 16);
    r0 = (r0 & r7);
    r6 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r30 - r0);
    r8 = (r7 & r0);
    r7 = (r29 + r8);
    r0 = (r7 + 16);
}

loc_80194C10:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(r0))) {
        goto loc_80194C58;
    }
}

loc_80194C14:
{
    r6 = (r5 + r29);
    r0 = -1161953280;
    r9 = (r8 + r6);
    MemoryInline::FlatWrite32((r9 + 16), r0);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r0 - r29);
    r6 = (r0 - r8);
    r0 = (r6 + -16);
    MemoryInline::FlatWrite32((r9 + 20), r0);
    r6 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80194C40:
{
    MemoryInline::FlatWrite32((r9 + 28), r6);
    r9 = (r9 + 16);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80194C50;
    }
}

loc_80194C4C:
{
    MemoryInline::FlatWrite32((r6 + 8), r9);
}

loc_80194C50:
{
    MemoryInline::FlatWrite32((r5 + 12), r9);
    MemoryInline::FlatWrite32((r5 + 4), r7);
}

loc_80194C58:
{
    r6 = -1161953280;
    r0 = (r6 + 1);
    MemoryInline::FlatWrite32(r5, r0);
    r6 = MemoryInline::FlatRead32((r5 + 8));
}

loc_80194C6C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80194C7C;
    }
}

loc_80194C70:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWrite32((r6 + 12), r0);
    goto loc_80194C84;
}

loc_80194C7C:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWrite32((r4 + 12), r0);
}

loc_80194C84:
{
    r4 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80194C8C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80194C98;
    }
}

loc_80194C90:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32((r4 + 8), r0);
}

loc_80194C98:
{
    r0 = 0;
    r31 = (r5 + r8);
    MemoryInline::FlatWrite32((r5 + 12), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_80194CA8:
{
    r31 = (r31 + 16);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80194CC4;
    }
}

loc_80194CB4:
{
    r4 = -1161953280;
    r0 = (r4 + 2);
    MemoryInline::FlatWrite32((r31 + -16), r0);
    MemoryInline::FlatWrite32((r31 + -8), r5);
}

loc_80194CC4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
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
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00003FB gpr_write=0xF00003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80194AE8 func_80194AE8 preserves=true fpr_mask=0x00000000
