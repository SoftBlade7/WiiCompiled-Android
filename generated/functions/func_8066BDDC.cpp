#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066BDDC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8066BDDC;

loc_8066BDDC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r26);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r28);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r30);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r31);
    }
    r29 = r3;
    r30 = r4;
    r0 = MemoryInline::FlatRead32((r3 + 16884));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8066BDFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066C054;
    }
}

loc_8066BE00:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r29 + 88));
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    r3 = (r3 + 131072);
    r3 = MemoryInline::FlatRead32((r3 + 20476));
    r3 = (r3 + 131072);
    r3 = (r3 + 13064);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80548B8Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = r29;
    r0 = (r4 + 1);
    r5 = 0;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r4 = (r1 + 24);
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r31 = (r31_rot_0 & 134217727);
    ctx->lr = 0x8066BE40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066C188u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_8066BE44:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8066BF58;
    }
}

loc_8066BE48:
{
    r5 = MemoryInline::FlatRead32((r29 + 88));
    r4 = MemoryInline::FlatRead32((r1 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r5));
}

loc_8066BE54:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8066BF50;
    }
}

loc_8066BE58:
{
    r3 = (r29 + 65536);
    r26 = (r4 + 1);
    r4 = MemoryInline::FlatRead32((r3 + -29952));
}

loc_8066BE68:
{
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(r4))) {
        goto loc_8066BE70;
    }
}

loc_8066BE6C:
{
    r26 = r4;
}

loc_8066BE70:
{
}

loc_8066BE74:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r4))) {
        goto loc_8066BE7C;
    }
}

loc_8066BE78:
{
    goto loc_8066BF2C;
}

loc_8066BE7C:
{
    r27 = (r5 + -1);
    r28 = 63;
    goto loc_8066BF20;
}

loc_8066BE88:
{
    r3 = r29;
    r4 = r27;
    r5 = (r1 + 16);
    ctx->lr = 0x8066BE98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066C2E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8066BE9C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8066BF14;
    }
}

loc_8066BEA0:
{
    r0 = MemoryInline::FlatRead32((r29 + 16884));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8066BEA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066BF08;
    }
}

loc_8066BEAC:
{
    r3 = r29;
    r4 = r27;
    r5 = (r1 + 20);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8066C420u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
}

loc_8066BEC0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8066BF08;
    }
}

loc_8066BEC4:
{
    r5 = MemoryInline::FlatRead32((r1 + 20));
    r3 = 0;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r4 = (r29 + r0);
    ctr = r28;
}

loc_8066BED8:
{
    r0 = MemoryInline::FlatRead16((r4 + 784));
}

loc_8066BEE0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(32))) {
        goto loc_8066BEFC;
    }
}

loc_8066BEE4:
{
    r3 = (r5 + r3);
    r0 = (r3 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = (r29 + r0);
    r0 = (r3 + 784);
    goto loc_8066BF0C;
}

loc_8066BEFC:
{
    r4 = (r4 + 2);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8066BED8;
    }
}

loc_8066BF08:
{
    r0 = 0;
}

loc_8066BF0C:
{
}

loc_8066BF10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8066BF1C;
    }
}

loc_8066BF14:
{
    r4 = (r27 + 1);
    goto loc_8066BF2C;
}

loc_8066BF1C:
{
    r27 = (r27 + -1);
}

loc_8066BF20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r26));
}

loc_8066BF24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8066BE88;
    }
}

loc_8066BF28:
{
    r4 = r26;
}

loc_8066BF2C:
{
    MemoryInline::FlatWrite32(r30, r4);
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r29 + 88));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8066BF3C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066BF48;
    }
}

loc_8066BF40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8066BF44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066C058;
    }
}

loc_8066BF48:
{
    r3 = 1;
    goto loc_8066C058;
}

loc_8066BF50:
{
    r3 = 0;
    goto loc_8066C058;
}

loc_8066BF58:
{
    r3 = (r29 + 65536);
    r5 = MemoryInline::FlatRead32((r29 + 88));
    r4 = MemoryInline::FlatRead32((r3 + -29952));
    r26 = (r5 + -9);
}

loc_8066BF6C:
{
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(r4))) {
        goto loc_8066BF74;
    }
}

loc_8066BF70:
{
    r26 = r4;
}

loc_8066BF74:
{
}

loc_8066BF78:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r4))) {
        goto loc_8066BF80;
    }
}

loc_8066BF7C:
{
    goto loc_8066C030;
}

loc_8066BF80:
{
    r27 = (r5 + -1);
    r28 = 63;
    goto loc_8066C024;
}

loc_8066BF8C:
{
    r3 = r29;
    r4 = r27;
    r5 = (r1 + 8);
    ctx->lr = 0x8066BF9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066C2E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8066BFA0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8066C018;
    }
}

loc_8066BFA4:
{
    r0 = MemoryInline::FlatRead32((r29 + 16884));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8066BFAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066C00C;
    }
}

loc_8066BFB0:
{
    r3 = r29;
    r4 = r27;
    r5 = (r1 + 12);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8066C420u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
}

loc_8066BFC4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8066C00C;
    }
}

loc_8066BFC8:
{
    r5 = MemoryInline::FlatRead32((r1 + 12));
    r3 = 0;
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    r4 = (r29 + r0);
    ctr = r28;
}

loc_8066BFDC:
{
    r0 = MemoryInline::FlatRead16((r4 + 784));
}

loc_8066BFE4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(32))) {
        goto loc_8066C000;
    }
}

loc_8066BFE8:
{
    r3 = (r5 + r3);
    r0 = (r3 + 1);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r3 = (r29 + r0);
    r0 = (r3 + 784);
    goto loc_8066C010;
}

loc_8066C000:
{
    r4 = (r4 + 2);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8066BFDC;
    }
}

loc_8066C00C:
{
    r0 = 0;
}

loc_8066C010:
{
}

loc_8066C014:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8066C020;
    }
}

loc_8066C018:
{
    r4 = (r27 + 1);
    goto loc_8066C030;
}

loc_8066C020:
{
    r27 = (r27 + -1);
}

loc_8066C024:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r26));
}

loc_8066C028:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8066BF8C;
    }
}

loc_8066C02C:
{
    r4 = r26;
}

loc_8066C030:
{
    MemoryInline::FlatWrite32(r30, r4);
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r29 + 88));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8066C040:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066C04C;
    }
}

loc_8066C044:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8066C048:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066C058;
    }
}

loc_8066C04C:
{
    r3 = 1;
    goto loc_8066C058;
}

loc_8066C054:
{
    r3 = 0;
}

loc_8066C058:
{
    r26 = MemoryInline::FlatRead32((r1 + 40));
    r27 = MemoryInline::FlatRead32((r1 + 44));
    r28 = MemoryInline::FlatRead32((r1 + 48));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8066BDDC func_8066BDDC preserves=true fpr_mask=0x00000000
