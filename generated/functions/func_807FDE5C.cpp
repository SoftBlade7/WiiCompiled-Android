#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807FDE5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807FDE5C;

loc_807FDE5C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0x808B0000u;
    r31 = (r31 + -21328);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r8 = MemoryInline::FlatRead16((r3 + 320));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r5 = MemoryInline::FlatRead16((r3 + 318));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r8));
    r6 = MemoryInline::FlatRead16((r3 + 322));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r7 = (r6 - r5);
    r0 = (r0 * r8);
    r29 = (r4 - r0);
}

loc_807FDEA0:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(r7))) {
        goto loc_807FDEB0;
    }
}

loc_807FDEA4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 260), r0);
    goto loc_807FDF0C;
}

loc_807FDEB0:
{
}

loc_807FDEB4:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r29))) {
        goto loc_807FDEDC;
    }
}

loc_807FDEB8:
{
}

loc_807FDEBC:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(r6))) {
        goto loc_807FDEDC;
    }
}

loc_807FDEC0:
{
    r4 = MemoryInline::FlatRead16((r3 + 316));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 260), r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r0 + r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r29 = (static_cast<int32_t>(r0) >> 1);
    goto loc_807FDF0C;
}

loc_807FDEDC:
{
}

loc_807FDEE0:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(r29))) {
        goto loc_807FDF00;
    }
}

loc_807FDEE4:
{
    r0 = (r8 - r5);
}

loc_807FDEEC:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(r0))) {
        goto loc_807FDF00;
    }
}

loc_807FDEF0:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 260), r0);
    r29 = (r29 - r5);
    goto loc_807FDF0C;
}

loc_807FDF00:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 260), r0);
    r29 = MemoryInline::FlatRead16((r3 + 316));
    r29 = (r29 << 16);
    r29 = (static_cast<int32_t>(r29) >> 16);
}

loc_807FDF0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(1));
}

loc_807FDF10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807FDF30;
    }
}

loc_807FDF14:
{
    r3 = MemoryInline::FlatRead16((r3 + 316));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
    r0 = (r0 + r3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_807FDF2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807FDF40;
    }
}

loc_807FDF30:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r3 = r30;
    r4 = 674;
    ctx->lr = 0x807FDF40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x808204FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807FDF40:
{
    r0 = (r29 ^ -2147483648);
    r29 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = MemoryInline::FlatReadFloat64((r31 + 8));
    MemoryInline::FlatWriteRam32((r1 + 8), r29);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 328));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8022F86Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead16((r30 + 324));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 16));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f2.d = MemoryInline::FlatReadFloat64((r31 + 8));
    MemoryInline::FlatWriteRam32((r1 + 16), r29);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 20));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xE00011FB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807FDE5C func_807FDE5C preserves=true fpr_mask=0x00000000
