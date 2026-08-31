#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800ACBF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_800ACD6C_loc_0 = 0;
    uint32_t addr_lfsx_800ACD88_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r5_ca_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800ACBF0;

loc_800ACBF0:
{
    r5 = (3071 - r3);
    r0 = 3072;
    r5 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_800ACC00:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -27968));
    r6 = 0;
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_800ACC44;
    }
}

loc_800ACC0C:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r4 = (r4_rot_1 & 536870911);
}

loc_800ACC10:
{
    r0 = (r5 * 3072);
    ctr = r4;
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800ACC30;
    }
}

loc_800ACC1C:
{
    // nop
}

loc_800ACC20:
{
    r6 = (r6 + -8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800ACC20;
    }
}

loc_800ACC28:
{
    r5 = (r5 & 7);
}

loc_800ACC2C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800ACC40;
    }
}

loc_800ACC30:
{
    ctr = r5;
    // nop
}

loc_800ACC38:
{
    r6 = (r6 + -1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800ACC38;
    }
}

loc_800ACC40:
{
    r3 = (r3 + r0);
}

loc_800ACC44:
{
    r0 = 3072;
}

loc_800ACC4C:
{
    r5 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(3072))) {
        goto loc_800ACC8C;
    }
}

loc_800ACC54:
{
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r4 = (r4_rot_3 & 536870911);
}

loc_800ACC58:
{
    r0 = (r5 * -3072);
    ctr = r4;
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800ACC78;
    }
}

loc_800ACC64:
{
    // nop
}

loc_800ACC68:
{
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800ACC68;
    }
}

loc_800ACC70:
{
    r5 = (r5 & 7);
}

loc_800ACC74:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800ACC88;
    }
}

loc_800ACC78:
{
    ctr = r5;
    // nop
}

loc_800ACC80:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800ACC80;
    }
}

loc_800ACC88:
{
    r3 = (r3 + r0);
}

loc_800ACC8C:
{
}

loc_800ACC90:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27964));
    r5 = r6;
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_800ACCEC;
    }
}

loc_800ACC9C:
{
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r4 = (r4_rot_5 & 536870911);
}

loc_800ACCA0:
{
    r0 = (0 - r6);
    ctr = r4;
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800ACCD8;
    }
}

loc_800ACCAC:
{
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800ACCAC;
    }
}

loc_800ACCD0:
{
    r5 = (r6 & 7);
}

loc_800ACCD4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800ACCE8;
    }
}

loc_800ACCD8:
{
    ctr = r5;
    // nop
}

loc_800ACCE0:
{
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800ACCE0;
    }
}

loc_800ACCE8:
{
    r6 = (r6 + r0);
}

loc_800ACCEC:
{
}

loc_800ACCF0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27960));
    r4 = (0 - r6);
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(0))) {
        goto loc_800ACD40;
    }
}

loc_800ACCFC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
}

loc_800ACD00:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800ACD34;
    }
}

loc_800ACD08:
{
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800ACD08;
    }
}

loc_800ACD2C:
{
    r4 = (r4 & 7);
}

loc_800ACD30:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800ACD40;
    }
}

loc_800ACD34:
{
    ctr = r4;
}

loc_800ACD38:
{
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800ACD38;
    }
}

loc_800ACD40:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r3) >> 8);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_3 & -16777216);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r0 = (r0 - r3);
    r5_ca_0 = (xer >> 29) & 1u;
    r5 = (r4 + r5_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_4 & -1);
    r3 = (r0 + r3);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800ACD74;
    }
}

loc_800ACD60:
{
    r4 = 0x80250000u;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4 = (r4 + -27768);
    addr_lfsx_800ACD6C_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_800ACD6C_loc_0);
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_800ACD74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800ACD78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_800ACD7C:
{
    r4 = 0x80250000u;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r4 = (r4 + -27720);
    addr_lfsx_800ACD88_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_800ACD88_loc_0);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007D gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800ACBF0 func_800ACBF0 preserves=true fpr_mask=0x00000000
